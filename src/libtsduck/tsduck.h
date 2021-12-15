//----------------------------------------------------------------------------
//
// TSDuck - The MPEG Transport Stream Toolkit
// Copyright (c) 2005-2021, Thierry Lelegard
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
// THE POSSIBILITY OF SUCH DAMAGE.
//
//----------------------------------------------------------------------------

#pragma once
#include "tsAACDescriptor.h"
#include "tsAbortInterface.h"
#include "tsAbstractAudioVideoAttributes.h"
#include "tsAbstractAVCAccessUnit.h"
#include "tsAbstractDatagramInputPlugin.h"
#include "tsAbstractDatagramOutputPlugin.h"
#include "tsAbstractDefinedByStandards.h"
#include "tsAbstractDeliverySystemDescriptor.h"
#include "tsAbstractDemux.h"
#include "tsAbstractDescrambler.h"
#include "tsAbstractDescriptor.h"
#include "tsAbstractDescriptorsTable.h"
#include "tsAbstractDuplicateRemapPlugin.h"
#include "tsAbstractHEVCAccessUnit.h"
#include "tsAbstractHTTPInputPlugin.h"
#include "tsAbstractLogicalChannelDescriptor.h"
#include "tsAbstractLongTable.h"
#include "tsAbstractMultilingualDescriptor.h"
#include "tsAbstractNetworkAddress.h"
#include "tsAbstractNumber.h"
#include "tsAbstractOutputStream.h"
#include "tsAbstractPacketizer.h"
#include "tsAbstractPreferredNameIdentifierDescriptor.h"
#include "tsAbstractPreferredNameListDescriptor.h"
#include "tsAbstractReadStreamInterface.h"
#include "tsAbstractSignalization.h"
#include "tsAbstractTable.h"
#include "tsAbstractTablePlugin.h"
#include "tsAbstractTransportListTable.h"
#include "tsAbstractVideoAccessUnit.h"
#include "tsAbstractVideoData.h"
#include "tsAbstractVideoStructure.h"
#include "tsAbstractVVCAccessUnit.h"
#include "tsAbstractWriteStreamInterface.h"
#include "tsAC3Attributes.h"
#include "tsAccessUnitIterator.h"
#include "tsAdaptationFieldDataDescriptor.h"
#include "tsAES.h"
#include "tsAFExtensionsDescriptor.h"
#include "tsAIT.h"
#include "tsAlgorithm.h"
#include "tsAncillaryDataDescriptor.h"
#include "tsAnnouncementSupportDescriptor.h"
#include "tsApplicationDescriptor.h"
#include "tsApplicationIconsDescriptor.h"
#include "tsApplicationIdentifier.h"
#include "tsApplicationNameDescriptor.h"
#include "tsApplicationRecordingDescriptor.h"
#include "tsApplicationSharedLibrary.h"
#include "tsApplicationSignallingDescriptor.h"
#include "tsApplicationStorageDescriptor.h"
#include "tsApplicationUsageDescriptor.h"
#include "tsAreaBroadcastingInformationDescriptor.h"
#include "tsArgMix.h"
#include "tsArgs.h"
#include "tsArgsSupplierInterface.h"
#include "tsArgsWithPlugins.h"
#include "tsARIBCharset.h"
#include "tsAssociationTagDescriptor.h"
#include "tsAsyncReport.h"
#include "tsAsyncReportArgs.h"
#include "tsATSCAC3AudioStreamDescriptor.h"
#include "tsATSCEAC3AudioDescriptor.h"
#include "tsATSCEIT.h"
#include "tsATSCMultipleString.h"
#include "tsATSCStuffingDescriptor.h"
#include "tsATSCTimeShiftedServiceDescriptor.h"
#include "tsAudioComponentDescriptor.h"
#include "tsAudioLanguageOptions.h"
#include "tsAudioPreselectionDescriptor.h"
#include "tsAudioStreamDescriptor.h"
#include "tsAVC.h"
#include "tsAVCAccessUnitDelimiter.h"
#include "tsAVCAttributes.h"
#include "tsAVCHRDParameters.h"
#include "tsAVCParser.h"
#include "tsAVCSequenceParameterSet.h"
#include "tsAVCTimingAndHRDDescriptor.h"
#include "tsAVCVideoDescriptor.h"
#include "tsAVCVUIParameters.h"
#include "tsBasicLocalEventDescriptor.h"
#include "tsBAT.h"
#include "tsBCD.h"
#include "tsBetterSystemRandomGenerator.h"
#include "tsBinaryTable.h"
#include "tsBIT.h"
#include "tsBitRate.h"
#include "tsBitrateDifferenceDVBT.h"
#include "tsBitRateRegulator.h"
#include "tsBlockCipher.h"
#include "tsBlockCipherAlertInterface.h"
#include "tsBoardInformationDescriptor.h"
#include "tsBoolPredicate.h"
#include "tsBouquetNameDescriptor.h"
#include "tsBroadcasterNameDescriptor.h"
#include "tsBuffer.h"
#include "tsByteBlock.h"
#include "tsByteSwap.h"
#include "tsC2BundleDeliverySystemDescriptor.h"
#include "tsC2DeliverySystemDescriptor.h"
#include "tsCableDeliverySystemDescriptor.h"
#include "tsCableEmergencyAlertTable.h"
#include "tsCAContractInfoDescriptor.h"
#include "tsCADescriptor.h"
#include "tsCAEMMTSDescriptor.h"
#include "tsCAIdentifierDescriptor.h"
#include "tsCaptionServiceDescriptor.h"
#include "tsCarouselIdentifierDescriptor.h"
#include "tsCASDate.h"
#include "tsCAServiceDescriptor.h"
#include "tsCASFamily.h"
#include "tsCASMapper.h"
#include "tsCASSelectionArgs.h"
#include "tsCAT.h"
#include "tsCBC.h"
#include "tsCDT.h"
#include "tsCellFrequencyLinkDescriptor.h"
#include "tsCellListDescriptor.h"
#include "tsCerrReport.h"
#include "tsChannelFile.h"
#include "tsCharset.h"
#include "tsCIAncillaryDataDescriptor.h"
#include "tsCipherChaining.h"
#include "tsCIT.h"
#include "tsCodecType.h"
#include "tsCOM.h"
#include "tsCommandLine.h"
#include "tsCommandLineHandler.h"
#include "tsComponentDescriptor.h"
#include "tsComponentNameDescriptor.h"
#include "tsCondition.h"
#include "tsConditionalPlaybackDescriptor.h"
#include "tsConfigFile.h"
#include "tsConfigSection.h"
#include "tsConsoleState.h"
#include "tsContentAdvisoryDescriptor.h"
#include "tsContentAvailabilityDescriptor.h"
#include "tsContentDescriptor.h"
#include "tsContentIdentifierDescriptor.h"
#include "tsContentLabellingDescriptor.h"
#include "tsContinuityAnalyzer.h"
#include "tsCopyrightDescriptor.h"
#include "tsCountryAvailabilityDescriptor.h"
#include "tsCPDescriptor.h"
#include "tsCPIdentifierDescriptor.h"
#include "tsCRC32.h"
#include "tsCTR.h"
#include "tsCTS1.h"
#include "tsCTS2.h"
#include "tsCTS3.h"
#include "tsCTS4.h"
#include "tsCueIdentifierDescriptor.h"
#include "tsCVCT.h"
#include "tsCyclingPacketizer.h"
#include "tsDataBroadcastDescriptor.h"
#include "tsDataBroadcastIdDescriptor.h"
#include "tsDataComponentDescriptor.h"
#include "tsDataContentDescriptor.h"
#include "tsDataStreamAlignmentDescriptor.h"
#include "tsDCCArrivingRequestDescriptor.h"
#include "tsDCCDepartingRequestDescriptor.h"
#include "tsDCCSCT.h"
#include "tsDCCT.h"
#include "tsDebugPlugin.h"
#include "tsDeferredAssociationTagsDescriptor.h"
#include "tsDektecControl.h"
#include "tsDektecDeviceInfo.h"
#include "tsDektecInputPlugin.h"
#include "tsDektecOutputPlugin.h"
#include "tsDektecUtils.h"
#include "tsDeliverySystem.h"
#include "tsDemuxedData.h"
#include "tsDES.h"
#include "tsDescriptor.h"
#include "tsDescriptorList.h"
#include "tsDigitalCopyControlDescriptor.h"
#include "tsDIILocationDescriptor.h"
#include "tsDiscontinuityInformationTable.h"
#include "tsDisplayInterface.h"
#include "tsDropOutputPlugin.h"
#include "tsDSMCCStreamDescriptorsTable.h"
#include "tsDSNGDescriptor.h"
#include "tsDTGGuidanceDescriptor.h"
#include "tsDTGHDSimulcastLogicalChannelDescriptor.h"
#include "tsDTGLogicalChannelDescriptor.h"
#include "tsDTGPreferredNameIdentifierDescriptor.h"
#include "tsDTGPreferredNameListDescriptor.h"
#include "tsDTGServiceAttributeDescriptor.h"
#include "tsDTGShortServiceNameDescriptor.h"
#include "tsDTSDescriptor.h"
#include "tsDTSHDDescriptor.h"
#include "tsDTSNeuralDescriptor.h"
#include "tsDuckConfigFile.h"
#include "tsDuckContext.h"
#include "tsDuckExtensionRepository.h"
#include "tsDuckProtocol.h"
#include "tsDumpCharset.h"
#include "tsDVBAC3Descriptor.h"
#include "tsDVBAC4Descriptor.h"
#include "tsDVBCharset.h"
#include "tsDVBCharTable.h"
#include "tsDVBCharTableSingleByte.h"
#include "tsDVBCharTableUTF16.h"
#include "tsDVBCharTableUTF8.h"
#include "tsDVBCISSA.h"
#include "tsDVBCSA2.h"
#include "tsDVBEnhancedAC3Descriptor.h"
#include "tsDVBHTMLApplicationBoundaryDescriptor.h"
#include "tsDVBHTMLApplicationDescriptor.h"
#include "tsDVBHTMLApplicationLocationDescriptor.h"
#include "tsDVBJApplicationDescriptor.h"
#include "tsDVBJApplicationLocationDescriptor.h"
#include "tsDVBStuffingDescriptor.h"
#include "tsDVBTimeShiftedServiceDescriptor.h"
#include "tsDVS042.h"
#include "tsEacemHDSimulcastLogicalChannelDescriptor.h"
#include "tsEacemLogicalChannelNumberDescriptor.h"
#include "tsEacemPreferredNameIdentifierDescriptor.h"
#include "tsEacemPreferredNameListDescriptor.h"
#include "tsEacemStreamIdentifierDescriptor.h"
#include "tsEASAudioFileDescriptor.h"
#include "tsEASInbandDetailsChannelDescriptor.h"
#include "tsEASInbandExceptionChannelsDescriptor.h"
#include "tsEASMetadataDescriptor.h"
#include "tsECB.h"
#include "tsECMGClient.h"
#include "tsECMGClientArgs.h"
#include "tsECMGClientHandlerInterface.h"
#include "tsECMGSCS.h"
#include "tsECMRepetitionRateDescriptor.h"
#include "tsEDID.h"
#include "tsEditLine.h"
#include "tsEIT.h"
#include "tsEITGenerator.h"
#include "tsEITProcessor.h"
#include "tsEITRepetitionProfile.h"
#include "tsEmergencyInformationDescriptor.h"
#include "tsEMMGClient.h"
#include "tsEMMGMUX.h"
#include "tsEnumeration.h"
#include "tsEnumUtils.h"
#include "tsERT.h"
#include "tsETID.h"
#include "tsETT.h"
#include "tsEutelsatChannelNumberDescriptor.h"
#include "tsEventGroupDescriptor.h"
#include "tsException.h"
#include "tsExtendedBroadcasterDescriptor.h"
#include "tsExtendedChannelNameDescriptor.h"
#include "tsExtendedEventDescriptor.h"
#include "tsExternalApplicationAuthorizationDescriptor.h"
#include "tsExternalESIdDescriptor.h"
#include "tsFatal.h"
#include "tsFileInputPlugin.h"
#include "tsFileNameGenerator.h"
#include "tsFileNameRate.h"
#include "tsFileNameRateList.h"
#include "tsFileOutputPlugin.h"
#include "tsFilePacketPlugin.h"
#include "tsFileUtils.h"
#include "tsFixedPoint.h"
#include "tsFlexMuxTimingDescriptor.h"
#include "tsFloatingPoint.h"
#include "tsFMCDescriptor.h"
#include "tsForkInputPlugin.h"
#include "tsForkOutputPlugin.h"
#include "tsForkPacketPlugin.h"
#include "tsForkPipe.h"
#include "tsFraction.h"
#include "tsFrequencyListDescriptor.h"
#include "tsFTAContentManagementDescriptor.h"
#include "tsFunctors.h"
#include "tsGenreDescriptor.h"
#include "tsGitHubRelease.h"
#include "tsGraphicsConstraintsDescriptor.h"
#include "tsGreenExtensionDescriptor.h"
#include "tsGrid.h"
#include "tsGuardCondition.h"
#include "tsGuardMutex.h"
#include "tsHash.h"
#include "tsHEVC.h"
#include "tsHEVCAccessUnitDelimiter.h"
#include "tsHEVCAttributes.h"
#include "tsHEVCHierarchyExtensionDescriptor.h"
#include "tsHEVCHRDParameters.h"
#include "tsHEVCProfileTierLevel.h"
#include "tsHEVCScalingListData.h"
#include "tsHEVCSequenceParameterSet.h"
#include "tsHEVCShortTermReferencePictureSetList.h"
#include "tsHEVCTimingAndHRDDescriptor.h"
#include "tsHEVCVideoDescriptor.h"
#include "tsHEVCVUIParameters.h"
#include "tsHFBand.h"
#include "tsHiDesDevice.h"
#include "tsHiDesDeviceInfo.h"
#include "tsHierarchicalTransmissionDescriptor.h"
#include "tsHierarchyDescriptor.h"
#include "tshls.h"
#include "tshlsInputPlugin.h"
#include "tshlsMediaElement.h"
#include "tshlsMediaPlayList.h"
#include "tshlsMediaSegment.h"
#include "tshlsOutputPlugin.h"
#include "tshlsPlayList.h"
#include "tshlsTagAttributes.h"
#include "tsHTTPInputPlugin.h"
#include "tsHybridInformationDescriptor.h"
#include "tsIBPDescriptor.h"
#include "tsIDSA.h"
#include "tsImageIconDescriptor.h"
#include "tsInputPlugin.h"
#include "tsInputRedirector.h"
#include "tsInputSwitcher.h"
#include "tsInputSwitcherArgs.h"
#include "tsINT.h"
#include "tsInteger.h"
#include "tsIntegerUtils.h"
#include "tsInterruptHandler.h"
#include "tsInvalidSectionHandlerInterface.h"
#include "tsIPInputPlugin.h"
#include "tsIPMACGenericStreamLocationDescriptor.h"
#include "tsIPMACPlatformNameDescriptor.h"
#include "tsIPMACPlatformProviderNameDescriptor.h"
#include "tsIPMACStreamLocationDescriptor.h"
#include "tsIPOutputPlugin.h"
#include "tsIPProtocols.h"
#include "tsIPSignallingDescriptor.h"
#include "tsIPUtils.h"
#include "tsIPv4Address.h"
#include "tsIPv4AddressMask.h"
#include "tsIPv4Packet.h"
#include "tsIPv4SocketAddress.h"
#include "tsIPv6Address.h"
#include "tsIPv6SocketAddress.h"
#include "tsISDBAccessControlDescriptor.h"
#include "tsISDBTerrestrialDeliverySystemDescriptor.h"
#include "tsISO639LanguageDescriptor.h"
#include "tsISPAccessModeDescriptor.h"
#include "tsITT.h"
#include "tsJ2KVideoDescriptor.h"
#include "tsjson.h"
#include "tsjsonArray.h"
#include "tsjsonFalse.h"
#include "tsjsonNull.h"
#include "tsjsonNumber.h"
#include "tsjsonObject.h"
#include "tsjsonOutputArgs.h"
#include "tsjsonRunningDocument.h"
#include "tsjsonString.h"
#include "tsjsonTrue.h"
#include "tsjsonValue.h"
#include "tsKeyTable.h"
#include "tsLDT.h"
#include "tsLegacyBandWidth.h"
#include "tsLinkageDescriptor.h"
#include "tsLIT.h"
#include "tsLNB.h"
#include "tsLocalTimeOffsetDescriptor.h"
#include "tsLogicalChannelNumbers.h"
#include "tsLogoTransmissionDescriptor.h"
#include "tsMACAddress.h"
#include "tsMain.h"
#include "tsMaximumBitrateDescriptor.h"
#include "tsMemory.h"
#include "tsMemoryInputPlugin.h"
#include "tsMemoryOutputPlugin.h"
#include "tsMessageDescriptor.h"
#include "tsMessagePriorityQueue.h"
#include "tsMessageQueue.h"
#include "tsMetadataDescriptor.h"
#include "tsMetadataPointerDescriptor.h"
#include "tsMetadataSTDDescriptor.h"
#include "tsMGT.h"
#include "tsMJD.h"
#include "tsModulation.h"
#include "tsModulationArgs.h"
#include "tsMonotonic.h"
#include "tsMosaicDescriptor.h"
#include "tsMPEDemux.h"
#include "tsMPEG2.h"
#include "tsMPEG2AACAudioDescriptor.h"
#include "tsMPEG2AudioAttributes.h"
#include "tsMPEG2StereoscopicVideoFormatDescriptor.h"
#include "tsMPEG2VideoAttributes.h"
#include "tsMPEG4AudioDescriptor.h"
#include "tsMPEG4VideoDescriptor.h"
#include "tsMPEGH3DAudioDescriptor.h"
#include "tsMPEGH3DAudioMultiStreamDescriptor.h"
#include "tsMPEHandlerInterface.h"
#include "tsMPEPacket.h"
#include "tsMultilingualBouquetNameDescriptor.h"
#include "tsMultilingualComponentDescriptor.h"
#include "tsMultilingualNetworkNameDescriptor.h"
#include "tsMultilingualServiceNameDescriptor.h"
#include "tsMultiplexBufferDescriptor.h"
#include "tsMultiplexBufferUtilizationDescriptor.h"
#include "tsMutex.h"
#include "tsMutexInterface.h"
#include "tsMuxer.h"
#include "tsMuxerArgs.h"
#include "tsMVCExtensionDescriptor.h"
#include "tsMVCOperationPointDescriptor.h"
#include "tsNames.h"
#include "tsNamesFile.h"
#include "tsNBIT.h"
#include "tsNetworkChangeNotifyDescriptor.h"
#include "tsNetworkNameDescriptor.h"
#include "tsNIT.h"
#include "tsNodeRelationDescriptor.h"
#include "tsNorDigLogicalChannelDescriptorV1.h"
#include "tsNorDigLogicalChannelDescriptorV2.h"
#include "tsNPTEndpointDescriptor.h"
#include "tsNPTReferenceDescriptor.h"
#include "tsNullInputPlugin.h"
#include "tsNullMutex.h"
#include "tsNullReport.h"
#include "tsNVODReferenceDescriptor.h"
#include "tsObject.h"
#include "tsObjectRepository.h"
#include "tsOneShotPacketizer.h"
#include "tsOUI.h"
#include "tsOutputPager.h"
#include "tsOutputPlugin.h"
#include "tsOutputRedirector.h"
#include "tsPacketDecapsulation.h"
#include "tsPacketEncapsulation.h"
#include "tsPacketInsertionController.h"
#include "tsPacketizer.h"
#include "tsPagerArgs.h"
#include "tsParentalRatingDescriptor.h"
#include "tsPartialReceptionDescriptor.h"
#include "tsPartialTransportStreamDescriptor.h"
#include "tsPAT.h"
#include "tsPcap.h"
#include "tsPcapFile.h"
#include "tsPcapFilter.h"
#include "tsPcapStream.h"
#include "tsPCAT.h"
#include "tsPCRAnalyzer.h"
#include "tsPCRMerger.h"
#include "tsPCRRegulator.h"
#include "tsPCSC.h"
#include "tsPDCDescriptor.h"
#include "tsPES.h"
#include "tsPESDemux.h"
#include "tsPESHandlerInterface.h"
#include "tsPESOneShotPacketizer.h"
#include "tsPESPacket.h"
#include "tsPESPacketizer.h"
#include "tsPESProviderInterface.h"
#include "tsPESStreamPacketizer.h"
#include "tsPIDOperator.h"
#include "tsPlatform.h"
#include "tsPlugin.h"
#include "tsPluginEventContext.h"
#include "tsPluginEventData.h"
#include "tsPluginEventHandlerInterface.h"
#include "tsPluginEventHandlerRegistry.h"
#include "tsPluginOptions.h"
#include "tsPluginRepository.h"
#include "tsPluginThread.h"
#include "tsPMT.h"
#include "tsPolledFile.h"
#include "tsPollFiles.h"
#include "tsPollFilesListener.h"
#include "tsPrefetchDescriptor.h"
#include "tsPrivateDataIndicatorDescriptor.h"
#include "tsPrivateDataSpecifierDescriptor.h"
#include "tsProcessorPlugin.h"
#include "tsProtectionMessageDescriptor.h"
#include "tsPSI.h"
#include "tsPSIBuffer.h"
#include "tsPSILogger.h"
#include "tsPSIMerger.h"
#include "tsPSIPlugin.h"
#include "tsPSIRepository.h"
#include "tsPushInputPlugin.h"
#include "tsRandomGenerator.h"
#include "tsRedistributionControlDescriptor.h"
#include "tsReferenceDescriptor.h"
#include "tsRegistrationDescriptor.h"
#include "tsRegistry.h"
#include "tsRelatedContentDescriptor.h"
#include "tsReport.h"
#include "tsReportBuffer.h"
#include "tsReportFile.h"
#include "tsReportWithPrefix.h"
#include "tsResidentBuffer.h"
#include "tsRingNode.h"
#include "tsRIST.h"
#include "tsRISTInputPlugin.h"
#include "tsRISTOutputPlugin.h"
#include "tsRNT.h"
#include "tsRotate.h"
#include "tsRRT.h"
#include "tsRST.h"
#include "tsS2SatelliteDeliverySystemDescriptor.h"
#include "tsS2XSatelliteDeliverySystemDescriptor.h"
#include "tsSafePtr.h"
#include "tsSatelliteDeliverySystemDescriptor.h"
#include "tsSchedulingDescriptor.h"
#include "tsScramblingDescriptor.h"
#include "tsSCTE35.h"
#include "tsSCTE52.h"
#include "tsSDT.h"
#include "tsSection.h"
#include "tsSectionDemux.h"
#include "tsSectionFile.h"
#include "tsSectionFileArgs.h"
#include "tsSectionHandlerInterface.h"
#include "tsSectionProviderInterface.h"
#include "tsSelectionInformationTable.h"
#include "tsSeriesDescriptor.h"
#include "tsService.h"
#include "tsServiceAvailabilityDescriptor.h"
#include "tsServiceDescriptor.h"
#include "tsServiceDiscovery.h"
#include "tsServiceGroupDescriptor.h"
#include "tsServiceIdentifierDescriptor.h"
#include "tsServiceIdTriplet.h"
#include "tsServiceListDescriptor.h"
#include "tsServiceLocationDescriptor.h"
#include "tsServiceMoveDescriptor.h"
#include "tsServiceRelocatedDescriptor.h"
#include "tsSHA1.h"
#include "tsSHA256.h"
#include "tsSHA512.h"
#include "tsSharedLibrary.h"
#include "tsSHDeliverySystemDescriptor.h"
#include "tsShortEventDescriptor.h"
#include "tsShortNodeInformationDescriptor.h"
#include "tsShortSmoothingBufferDescriptor.h"
#include "tsSignalizationDemux.h"
#include "tsSignalizationHandlerInterface.h"
#include "tsSignalState.h"
#include "tsSimpleApplicationBoundaryDescriptor.h"
#include "tsSimpleApplicationLocationDescriptor.h"
#include "tsSimulCryptDate.h"
#include "tsSingleDataStatistics.h"
#include "tsSingletonManager.h"
#include "tsSIParameterDescriptor.h"
#include "tsSIPrimeTSDescriptor.h"
#include "tsSkipPlugin.h"
#include "tsSkyLogicalChannelNumberDescriptor.h"
#include "tsSLDescriptor.h"
#include "tsSmoothingBufferDescriptor.h"
#include "tsSocket.h"
#include "tsSpliceAvailDescriptor.h"
#include "tsSpliceDTMFDescriptor.h"
#include "tsSpliceInformationTable.h"
#include "tsSpliceInsert.h"
#include "tsSpliceSchedule.h"
#include "tsSpliceSegmentationDescriptor.h"
#include "tsSpliceTimeDescriptor.h"
#include "tsSRTInputPlugin.h"
#include "tsSRTOutputPlugin.h"
#include "tsSRTSocket.h"
#include "tsSSUDataBroadcastIdDescriptor.h"
#include "tsSSUEnhancedMessageDescriptor.h"
#include "tsSSUEventNameDescriptor.h"
#include "tsSSULinkageDescriptor.h"
#include "tsSSULocationDescriptor.h"
#include "tsSSUMessageDescriptor.h"
#include "tsSSUSubgroupAssociationDescriptor.h"
#include "tsSSUURIDescriptor.h"
#include "tsStandaloneTableDemux.h"
#include "tsStandards.h"
#include "tsStaticInstance.h"
#include "tsSTCReferenceDescriptor.h"
#include "tsSTDDescriptor.h"
#include "tsStereoscopicProgramInfoDescriptor.h"
#include "tsStereoscopicVideoInfoDescriptor.h"
#include "tsStreamEventDescriptor.h"
#include "tsStreamIdentifierDescriptor.h"
#include "tsStreamModeDescriptor.h"
#include "tsStringifyInterface.h"
#include "tsSTT.h"
#include "tsSubRipGenerator.h"
#include "tsSubtitlingDescriptor.h"
#include "tsSupplementaryAudioDescriptor.h"
#include "tsSVCExtensionDescriptor.h"
#include "tsSwitchableReport.h"
#include "tsSysInfo.h"
#include "tsSystemClockDescriptor.h"
#include "tsSystemManagementDescriptor.h"
#include "tsSystemMonitor.h"
#include "tsSystemRandomGenerator.h"
#include "tsSysUtils.h"
#include "tsT2DeliverySystemDescriptor.h"
#include "tsT2MI.h"
#include "tsT2MIDemux.h"
#include "tsT2MIDescriptor.h"
#include "tsT2MIHandlerInterface.h"
#include "tsT2MIPacket.h"
#include "tsTableHandlerInterface.h"
#include "tsTablePatchXML.h"
#include "tsTablesDisplay.h"
#include "tsTablesLogger.h"
#include "tsTablesLoggerFilter.h"
#include "tsTablesLoggerFilterInterface.h"
#include "tsTablesLoggerFilterRepository.h"
#include "tsTablesPlugin.h"
#include "tsTablesPtr.h"
#include "tsTargetBackgroundGridDescriptor.h"
#include "tsTargetIPAddressDescriptor.h"
#include "tsTargetIPSlashDescriptor.h"
#include "tsTargetIPSourceSlashDescriptor.h"
#include "tsTargetIPv6AddressDescriptor.h"
#include "tsTargetIPv6SlashDescriptor.h"
#include "tsTargetIPv6SourceSlashDescriptor.h"
#include "tsTargetMACAddressDescriptor.h"
#include "tsTargetMACAddressRangeDescriptor.h"
#include "tsTargetRegionDescriptor.h"
#include "tsTargetRegionNameDescriptor.h"
#include "tsTargetSerialNumberDescriptor.h"
#include "tsTargetSmartcardDescriptor.h"
#include "tsTCPConnection.h"
#include "tsTCPServer.h"
#include "tsTCPSocket.h"
#include "tsTDES.h"
#include "tsTDT.h"
#include "tsTelephoneDescriptor.h"
#include "tsTeletext.h"
#include "tsTeletextCharset.h"
#include "tsTeletextDemux.h"
#include "tsTeletextDescriptor.h"
#include "tsTeletextFrame.h"
#include "tsTeletextHandlerInterface.h"
#include "tsTeletextPlugin.h"
#include "tsTelnetConnection.h"
#include "tsTerrestrialDeliverySystemDescriptor.h"
#include "tsTextFormatter.h"
#include "tsTextParser.h"
#include "tsThread.h"
#include "tsThreadAttributes.h"
#include "tsThreadLocalObjects.h"
#include "tsTime.h"
#include "tsTimeShiftBuffer.h"
#include "tsTimeShiftedEventDescriptor.h"
#include "tsTimeSliceFECIdentifierDescriptor.h"
#include "tsTimeSource.h"
#include "tsTimeTrackerDemux.h"
#include "tstlv.h"
#include "tstlvAnalyzer.h"
#include "tstlvChannelMessage.h"
#include "tstlvConnection.h"
#include "tstlvLogger.h"
#include "tstlvMessage.h"
#include "tstlvMessageFactory.h"
#include "tstlvProtocol.h"
#include "tstlvSerializer.h"
#include "tstlvStreamMessage.h"
#include "tsTLVSyntax.h"
#include "tsTOT.h"
#include "tsTransportProfileDescriptor.h"
#include "tsTransportProtocolDescriptor.h"
#include "tsTransportStreamDescriptor.h"
#include "tsTransportStreamId.h"
#include "tsTS.h"
#include "tsTSAnalyzer.h"
#include "tsTSAnalyzerOptions.h"
#include "tsTSAnalyzerReport.h"
#include "tsTSDT.h"
#include "tsTSFile.h"
#include "tsTSFileInputBuffered.h"
#include "tsTSFileOutputResync.h"
#include "tsTSForkPipe.h"
#include "tsTSInformationDescriptor.h"
#include "tsTSP.h"
#include "tsTSPacket.h"
#include "tsTSPacketFormat.h"
#include "tsTSPacketMetadata.h"
#include "tsTSPacketQueue.h"
#include "tsTSPacketStream.h"
#include "tsTSPacketWindow.h"
#include "tsTSPControlCommand.h"
#include "tsTSProcessor.h"
#include "tsTSProcessorArgs.h"
#include "tsTSScanner.h"
#include "tsTSScrambling.h"
#include "tsTSSpeedMetrics.h"
#include "tsTuner.h"
#include "tsTunerArgs.h"
#include "tsTunerBase.h"
#include "tsTunerEmulator.h"
#include "tsTVAIdDescriptor.h"
#include "tsTVCT.h"
#include "tsTypedEnumeration.h"
#include "tsUChar.h"
#include "tsUDPReceiver.h"
#include "tsUDPSocket.h"
#include "tsUID.h"
#include "tsUNT.h"
#include "tsUpdateDescriptor.h"
#include "tsURILinkageDescriptor.h"
#include "tsURL.h"
#include "tsUserInterrupt.h"
#include "tsUString.h"
#include "tsVariable.h"
#include "tsVBIDataDescriptor.h"
#include "tsVBITeletextDescriptor.h"
#include "tsVCT.h"
#include "tsVersion.h"
#include "tsVersionInfo.h"
#include "tsVersionString.h"
#include "tsVideoDecodeControlDescriptor.h"
#include "tsVideoDepthRangeDescriptor.h"
#include "tsVideoStreamDescriptor.h"
#include "tsVideoWindowDescriptor.h"
#include "tsVirtualSegmentationDescriptor.h"
#include "tsVVC.h"
#include "tsVVCAccessUnitDelimiter.h"
#include "tsWatchDog.h"
#include "tsWatchDogHandlerInterface.h"
#include "tsWebRequest.h"
#include "tsWebRequestArgs.h"
#include "tsxml.h"
#include "tsxmlAttribute.h"
#include "tsxmlComment.h"
#include "tsxmlDeclaration.h"
#include "tsxmlDocument.h"
#include "tsxmlElement.h"
#include "tsxmlJSONConverter.h"
#include "tsxmlModelDocument.h"
#include "tsxmlNode.h"
#include "tsxmlPatchDocument.h"
#include "tsxmlRunningDocument.h"
#include "tsxmlText.h"
#include "tsxmlTweaks.h"
#include "tsxmlUnknown.h"

#if defined(TS_LINUX)
#include "tsDTVProperties.h"
#include "tsSignalAllocator.h"
#include "tsTunerDevice.h"
#include "tsTunerDeviceInfo.h"
#endif

#if defined(TS_MAC)
#include "tsMacPList.h"
#include "tsTunerDevice.h"
#endif

#if defined(TS_WINDOWS)
#include "tsComIds.h"
#include "tsComPtr.h"
#include "tsDirectShowFilterCategory.h"
#include "tsDirectShowGraph.h"
#include "tsDirectShowNetworkType.h"
#include "tsDirectShowTest.h"
#include "tsDirectShowUtils.h"
#include "tsMediaTypeUtils.h"
#include "tsSinkFilter.h"
#include "tsTunerDevice.h"
#include "tsTunerGraph.h"
#include "tsWinUtils.h"
#endif

/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@interface RCCaptureFormat : NSObject
+(void)_AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 inputFormat:(unsigned)arg2 outputExtensionWithFallbacks:(id)arg3 preferredFormat:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)fileExtensionForIntermediateAssetCapture;
+(id)AVAssetAuthoringMetadataWithComposition:(id)arg1 ;
+(void)AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 inputFormat:(unsigned)arg2 preferredOutputExtension:(id)arg3 preferredFormat:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)AVAssetAuthoringMetadataWithRecordingMetadata:(id)arg1 ;
+(id)fileFormatsDirectlyImportable;
+(id)AVMediaTypeForFileExtension:(id)arg1 ;
+(id)AVFileTypeUTIForFileExtension:(id)arg1 ;
+(id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3 ;
+(id)AVAssetExportPresetForExportingToExtension:(id)arg1 preferredFormat:(unsigned)arg2 ;
+(id)fileExtensionsSupported;
+(id)fileExtensionForAssetExport;
+(id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3 musicMemoMetadata:(id)arg4 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@interface RCCaptureFormat : NSObject
+(id)fileExtensionForIntermediateAssetCapture;
+(id)fileFormatsDirectlyImportable;
+(id)fileExtensionForAssetExport;
+(void)AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 preferredOutputExtension:(id)arg2 preferredFormat:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3 ;
+(id)fileExtensionsSupported;
+(void)_AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 outputExtensionWithFallbacks:(id)arg2 preferredFormat:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)AVFileTypeUTIForFileExtension:(id)arg1 ;
+(id)AVAssetExportPresetForExportingToExtension:(id)arg1 preferredFormat:(unsigned)arg2 ;
+(id)AVMediaTypeForFileExtension:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class ALAssetsLibrary, AVAssetImageGenerator;

@interface SLSheetPreviewImageSource : NSObject {

	ALAssetsLibrary* _assetsLibrary;
	AVAssetImageGenerator* _assetImageGenerator;

}

@property (readonly) ALAssetsLibrary * assetsLibrary; 
-(void)_generatePreviewImageForAttachment:(id)arg1 queueToBlockWhileDownsampling:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)_fetchPreviewImageForAssetURL:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)_generatePreviewImageForVideoFileURL:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(ALAssetsLibrary *)assetsLibrary;
-(void)previewImageForAttachment:(id)arg1 queueToBlockWhileDownsampling:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)cancelVideoPreviewGeneration;
@end


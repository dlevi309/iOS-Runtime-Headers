/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


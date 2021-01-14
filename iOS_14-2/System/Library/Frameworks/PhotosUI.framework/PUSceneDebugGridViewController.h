/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSNumber, NSDictionary;

@interface PUSceneDebugGridViewController : PUPhotosAlbumViewController {

	NSNumber* _sceneIdentifier;
	NSDictionary* _assetsHighestConfidence;

}

@property (nonatomic,retain) NSNumber * sceneIdentifier;                        //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * assetsHighestConfidence;              //@synthesize assetsHighestConfidence=_assetsHighestConfidence - In the implementation block
+(/*^block*/id)assetResourceLargestToSmallestComparator;
-(void)setSceneIdentifier:(NSNumber *)arg1 ;
-(void)_fileRadarWithIncorrectAssets:(id)arg1 ;
-(BOOL)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2 ;
-(id)_cloneAsset:(id)arg1 toDirectory:(id)arg2 ;
-(NSNumber *)sceneIdentifier;
-(void)getEmptyPlaceholderViewTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 buttonAction:(/*^block*/id*)arg4 ;
-(BOOL)allowSlideshowButton;
-(id)_localFileURLForAssetResource:(id)arg1 error:(id*)arg2 ;
-(BOOL)assetShouldBeSurpassedInNormalUI:(id)arg1 ;
-(BOOL)assetConfidenceIsAboveThreshold:(id)arg1 ;
-(void)_tappedFileRadarButton:(id)arg1 ;
-(id)_assetResourcesForAssets:(id)arg1 ;
-(id)_assetResourceForAsset:(id)arg1 ;
-(id)_keywordForSceneIdentifier:(id)arg1 ;
-(double)_thresholdForSceneIdentifer:(id)arg1 ;
-(BOOL)_isJunkSceneIdentifer:(id)arg1 ;
-(id)assetResourceFromAcceptableAssetResources:(id)arg1 ;
-(id)preferredAssetResourcesForAnalyzingAsset:(id)arg1 ;
-(NSDictionary *)assetsHighestConfidence;
-(void)setAssetsHighestConfidence:(NSDictionary *)arg1 ;
-(id)_globalHeaderTitle;
-(void)configureGlobalHeaderView:(id)arg1 ;
-(id)_newEditActionItemsWithWideSpacing:(BOOL)arg1 ;
-(void)configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 assetCollection:(id)arg3 thumbnailIsPlaceholder:(BOOL)arg4 assetMayHaveChanged:(BOOL)arg5 ;
-(double)globalHeaderHeight;
@end


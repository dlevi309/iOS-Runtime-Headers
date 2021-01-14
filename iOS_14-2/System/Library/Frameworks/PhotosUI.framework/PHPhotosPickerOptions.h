/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSDictionary, PHAsset, PHAssetCollection, NSArray;

@interface PHPhotosPickerOptions : NSObject {

	BOOL _hideTabBar;
	NSDictionary* _initialAssetsToSelect;
	PHAsset* _keyAsset;
	PHAssetCollection* _keyAssetCollection;
	NSArray* _excludedContentModes;

}

@property (nonatomic,copy) NSDictionary * initialAssetsToSelect;                  //@synthesize initialAssetsToSelect=_initialAssetsToSelect - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                  //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) PHAssetCollection * keyAssetCollection;              //@synthesize keyAssetCollection=_keyAssetCollection - In the implementation block
@property (nonatomic,copy) NSArray * excludedContentModes;                        //@synthesize excludedContentModes=_excludedContentModes - In the implementation block
@property (assign,nonatomic) BOOL hideTabBar;                                     //@synthesize hideTabBar=_hideTabBar - In the implementation block
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(NSDictionary *)initialAssetsToSelect;
-(void)setInitialAssetsToSelect:(NSDictionary *)arg1 ;
-(PHAssetCollection *)keyAssetCollection;
-(void)setKeyAssetCollection:(PHAssetCollection *)arg1 ;
-(BOOL)hideTabBar;
-(void)setHideTabBar:(BOOL)arg1 ;
-(void)setExcludedContentModes:(NSArray *)arg1 ;
-(NSArray *)excludedContentModes;
@end


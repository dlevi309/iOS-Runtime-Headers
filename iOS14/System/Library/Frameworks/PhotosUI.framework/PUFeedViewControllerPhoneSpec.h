/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedViewControllerSpec.h>

@interface PUFeedViewControllerPhoneSpec : PUFeedViewControllerSpec
-(id)photosPickerSpec;
-(long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2 ;
-(void)getReferenceMaximumLength:(double*)arg1 minimumNumberOfTilesToOmit:(long long*)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4 ;
-(CGSize)minimumVideoTileSize;
-(BOOL)shouldHideBarsInLandscape;
-(double)collectionViewContentInset;
-(void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(CGSize)arg3 ;
-(void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3 ;
-(void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3 ;
-(UIEdgeInsets)textInsetsForHeadersAndFootersInSectionType:(long long)arg1 collectionViewType:(long long)arg2 ;
-(void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(BOOL)arg7 ;
-(id)emphasizedTextAttributesForCollectionViewType:(long long)arg1 ;
-(id)defaultTextAttributesForCollectionViewType:(long long)arg1 ;
-(long long)largeNumberOfSubjectsForLikes;
-(BOOL)shouldUseFullscreenLayout;
-(BOOL)canUseSimplePreheatManager;
-(CGSize)thumbnailSize;
-(id)gridSpec;
-(long long)promptStyle;
@end


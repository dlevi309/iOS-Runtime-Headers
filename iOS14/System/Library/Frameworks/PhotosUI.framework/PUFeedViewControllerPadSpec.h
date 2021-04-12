/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedViewControllerSpec.h>

@interface PUFeedViewControllerPadSpec : PUFeedViewControllerSpec
-(BOOL)shouldShowInvitationsInPopover;
-(id)popoverFeedViewControllerSpec;
-(id)photosPickerSpec;
-(CGSize)thumbnailSizeForImageSize:(CGSize)arg1 ;
-(BOOL)shouldUseAspectThumbnails;
-(BOOL)shouldShowCommentBadgesInCollectionViewType:(long long)arg1 ;
-(long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2 ;
-(void)configureSeparatorMetrics:(inout PUFeedSeparatorMetrics*)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(BOOL)arg4 collectionViewType:(long long)arg5 ;
-(void)configureCommentSeparatorMetrics:(inout PUFeedSeparatorMetrics*)arg1 ;
-(void)getReferenceMaximumLength:(double*)arg1 minimumNumberOfTilesToOmit:(long long*)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4 ;
-(CGSize)minimumVideoTileSize;
-(BOOL)shouldHideBarsInLandscape;
-(double)collectionViewContentInset;
-(void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(CGSize)arg3 ;
-(void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3 ;
-(void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3 ;
-(void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(BOOL)arg7 ;
-(id)emphasizedTextAttributesForCollectionViewType:(long long)arg1 ;
-(id)defaultTextAttributesForCollectionViewType:(long long)arg1 ;
-(long long)largeNumberOfSubjectsForLikes;
-(BOOL)shouldUseFullscreenLayout;
-(void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(long long)arg3 ;
-(CGSize)thumbnailSize;
-(id)gridSpec;
-(long long)promptStyle;
@end


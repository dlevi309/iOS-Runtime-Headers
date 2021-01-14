/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, PXCollageView;

@interface PXBadgedThumbnailView : UIView {

	BOOL _showBadge;
	UIImage* _badgeImage;
	UIImageView* _placeholderImageView;
	PXCollageView* _collageView;
	UIImageView* _badgeView;

}

@property (nonatomic,retain) UIImageView * placeholderImageView;                     //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) PXCollageView * collageView;                            //@synthesize collageView=_collageView - In the implementation block
@property (nonatomic,retain) UIImageView * badgeView;                                //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UIImage * badgeImage;                                   //@synthesize badgeImage=_badgeImage - In the implementation block
@property (assign,getter=shouldShowLikeBadge,nonatomic) BOOL showBadge;              //@synthesize showBadge=_showBadge - In the implementation block
@property (assign,nonatomic) long long numberOfItems; 
-(UIImageView *)badgeView;
-(id)imageViewForItemAtIndex:(unsigned long long)arg1 ;
-(long long)numberOfItems;
-(BOOL)shouldShowLikeBadge;
-(void)setBadgeView:(UIImageView *)arg1 ;
-(UIImage *)badgeImage;
-(PXCollageView *)collageView;
-(void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(void)setCollageView:(PXCollageView *)arg1 ;
-(void)setNumberOfItems:(long long)arg1 ;
-(void)setBadgeImage:(UIImage *)arg1 ;
-(id)initWithplaceholderImageView:(id)arg1 ;
-(UIImageView *)placeholderImageView;
-(void)setImageHidden:(BOOL)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(BOOL)shouldShowBadge;
-(void)setShowBadge:(BOOL)arg1 ;
@end


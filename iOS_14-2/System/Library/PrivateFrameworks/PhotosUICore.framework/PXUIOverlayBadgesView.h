/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, NSDictionary, UIImageView;

@interface PXUIOverlayBadgesView : UIView {

	BOOL _isShowingAnyBadge;
	UIStackView* _stackView;
	NSDictionary* _badges;
	UIImageView* _backgroundView;

}

@property (nonatomic,readonly) UIStackView * stackView;                        //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSDictionary * badges;                          //@synthesize badges=_badges - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) BOOL isShowingAnyBadge;                           //@synthesize isShowingAnyBadge=_isShowingAnyBadge - In the implementation block
+(id)badgesViewWithDefaultBadgesAndOrder;
+(id)defaultBadges;
+(id)defaultViewForBadge:(long long)arg1 ;
+(id)defaultOrder;
-(NSDictionary *)badges;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)backgroundView;
-(UIStackView *)stackView;
-(id)createWeaklyReferencedBackgroundView;
-(void)showBadges:(id)arg1 ;
-(void)showBadgesForPHAsset:(id)arg1 ;
-(id)initWithBadges:(id)arg1 order:(id)arg2 ;
-(BOOL)isShowingAnyBadge;
-(void)setIsShowingAnyBadge:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end


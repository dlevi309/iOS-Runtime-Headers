/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBCollectionViewCell.h>

@protocol SBStarkNotificationsConfiguring;
@class MTMaterialShadowView, UIView, SBBannerContextView;

@interface SBStarkBannerCell : SBCollectionViewCell {

	id<SBStarkNotificationsConfiguring> _starkNotificationsConfiguration;
	MTMaterialShadowView* _materialView;
	UIView* _strokeView;
	SBBannerContextView* _bannerContextView;

}

@property (nonatomic,retain) id<SBStarkNotificationsConfiguring> starkNotificationsConfiguration;              //@synthesize starkNotificationsConfiguration=_starkNotificationsConfiguration - In the implementation block
@property (nonatomic,retain) SBBannerContextView * bannerContextView;                                          //@synthesize bannerContextView=_bannerContextView - In the implementation block
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)_disableRasterizeInAnimations;
-(id)bannerContext;
-(void)setBannerContext:(id)arg1 ;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(void)noteWillAppear;
-(void)noteDidAppear;
-(void)setBannerContextView:(SBBannerContextView *)arg1 ;
-(void)setStarkNotificationsConfiguration:(id<SBStarkNotificationsConfiguring>)arg1 ;
-(void)noteDidDismiss;
-(SBBannerContextView *)bannerContextView;
-(id<SBStarkNotificationsConfiguring>)starkNotificationsConfiguration;
@end


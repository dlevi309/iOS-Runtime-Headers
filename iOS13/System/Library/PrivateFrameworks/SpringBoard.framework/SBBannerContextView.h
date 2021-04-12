/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SBUIBannerView;
@class SBBannerViewCallbackManager, SBUIBannerContext, UIView;

@interface SBBannerContextView : UIView {

	SBBannerViewCallbackManager* _callbacks;
	SBBannerViewCallbackManager* _wrapperCallbacks;
	SBUIBannerContext* _bannerContext;
	UIView*<SBUIBannerView> _bannerView;

}

@property (nonatomic,readonly) SBUIBannerContext * bannerContext;                      //@synthesize bannerContext=_bannerContext - In the implementation block
@property (nonatomic,retain,readonly) UIView*<SBUIBannerView> bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView*<SBUIBannerView>)bannerView;
-(SBUIBannerContext *)bannerContext;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(void)noteWillAppear;
-(void)noteDidDismissWithReason:(int)arg1 ;
-(void)noteDidAppear;
-(void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2 ;
@end


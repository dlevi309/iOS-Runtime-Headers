/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class UIView, CACBannerView;

@interface CACBannerViewPresenter : NSObject {

	UIView* _containingView;
	CACBannerView* _bannerView;

}

@property (nonatomic,retain) CACBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,readonly) UIView * containingView;               //@synthesize containingView=_containingView - In the implementation block
+(double)durationToDisplayMessageString:(id)arg1 ;
-(UIView *)containingView;
-(CACBannerView *)bannerView;
-(void)setBannerView:(CACBannerView *)arg1 ;
-(void)_hideBannerView;
-(void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 duration:(double)arg3 ;
-(id)initWithContainingView:(id)arg1 ;
-(void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 ;
-(void)dismissBannerView;
@end


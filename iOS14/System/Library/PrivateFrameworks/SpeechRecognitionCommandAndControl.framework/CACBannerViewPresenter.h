/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBannerView:(CACBannerView *)arg1 ;
-(UIView *)containingView;
-(CACBannerView *)bannerView;
-(void)_hideBannerView;
-(void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 duration:(double)arg3 ;
-(id)initWithContainingView:(id)arg1 ;
-(void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 ;
-(void)dismissBannerView;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ADDimmerViewDelegate.h>

@class ADInterstitialAd, ADPrivacyMarker, ADDimmerView, NSString;

@interface ADInterstitialView : UIView <ADDimmerViewDelegate> {

	ADInterstitialAd* _interstitialAd;
	ADPrivacyMarker* _privacyMarker;
	ADDimmerView* _dimmerView;
	CGRect _dismissButtonRect;

}

@property (assign,nonatomic,__weak) ADInterstitialAd * interstitialAd;              //@synthesize interstitialAd=_interstitialAd - In the implementation block
@property (nonatomic,retain) ADPrivacyMarker * privacyMarker;                       //@synthesize privacyMarker=_privacyMarker - In the implementation block
@property (nonatomic,retain) ADDimmerView * dimmerView;                             //@synthesize dimmerView=_dimmerView - In the implementation block
@property (assign,nonatomic) CGRect dismissButtonRect;                              //@synthesize dismissButtonRect=_dismissButtonRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(CGSize)intrinsicContentSize;
-(void)disableDimmerView;
-(void)removeFromSuperview;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)enableDimmerView:(id)arg1 ;
-(void)setInterstitialAd:(ADInterstitialAd *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(ADInterstitialAd *)interstitialAd;
-(ADDimmerView *)dimmerView;
-(CGRect)dismissButtonRect;
-(void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(CGPoint)arg2 ;
-(void)didMoveToWindow;
-(void)setDismissButtonRect:(CGRect)arg1 ;
-(void)positionAdPrivacyMark;
-(void)_privacyButtonWasTapped;
-(ADPrivacyMarker *)privacyMarker;
-(void)setAlpha:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDimmerView:(ADDimmerView *)arg1 ;
-(void)enablePrivacyButton;
-(void)setPrivacyMarker:(ADPrivacyMarker *)arg1 ;
@end


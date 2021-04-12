/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)removeFromSuperview;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)didMoveToWindow;
-(void)setDimmerView:(ADDimmerView *)arg1 ;
-(ADDimmerView *)dimmerView;
-(void)setPrivacyMarker:(ADPrivacyMarker *)arg1 ;
-(ADPrivacyMarker *)privacyMarker;
-(void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(CGPoint)arg2 ;
-(BOOL)enableDimmerView:(id)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(void)enablePrivacyButton;
-(void)disableDimmerView;
-(void)positionAdPrivacyMark;
-(void)setInterstitialAd:(ADInterstitialAd *)arg1 ;
-(ADInterstitialAd *)interstitialAd;
-(void)setDismissButtonRect:(CGRect)arg1 ;
-(void)_privacyButtonWasTapped;
-(CGRect)dismissButtonRect;
@end


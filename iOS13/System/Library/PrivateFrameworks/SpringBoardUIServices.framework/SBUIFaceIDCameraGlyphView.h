/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class _UILegibilitySettings, UIView, SBUILegibilityLabel, _UILegibilityView, CALayer;

@interface SBUIFaceIDCameraGlyphView : SBFTouchPassThroughView {

	_UILegibilitySettings* _legibilitySettings;
	UIView* _arrowContainer;
	SBUILegibilityLabel* _callToActionLabel;
	unsigned long long _state;
	_UILegibilityView* _arrowHead;
	_UILegibilityView* _arrowTail;
	CALayer* _maskContainerLayer;
	CALayer* _maskTopLayer;
	CALayer* _maskLeftLayer;
	CALayer* _maskRightLayer;
	UIView* _localRotationView;
	CGAffineTransform _localTransform;

}

@property (nonatomic,retain) _UILegibilityView * arrowHead;                           //@synthesize arrowHead=_arrowHead - In the implementation block
@property (nonatomic,retain) _UILegibilityView * arrowTail;                           //@synthesize arrowTail=_arrowTail - In the implementation block
@property (nonatomic,retain) SBUILegibilityLabel * callToActionLabel;                 //@synthesize callToActionLabel=_callToActionLabel - In the implementation block
@property (nonatomic,retain) UIView * arrowContainer;                                 //@synthesize arrowContainer=_arrowContainer - In the implementation block
@property (nonatomic,retain) CALayer * maskContainerLayer;                            //@synthesize maskContainerLayer=_maskContainerLayer - In the implementation block
@property (nonatomic,retain) CALayer * maskTopLayer;                                  //@synthesize maskTopLayer=_maskTopLayer - In the implementation block
@property (nonatomic,retain) CALayer * maskLeftLayer;                                 //@synthesize maskLeftLayer=_maskLeftLayer - In the implementation block
@property (nonatomic,retain) CALayer * maskRightLayer;                                //@synthesize maskRightLayer=_maskRightLayer - In the implementation block
@property (nonatomic,retain) UIView * localRotationView;                              //@synthesize localRotationView=_localRotationView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) CGAffineTransform localTransform;                        //@synthesize localTransform=_localTransform - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                //@synthesize state=_state - In the implementation block
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setLocalTransform:(CGAffineTransform)arg1 ;
-(void)setState:(unsigned long long)arg1 delay:(double)arg2 ;
-(CGAffineTransform)localTransform;
-(void)_updateCallToActionLabelFont;
-(void)_installMask;
-(void)_flyInWithText:(BOOL)arg1 delay:(double)arg2 ;
-(void)_fadeComponentsIn:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fadeComponenetsOut:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeAnimations;
-(void)_setAlpha:(double)arg1 onComponents:(id)arg2 completion:(/*^block*/id)arg3 ;
-(UIView *)arrowContainer;
-(void)setArrowContainer:(UIView *)arg1 ;
-(SBUILegibilityLabel *)callToActionLabel;
-(void)setCallToActionLabel:(SBUILegibilityLabel *)arg1 ;
-(_UILegibilityView *)arrowHead;
-(void)setArrowHead:(_UILegibilityView *)arg1 ;
-(_UILegibilityView *)arrowTail;
-(void)setArrowTail:(_UILegibilityView *)arg1 ;
-(CALayer *)maskContainerLayer;
-(void)setMaskContainerLayer:(CALayer *)arg1 ;
-(CALayer *)maskTopLayer;
-(void)setMaskTopLayer:(CALayer *)arg1 ;
-(CALayer *)maskLeftLayer;
-(void)setMaskLeftLayer:(CALayer *)arg1 ;
-(CALayer *)maskRightLayer;
-(void)setMaskRightLayer:(CALayer *)arg1 ;
-(UIView *)localRotationView;
-(void)setLocalRotationView:(UIView *)arg1 ;
@end


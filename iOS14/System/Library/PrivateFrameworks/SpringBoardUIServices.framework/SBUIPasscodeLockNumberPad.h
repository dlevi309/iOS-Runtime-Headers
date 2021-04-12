/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBNumberPadDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@protocol SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeNumberPadButton;
@class SBNumberPadWithDelegate, UIColor, UIControl, SBUIButton, NSArray, NSString;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate, CAAnimationDelegate, UIPointerInteractionDelegate> {

	SBNumberPadWithDelegate* _numberPad;
	UIColor* _customBackgroundColor;
	BOOL _useLightStyle;
	BOOL _visible;
	BOOL _snapshotsDisabled;
	BOOL _showsBackspaceButton;
	BOOL _showsEmergencyCallButton;
	BOOL _showsCancelButton;
	id<SBUIPasscodeLockNumberPadDelegate> _delegate;
	double _ancillaryButtonOffset;
	UIControl*<SBUIPasscodeNumberPadButton> _downButton;
	SBUIButton* _emergencyCallButton;
	SBUIButton* _backspaceButton;
	SBUIButton* _cancelButton;
	UIColor* _reduceTransparencyButtonColor;

}

@property (nonatomic,retain) UIControl*<SBUIPasscodeNumberPadButton> downButton;                 //@synthesize downButton=_downButton - In the implementation block
@property (assign,nonatomic) double ancillaryButtonOffset;                                       //@synthesize ancillaryButtonOffset=_ancillaryButtonOffset - In the implementation block
@property (nonatomic,readonly) SBUIButton * emergencyCallButton;                                 //@synthesize emergencyCallButton=_emergencyCallButton - In the implementation block
@property (nonatomic,readonly) SBUIButton * backspaceButton;                                     //@synthesize backspaceButton=_backspaceButton - In the implementation block
@property (nonatomic,readonly) SBUIButton * cancelButton;                                        //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIColor * reduceTransparencyButtonColor;                            //@synthesize reduceTransparencyButtonColor=_reduceTransparencyButtonColor - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIPasscodeLockNumberPadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsBackspaceButton;                                          //@synthesize showsBackspaceButton=_showsBackspaceButton - In the implementation block
@property (assign,nonatomic) BOOL showsEmergencyCallButton;                                      //@synthesize showsEmergencyCallButton=_showsEmergencyCallButton - In the implementation block
@property (assign,nonatomic) BOOL showsCancelButton;                                             //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * buttons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_buttonForCharacter:(long long)arg1 withLightStyle:(BOOL)arg2 ;
+(CGSize)_inputButtonCircleSize;
+(UIEdgeInsets)_inputButtonCircleSpacing;
-(SBUIButton *)cancelButton;
-(BOOL)showsCancelButton;
-(UIControl*<SBUIPasscodeNumberPadButton>)downButton;
-(id<SBUIPasscodeLockNumberPadDelegate>)delegate;
-(NSArray *)buttons;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)setShowsBackspaceButton:(BOOL)arg1 ;
-(SBUIButton *)backspaceButton;
-(id)_fontForAncillaryButton;
-(void)_backspaceButtonHit;
-(void)setAncillaryButtonOffset:(double)arg1 ;
-(void)_configureAdditionalButtons;
-(void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2 ;
-(void)setDownButton:(UIControl*<SBUIPasscodeNumberPadButton>)arg1 ;
-(void)_setSnapshotsDisabled:(BOOL)arg1 ;
-(void)setReduceTransparencyButtonColor:(UIColor *)arg1 ;
-(BOOL)showsBackspaceButton;
-(UIColor *)reduceTransparencyButtonColor;
-(void)setDelegate:(id<SBUIPasscodeLockNumberPadDelegate>)arg1 ;
-(void)_cancelButtonHit;
-(void)_emergencyCallButtonHit;
-(BOOL)showsEmergencyCallButton;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(SBUIButton *)emergencyCallButton;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(double)_distanceToTopOfFirstButton;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(double)ancillaryButtonOffset;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
@end


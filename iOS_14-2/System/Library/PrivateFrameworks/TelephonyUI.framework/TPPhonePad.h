/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/TPDialerKeypadProtocol.h>

@protocol TPDialerKeypadDelegate;
@class NSString;

@interface TPPhonePad : UIControl <TPDialerKeypadProtocol> {

	long long _downKey;
	long long _highlightKey;
	id<TPDialerKeypadDelegate> _delegate;
	BOOL _playsSounds;
	double _topHeight;
	double _midHeight;
	double _bottomHeight;
	double _leftWidth;
	double _midWidth;
	double _rightWidth;
	CFSetRef _inflightSounds;
	CFDictionaryRef _keyToButtonMap;
	unsigned _incompleteSounds;
	unsigned _delegateSoundCallbacks : 1;
	unsigned _soundsActivated : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_delayedDeactivate;
+(BOOL)shouldStringAutoDial:(id)arg1 givenLastChar:(char)arg2 ;
+(BOOL)launchFieldTestIfNeeded:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_highlightedImage;
-(BOOL)cancelTouchTracking;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setPlaysSounds:(BOOL)arg1 ;
-(double)_yFudge;
-(void)movedFromWindow:(id)arg1 ;
-(void)movedToWindow:(id)arg1 ;
-(long long)indexForHighlightedKey;
-(void)_appSuspended;
-(void)_stopAllSoundsForcingCallbacks:(BOOL)arg1 ;
-(void)highlightKeyAtIndex:(long long)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_playSoundForKey:(unsigned long long)arg1 ;
-(void)_handleKeyPressAndHoldForHighlightedKey:(id)arg1 ;
-(void)_stopSoundForKey:(unsigned long long)arg1 ;
-(void)setNeedsDisplayForKey:(int)arg1 ;
-(void)_handleKey:(id)arg1 forUIEvent:(id)arg2 ;
-(void)_activateSounds:(BOOL)arg1 ;
-(void)_appResumed;
-(CGRect)_rectForKey:(unsigned long long)arg1 ;
-(id)_keypadImage;
-(CGRect)_updateRect:(CGRect)arg1 withScale:(double)arg2 ;
-(CGPoint)_keypadOrigin;
-(id)_imageByCroppingImage:(id)arg1 toRect:(CGRect)arg2 ;
-(id)_pressedImage;
-(void)_handleKeyPressAndHoldForDownKey:(id)arg1 ;
-(int)_keyForPoint:(CGPoint)arg1 ;
-(void)_handleKeyPressAndHoldForKey:(long long)arg1 ;
-(void)performTapActionDownForHighlightedKey;
-(void)performTapActionEndForHighlightedKey;
-(void)performTapActionCancelForHighlightedKey;
-(void)setButton:(id)arg1 forKeyAtIndex:(unsigned long long)arg2 ;
-(id)_buttonForKeyAtIndex:(unsigned long long)arg1 ;
-(void)_notifySoundCompletionIfNecessary:(unsigned)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDKnobTracker.h>

@class TSWPEditingController, NSTimer, TSWPTextMagnifierRanged;

@interface TSWPTextKnobTracker : TSDKnobTracker {

	TSWPEditingController* _editingController;
	NSRange _rangeAtStart;
	int _selectionType;
	unsigned long long _headCharAtStart;
	unsigned long long _tailCharAtStart;
	BOOL _multiTap;
	NSTimer* _textMagnifierTimer;
	TSWPTextMagnifierRanged* _magnifier;
	BOOL _doneTracking;
	BOOL _knobMoved;
	BOOL _didShowMagnifier;
	BOOL _ignoreNextCall;

}

@property (nonatomic,retain) TSWPEditingController * editingController;              //@synthesize editingController=_editingController - In the implementation block
@property (nonatomic,readonly) BOOL didShowMagnifier;                                //@synthesize didShowMagnifier=_didShowMagnifier - In the implementation block
@property (assign,nonatomic) BOOL ignoreNextCall;                                    //@synthesize ignoreNextCall=_ignoreNextCall - In the implementation block
+(const TSWPLineFragment*)p_lineFragmentForCharIndex:(unsigned long long)arg1 knobTag:(unsigned long long)arg2 selectionType:(int)arg3 rep:(id)arg4 ;
-(void)dealloc;
-(double)delay;
-(void)autoscrollWillNotStart;
-(id)icc;
-(void)updateAfterAutoscroll:(id)arg1 ;
-(double)unscaledStartAutoscrollThreshold;
-(BOOL)shouldHideOtherKnobs;
-(void)moveKnobToCanvasPosition:(CGPoint)arg1 ;
-(void)endMovingKnob;
-(id)initWithRep:(id)arg1 knob:(id)arg2 ;
-(TSWPEditingController *)editingController;
-(void)setEditingController:(TSWPEditingController *)arg1 ;
-(void)p_magnifyWithTarget:(id)arg1 magnificationPoint:(CGPoint)arg2 offset:(CGPoint)arg3 animated:(BOOL)arg4 delayed:(BOOL)arg5 ;
-(void)p_cleanupWhenDone;
-(void)p_stopMagnifyingWithAnimation:(BOOL)arg1 ;
-(void)p_setSelectionFromPoint:(CGPoint)arg1 ;
-(void)p_fixUpWordSelection;
-(unsigned long long)p_charIndexForKnob:(unsigned long long)arg1 selection:(id)arg2 ;
-(BOOL)p_isMagnifyingVerticalText;
-(id)p_rangedMagnifier;
-(void)p_startMagnifying;
-(BOOL)p_newHeadCharIndex:(unsigned long long)arg1 isPastTailCharIndex:(unsigned long long)arg2 rep:(id)arg3 ;
-(BOOL)p_newTailCharIndex:(unsigned long long)arg1 isPastHeadCharIndex:(unsigned long long)arg2 rep:(id)arg3 ;
-(NSRange)adjustSelectionRange:(NSRange)arg1 forStorage:(id)arg2 ;
-(BOOL)fixupWordSelection;
-(void)updateAfterAutoscroll:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)didShowMagnifier;
-(BOOL)ignoreNextCall;
-(void)setIgnoreNextCall:(BOOL)arg1 ;
@end


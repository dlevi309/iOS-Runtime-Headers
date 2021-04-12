/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

@interface _UIDynamicCaretInput : UIView {

	CGContextRef _bitmapContext;
	long long _fadeCount;
	CGPoint _lastViewLoc;
	CGRect _inkedAreaOfBitmapContext;
	NSTimer* _fadeTimer;
	TIHandwritingStrokes* _accumulatedStrokes;
	UIDelayedAction* _committedAction;
	_UIDynamicCaretDot* _dotView;

}

@property (nonatomic,retain) NSTimer * fadeTimer;                                    //@synthesize fadeTimer=_fadeTimer - In the implementation block
@property (nonatomic,retain) TIHandwritingStrokes * accumulatedStrokes;              //@synthesize accumulatedStrokes=_accumulatedStrokes - In the implementation block
@property (nonatomic,retain) UIDelayedAction * committedAction;                      //@synthesize committedAction=_committedAction - In the implementation block
@property (nonatomic,retain) _UIDynamicCaretDot * dotView;                           //@synthesize dotView=_dotView - In the implementation block
@property (nonatomic,readonly) BOOL hasInk; 
@property (nonatomic,readonly) BOOL isInking; 
-(void)dealloc;
-(void)log;
-(void)send;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)inkWidth;
-(void)clearAndNotify:(BOOL)arg1 ;
-(void)committedStrokes;
-(void)setCommittedAction:(UIDelayedAction *)arg1 ;
-(void)setDotView:(_UIDynamicCaretDot *)arg1 ;
-(_UIDynamicCaretDot *)dotView;
-(TIHandwritingStrokes *)accumulatedStrokes;
-(NSTimer *)fadeTimer;
-(void)setFadeTimer:(NSTimer *)arg1 ;
-(void)clearFadeTimer;
-(void)setAccumulatedStrokes:(TIHandwritingStrokes *)arg1 ;
-(void)drawPoint:(CGPoint)arg1 ;
-(UIDelayedAction *)committedAction;
-(void)addInkPoint:(CGPoint)arg1 fromLastPoint:(BOOL)arg2 ;
-(void)_fadeInk;
-(void)endTouchAtPoint:(CGPoint)arg1 ;
-(BOOL)hasInk;
-(BOOL)isInking;
-(void)startTouchAtPoint:(CGPoint)arg1 ;
-(void)addTouchAtPoint:(CGPoint)arg1 ;
-(void)cancelTouchAtPoint:(CGPoint)arg1 ;
@end


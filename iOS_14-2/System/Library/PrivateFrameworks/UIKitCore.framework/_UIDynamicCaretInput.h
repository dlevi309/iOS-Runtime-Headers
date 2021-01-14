/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasInk;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)log;
-(_UIDynamicCaretDot *)dotView;
-(void)clearAndNotify:(BOOL)arg1 ;
-(double)inkWidth;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)_fadeInk;
-(BOOL)isInking;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(NSTimer *)fadeTimer;
-(void)drawPoint:(CGPoint)arg1 ;
-(void)send;
-(void)setDotView:(_UIDynamicCaretDot *)arg1 ;
-(void)setFadeTimer:(NSTimer *)arg1 ;
-(void)committedStrokes;
-(void)endTouchAtPoint:(CGPoint)arg1 ;
-(TIHandwritingStrokes *)accumulatedStrokes;
-(UIDelayedAction *)committedAction;
-(void)setCommittedAction:(UIDelayedAction *)arg1 ;
-(void)clearFadeTimer;
-(void)setAccumulatedStrokes:(TIHandwritingStrokes *)arg1 ;
-(void)addInkPoint:(CGPoint)arg1 fromLastPoint:(BOOL)arg2 ;
-(void)startTouchAtPoint:(CGPoint)arg1 ;
-(void)addTouchAtPoint:(CGPoint)arg1 ;
-(void)cancelTouchAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIAutoScrollBehavior;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIScrollView, CADisplayLink;

@interface _UIAutoScrollAssistant : NSObject {

	BOOL _started;
	UIScrollView* _scrollView;
	long long _mode;
	unsigned long long _allowedDirections;
	CADisplayLink* _displayLink;
	double _lastTimestamp;
	id<_UIAutoScrollBehavior> _behavior;
	CGPoint _point;
	CGPoint _referenceContentOffsetForPoint;
	UIEdgeInsets _touchInsets;

}

@property (nonatomic,retain) CADisplayLink * displayLink;                         //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,readonly) CGPoint point;                                     //@synthesize point=_point - In the implementation block
@property (assign,nonatomic) CGPoint referenceContentOffsetForPoint;              //@synthesize referenceContentOffsetForPoint=_referenceContentOffsetForPoint - In the implementation block
@property (assign,nonatomic) double lastTimestamp;                                //@synthesize lastTimestamp=_lastTimestamp - In the implementation block
@property (assign,nonatomic) BOOL started;                                        //@synthesize started=_started - In the implementation block
@property (nonatomic,retain) id<_UIAutoScrollBehavior> behavior;                  //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,__weak,readonly) UIScrollView * scrollView;                  //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long mode;                                      //@synthesize mode=_mode - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (assign,nonatomic) UIEdgeInsets touchInsets;                            //@synthesize touchInsets=_touchInsets - In the implementation block
@property (assign,nonatomic) unsigned long long allowedDirections;                //@synthesize allowedDirections=_allowedDirections - In the implementation block
-(void)setMode:(long long)arg1 ;
-(BOOL)isActive;
-(void)stop;
-(long long)mode;
-(CGPoint)point;
-(BOOL)started;
-(void)autoScrollFromPoint:(CGPoint)arg1 ;
-(id<_UIAutoScrollBehavior>)behavior;
-(void)setBehavior:(id<_UIAutoScrollBehavior>)arg1 ;
-(UIScrollView *)scrollView;
-(id)initWithScrollView:(id)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setAllowedDirections:(unsigned long long)arg1 ;
-(void)setPoint:(CGPoint)arg1 forContentOffset:(CGPoint)arg2 ;
-(void)displayLinkFired:(id)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)setLastTimestamp:(double)arg1 ;
-(BOOL)_scrollContinuous;
-(double)lastTimestamp;
-(void)_handleAutoScrollerWithContentOffset:(CGPoint)arg1 direction:(unsigned long long)arg2 ;
-(void)_adjustPointToCurrentContentOffset;
-(UIEdgeInsets)touchInsets;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(unsigned long long)allowedDirections;
-(CGPoint)referenceContentOffsetForPoint;
-(void)setReferenceContentOffsetForPoint:(CGPoint)arg1 ;
@end


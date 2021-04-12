/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIAutoscrollContainer;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSTimer;

@interface UIAutoscroll : NSObject {

	id m_target;
	CGPoint m_point;
	UIView*<UIAutoscrollContainer> m_scrollContainer;
	int m_directions;
	double m_repeatInterval;
	NSTimer* m_timer;
	unsigned long long m_count;
	BOOL m_active;
	BOOL m_disabled;
	id _target;

}

@property (assign,nonatomic,__weak) id target;                                            //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIView*<UIAutoscrollContainer> scrollContainer; 
@property (assign,nonatomic) CGPoint point; 
@property (assign,nonatomic) int directions; 
@property (assign,nonatomic) double repeatInterval; 
@property (assign,nonatomic) unsigned long long count; 
@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL disabled; 
-(void)setTarget:(id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(CGPoint)point;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(unsigned long long)count;
-(void)setRepeatInterval:(double)arg1 ;
-(BOOL)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(CGPoint)arg3 directions:(int)arg4 repeatInterval:(double)arg5 ;
-(void)timerFired:(id)arg1 ;
-(void)invalidate;
-(id)target;
-(int)directions;
-(void)setPoint:(CGPoint)arg1 ;
-(BOOL)disabled;
-(double)repeatInterval;
-(void)setScrollContainer:(UIView*<UIAutoscrollContainer>)arg1 ;
-(void)setDirections:(int)arg1 ;
-(UIView*<UIAutoscrollContainer>)scrollContainer;
-(void)dealloc;
@end


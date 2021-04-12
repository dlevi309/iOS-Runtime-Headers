/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@class NSArray;

@interface UITextTapRecognizer : UITapGestureRecognizer {

	NSArray* _touchesForTap;
	double _touchBasedAllowableMovement;

}

@property (assign,nonatomic) double touchBasedAllowableMovement;              //@synthesize touchBasedAllowableMovement=_touchBasedAllowableMovement - In the implementation block
@property (nonatomic,retain) NSArray * touchesForTap;                         //@synthesize touchesForTap=_touchesForTap - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)touchesForTap;
-(void)setTouchBasedAllowableMovement:(double)arg1 ;
-(double)touchBasedAllowableMovement;
-(void)setTouchesForTap:(NSArray *)arg1 ;
@end


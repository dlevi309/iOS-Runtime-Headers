/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTouchBasedAllowableMovement:(double)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)touchBasedAllowableMovement;
-(NSArray *)touchesForTap;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouchesForTap:(NSArray *)arg1 ;
@end


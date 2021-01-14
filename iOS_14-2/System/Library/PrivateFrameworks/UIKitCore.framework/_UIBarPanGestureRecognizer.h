/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer {

	long long _barAction;
	double _bias;

}

@property (nonatomic,readonly) long long barAction;              //@synthesize barAction=_barAction - In the implementation block
@property (nonatomic,readonly) double bias;                      //@synthesize bias=_bias - In the implementation block
-(double)bias;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(long long)barAction;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(void)_setDelegate:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end


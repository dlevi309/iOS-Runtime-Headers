/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITapGestureRecognizer.h>

@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer {

	BOOL _failWhenTappingInBars;
	long long _tapCategory;

}

@property (nonatomic,readonly) long long tapCategory;                 //@synthesize tapCategory=_tapCategory - In the implementation block
@property (assign,nonatomic) BOOL failWhenTappingInBars;              //@synthesize failWhenTappingInBars=_failWhenTappingInBars - In the implementation block
-(id)description;
-(void)setDelegate:(id)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(long long)_categoryForTapLocation:(CGPoint)arg1 ;
-(long long)tapCategory;
-(BOOL)failWhenTappingInBars;
-(void)setFailWhenTappingInBars:(BOOL)arg1 ;
@end


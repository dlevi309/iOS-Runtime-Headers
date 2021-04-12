/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSSimpleAssertion.h>

@interface SBMainStatusBarContentAssertion : BSSimpleAssertion {

	BOOL _animated;
	BOOL _dateAndTimeVisible;
	double _duration;

}

@property (assign,nonatomic) BOOL animated;                        //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL dateAndTimeVisible;              //@synthesize dateAndTimeVisible=_dateAndTimeVisible - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 ;
-(BOOL)dateAndTimeVisible;
-(void)setDateAndTimeVisible:(BOOL)arg1 ;
@end


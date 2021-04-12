/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)animated;
-(BOOL)dateAndTimeVisible;
-(void)setDuration:(double)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 ;
-(void)setDateAndTimeVisible:(BOOL)arg1 ;
-(double)duration;
@end


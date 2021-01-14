/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNETADisplayFormatterDelegate;
@class NSTimeZone, MNWeakTimer, NSDate;

@interface MNETADisplayFormatter : NSObject {

	id<MNETADisplayFormatterDelegate> _delegate;
	double _remainingTimeToEndOfLeg;
	double _remainingTimeToEndOfRoute;
	NSTimeZone* _timeZone;
	MNWeakTimer* _updateTimer;
	double _displayRemainingTimeToEndOfLeg;
	double _displayRemainingTimeToEndOfRoute;
	NSDate* _displayETAToEndOfLeg;
	NSDate* _displayETAToEndOfRoute;

}

@property (assign,nonatomic,__weak) id<MNETADisplayFormatterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double remainingTimeToEndOfRoute;                               //@synthesize remainingTimeToEndOfRoute=_remainingTimeToEndOfRoute - In the implementation block
@property (assign,nonatomic) double remainingTimeToEndOfLeg;                                 //@synthesize remainingTimeToEndOfLeg=_remainingTimeToEndOfLeg - In the implementation block
@property (nonatomic,readonly) double displayRemainingTimeToEndOfLeg;                        //@synthesize displayRemainingTimeToEndOfLeg=_displayRemainingTimeToEndOfLeg - In the implementation block
@property (nonatomic,readonly) NSDate * displayETAToEndOfLeg;                                //@synthesize displayETAToEndOfLeg=_displayETAToEndOfLeg - In the implementation block
@property (nonatomic,readonly) double displayRemainingTimeToEndOfRoute;                      //@synthesize displayRemainingTimeToEndOfRoute=_displayRemainingTimeToEndOfRoute - In the implementation block
@property (nonatomic,readonly) NSDate * displayETAToEndOfRoute;                              //@synthesize displayETAToEndOfRoute=_displayETAToEndOfRoute - In the implementation block
-(id<MNETADisplayFormatterDelegate>)delegate;
-(void)setDelegate:(id<MNETADisplayFormatterDelegate>)arg1 ;
-(void)_updateTimerFired;
-(void)dealloc;
-(NSDate *)displayETAToEndOfRoute;
-(void)_updateDisplayETA;
-(double)_displayTimeIntervalForTimeInterval:(double)arg1 ;
-(id)_displayDateWithRemainingTime:(double)arg1 ;
-(void)_scheduleUpdateTimer;
-(id)initWithTimeZone:(id)arg1 ;
-(void)setRemainingTimeToEndOfRoute:(double)arg1 ;
-(void)setRemainingTimeToEndOfLeg:(double)arg1 ;
-(double)remainingTimeToEndOfRoute;
-(double)remainingTimeToEndOfLeg;
-(double)displayRemainingTimeToEndOfLeg;
-(NSDate *)displayETAToEndOfLeg;
-(double)displayRemainingTimeToEndOfRoute;
@end


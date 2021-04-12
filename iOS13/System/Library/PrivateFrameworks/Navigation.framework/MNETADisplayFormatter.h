/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNETADisplayFormatterDelegate;
@class NSTimeZone, MNWeakTimer, NSDate;

@interface MNETADisplayFormatter : NSObject {

	id<MNETADisplayFormatterDelegate> _delegate;
	double _remainingTime;
	NSTimeZone* _timeZone;
	MNWeakTimer* _updateTimer;
	double _displayRemainingTime;
	NSDate* _displayETA;

}

@property (assign,nonatomic,__weak) id<MNETADisplayFormatterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double remainingTime;                                           //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,readonly) double displayRemainingTime;                                  //@synthesize displayRemainingTime=_displayRemainingTime - In the implementation block
@property (nonatomic,readonly) NSDate * displayETA;                                          //@synthesize displayETA=_displayETA - In the implementation block
-(void)dealloc;
-(id<MNETADisplayFormatterDelegate>)delegate;
-(void)setDelegate:(id<MNETADisplayFormatterDelegate>)arg1 ;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(void)_updateTimerFired;
-(NSDate *)displayETA;
-(void)_updateDisplayETA;
-(double)_displayTimeIntervalForTimeInterval:(double)arg1 ;
-(id)_displayDateWithRemainingTime:(double)arg1 ;
-(void)_scheduleUpdateTimer;
-(id)initWithTimeZone:(id)arg1 ;
-(double)displayRemainingTime;
@end


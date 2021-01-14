/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMOdometer;

@interface CMOdometerProxy : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fCallbackQueue;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fHandler;
	long long fGpsAvailability;
	CMOdometer* _odometer;
	double _totalDistance;
	double _averageSpeed;
	double _startDate;

}

@property (assign,nonatomic) CMOdometer * odometer;              //@synthesize odometer=_odometer - In the implementation block
@property (assign) double totalDistance;                         //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign) double averageSpeed;                          //@synthesize averageSpeed=_averageSpeed - In the implementation block
@property (assign) double startDate;                             //@synthesize startDate=_startDate - In the implementation block
-(double)totalDistance;
-(void)setStartDate:(double)arg1 ;
-(void)setTotalDistance:(double)arg1 ;
-(CMOdometer *)odometer;
-(void)setAverageSpeed:(double)arg1 ;
-(void)_stopOdometerUpdates;
-(double)averageSpeed;
-(id)initWithOdometer:(id)arg1 ;
-(void)_startDaemonConnection;
-(void)_startOdometerUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)setOdometer:(CMOdometer *)arg1 ;
-(double)startDate;
-(void)_teardown;
-(void)dealloc;
@end


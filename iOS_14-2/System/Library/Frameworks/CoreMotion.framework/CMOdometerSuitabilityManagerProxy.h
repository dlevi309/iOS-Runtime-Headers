/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMOdometerSuitabilityManager;

@interface CMOdometerSuitabilityManagerProxy : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fCallbackQueue;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fHandler;
	CMOdometerSuitabilityManager* _odometerSuitabilityManager;
	double _startDate;
	double _suitableForRunning;
	double _suitableForWalking;

}

@property (assign,nonatomic) CMOdometerSuitabilityManager * odometerSuitabilityManager;              //@synthesize odometerSuitabilityManager=_odometerSuitabilityManager - In the implementation block
@property (assign) double startDate;                                                                 //@synthesize startDate=_startDate - In the implementation block
@property (assign) double suitableForRunning;                                                        //@synthesize suitableForRunning=_suitableForRunning - In the implementation block
@property (assign) double suitableForWalking;                                                        //@synthesize suitableForWalking=_suitableForWalking - In the implementation block
-(void)setStartDate:(double)arg1 ;
-(double)suitableForRunning;
-(double)suitableForWalking;
-(void)_startDaemonConnection;
-(double)startDate;
-(void)_teardown;
-(CMOdometerSuitabilityManager *)odometerSuitabilityManager;
-(id)initWithOdometerSuitability:(id)arg1 ;
-(void)_stopOdometerSuitabilityUpdates;
-(void)_startOdometerSuitabilityUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)setOdometerSuitabilityManager:(CMOdometerSuitabilityManager *)arg1 ;
-(void)setSuitableForRunning:(double)arg1 ;
-(void)setSuitableForWalking:(double)arg1 ;
-(void)dealloc;
@end


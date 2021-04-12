/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNTimeballLocationProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_source, CLLocationManagerDelegate;
@class CLLocation, NSLock, NSMutableArray, CLLocationManager, NSObject, NSString;

@interface MNTimeballMockLocationProvider : NSObject <MNTimeballLocationProvider> {

	BOOL _deliveringUpdates;
	NSLock* _objectLock;
	NSMutableArray* _queuedObjects;
	NSMutableArray* _delayIntervals;
	CLLocationManager* _lm;
	CLLocation* _location;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	id<CLLocationManagerDelegate> delegate;
	double desiredAccuracy;
	CLLocation* location;

}

@property (assign,nonatomic) double desiredAccuracy; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(void)_setupTimer;
-(void)setDesiredAccuracy:(double)arg1 ;
-(id<CLLocationManagerDelegate>)delegate;
-(double)desiredAccuracy;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(CLLocation *)location;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3 ;
-(id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3 ;
-(void)_processNextObject;
-(void)_deliverNextObject;
-(void)deliverLocation:(id)arg1 afterDelay:(double)arg2 ;
-(void)deliverError:(id)arg1 afterDelay:(double)arg2 ;
-(void)clearLocationsAndErrors;
@end


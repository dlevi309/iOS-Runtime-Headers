/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKLocationManagerObserver.h>
#import <libobjc.A.dylib/MKLocationManagerOperation.h>

@class MKLocationManager, NSTimer, NSString;

@interface MKLocationManagerSingleUpdater : NSObject <MKLocationManagerObserver, MKLocationManagerOperation> {

	/*^block*/id _handler;
	BOOL _active;
	double _desiredAccuracy;
	double _timeout;
	MKLocationManagerSingleUpdater* _selfReference;
	MKLocationManager* _locationManager;
	NSTimer* _timeoutTimer;
	double _maxLocationAge;

}

@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double timeout;                        //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)handler;
-(void)cancel;
-(void)setHandler:(id)arg1 ;
-(void)start;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(id)initWithLocationManager:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(/*^block*/id)arg3 timeout:(double)arg4 ;
-(id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(/*^block*/id)arg3 timeout:(double)arg4 maxLocationAge:(double)arg5 ;
-(void)handleTimeout:(id)arg1 ;
@end


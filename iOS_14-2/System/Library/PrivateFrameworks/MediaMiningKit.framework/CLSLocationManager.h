/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, CLLocationManager, NSUUID, NSString;

@interface CLSLocationManager : NSObject <CLLocationManagerDelegate> {

	double _desiredAccuracy;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _minimumDelayReached;
	BOOL _isBrowsing;
	NSMutableArray* _pendingBlocks;
	CLLocationManager* _locationManager;
	BOOL _isUpdatingLocation;
	NSUUID* _shutdownUUID;

}

@property (assign,nonatomic) double desiredAccuracy;                //@synthesize desiredAccuracy=_desiredAccuracy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(id)currentLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(double)desiredAccuracy;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)dealloc;
-(void)locationResult:(/*^block*/id)arg1 ;
-(void)_dispatchProximityPendingBlocks:(BOOL)arg1 ;
@end


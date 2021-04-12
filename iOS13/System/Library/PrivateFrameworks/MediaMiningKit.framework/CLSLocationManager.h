/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)currentLocation;
-(void)locationResult:(/*^block*/id)arg1 ;
-(void)_dispatchProximityPendingBlocks:(BOOL)arg1 ;
@end


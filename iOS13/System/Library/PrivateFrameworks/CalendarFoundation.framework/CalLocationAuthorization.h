/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate> {

	id _bundleOrBundleIdentifier;
	CLLocationManager* _locationManager;
	Ai _status;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)authorizationStatusForBundle:(id)arg1 ;
+(id)logHandle;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(int)authorizationStatus;
-(id)initWithBundleID:(id)arg1 bundle:(id)arg2 queue:(id)arg3 ;
@end


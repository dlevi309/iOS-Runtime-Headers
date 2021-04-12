/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFAccessResource.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface WFLocationAccessResource : WFAccessResource <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	/*^block*/id _makeAvailableCompletionHandler;

}

@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,copy) id makeAvailableCompletionHandler;                  //@synthesize makeAvailableCompletionHandler=_makeAvailableCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSystemResource;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(id)icon;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)name;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishMakingAvailableWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)makeAvailableCompletionHandler;
-(void)setMakeAvailableCompletionHandler:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, RTRoutineManager, NSString;

@interface _DKLocationMonitor : _DKMonitor <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	RTRoutineManager* _routineManager;
	BOOL _locationEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entitlements;
+(id)eventStream;
-(id)init;
-(void)start;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)_locationFromVisit:(id)arg1 ;
-(void)stop;
-(void)_handleVisit:(id)arg1 ;
-(void)locationManager:(id)arg1 didVisit:(id)arg2 ;
@end


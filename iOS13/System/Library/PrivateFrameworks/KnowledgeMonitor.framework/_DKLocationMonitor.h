/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)stop;
-(void)start;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didVisit:(id)arg2 ;
-(id)_locationFromVisit:(id)arg1 ;
-(void)_handleVisit:(id)arg1 ;
@end


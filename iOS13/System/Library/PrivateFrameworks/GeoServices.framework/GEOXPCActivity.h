/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_xpc_object;
@class NSString, NSObject, geo_isolater;

@interface GEOXPCActivity : NSObject {

	NSString* _name;
	BOOL _isRepeating;
	BOOL _shouldLaunchDaemon;
	/*^block*/id _handler;
	NSObject*<OS_xpc_object> _activity;
	geo_isolater* _isolation;

}
+(void)checkInActivity:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)cancelActivity:(id)arg1 ;
+(id)registerActivity:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
+(void)updateActivities:(/*^block*/id)arg1 ;
+(void)clearActivity:(id)arg1 ;
+(void)addActivity:(id)arg1 shouldLaunchDaemon:(BOOL)arg2 repeating:(BOOL)arg3 ;
+(void)resetActivities;
-(void)dealloc;
-(void)cancelActivity;
-(void)finishActivity;
-(BOOL)shouldDeferActivity;
-(void)deferActivity;
-(id)initWithName:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_handleRunActivity:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSObject*<OS_xpc_object> _criteria;
	geo_isolater* _isolation;

}
+(void)checkInActivity:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)cancelActivity:(id)arg1 ;
+(void)resetActivities;
+(void)updateActivities:(/*^block*/id)arg1 ;
+(void)addActivity:(id)arg1 shouldLaunchDaemon:(BOOL)arg2 repeating:(BOOL)arg3 ;
+(id)registerActivity:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
+(void)clearActivity:(id)arg1 ;
-(void)deferActivity;
-(BOOL)shouldDeferActivity;
-(id)initWithName:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)finishActivity;
-(void)cancelActivity;
-(void)_handleRunActivity:(id)arg1 ;
-(void)dealloc;
@end


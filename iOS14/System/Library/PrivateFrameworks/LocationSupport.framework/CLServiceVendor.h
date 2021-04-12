/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


@class NSMutableDictionary, NSDictionary, NSMutableSet;

@interface CLServiceVendor : NSObject {

	NSMutableDictionary* _catalog;
	NSDictionary* _serviceReplacementMap;
	NSMutableSet* _unavailableServiceNames;
	NSMutableSet* _timeCoercibleSilos;
	int _missBehavior;
	double _currentGlobalLatchedAbsoluteTimestamp;
	NSMutableDictionary* _recordingFromTriggersByTo;
	NSMutableDictionary* _recordingToTriggersByFrom;

}
+(void)initialize;
+(id)sharedInstance;
+(void)rereadConfiguration:(id)arg1 ;
-(id)init;
-(void)retireServiceWithName:(id)arg1 ;
-(void)setCurrentGlobalLatchedAbsoluteTimestamp:(double)arg1 ;
-(BOOL)isServiceRunning:(id)arg1 ;
-(void)enableTimeCoercion;
-(id)proxyForService:(id)arg1 ;
-(BOOL)ensureServiceIsRunning:(id)arg1 ;
-(id)getServiceWithName:(id)arg1 ;
-(BOOL)isTimeCoercionEnabled;
-(id)proxyForService:(id)arg1 forClient:(id)arg2 ;
-(void)setServiceReplacementMap:(id)arg1 missBehavior:(int)arg2 ;
-(BOOL)isServiceEnabled:(id)arg1 ;
-(id)setRecordingTriggerMap:(id)arg1 outputPathBase:(id)arg2 ;
-(void)dealloc;
@end


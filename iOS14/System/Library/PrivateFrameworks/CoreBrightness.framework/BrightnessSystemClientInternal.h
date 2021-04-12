/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSXPCConnection, BrightnessSystemClientExportedObj, NSMutableArray, NSCondition, NSObject;

@interface BrightnessSystemClientInternal : NSObject {

	NSXPCConnection* _connection;
	id _remote;
	BrightnessSystemClientExportedObj* exportedObj;
	NSMutableArray* _clientProperties;
	NSCondition* copyPropertyForKeyWaitCondition;
	BOOL copyPropertyForKeyCompleted;
	BOOL _useSynchronousRemote;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_os_log> _logHandle;

}
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)stopXpcService;
-(id)init;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)addPropertiesForNotification:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(void)removeKeyFromClientProperties:(id)arg1 ;
-(void)removePropertyFromNotification:(id)arg1 ;
-(void)removePropertiesFromNotification:(id)arg1 ;
-(void)addKeyToClientProperties:(id)arg1 ;
-(void)addPropertyForNotification:(id)arg1 ;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log;
@class NSXPCConnection, BrightnessSystemClientExportedObj, NSMutableArray, NSCondition, NSObject;

@interface BrightnessSystemClientInternal : NSObject {

	NSXPCConnection* _connection;
	id _remote;
	BrightnessSystemClientExportedObj* exportedObj;
	NSMutableArray* _clientProperties;
	NSCondition* copyPropertyForKeyWaitCondition;
	BOOL copyPropertyForKeyCompleted;
	NSObject*<OS_os_log> _logHandle;

}
-(id)init;
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)addKeyToClientProperties:(id)arg1 ;
-(void)removeKeyFromClientProperties:(id)arg1 ;
-(void)stopXpcService;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(void)addPropertiesForNotification:(id)arg1 ;
-(void)removePropertiesFromNotification:(id)arg1 ;
-(void)addPropertyForNotification:(id)arg1 ;
-(void)removePropertyFromNotification:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, CoreTelephonyClient, CTDataStatus, NSString;

@interface FigCoreTelephonyServiceConnection : NSObject <CoreTelephonyClientDataDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _doomTimer;
	CTServerConnectionRef _ctServerConnection;
	CoreTelephonyClient* _ctClient;
	CTDataStatus* _ctDataStatus;
	OpaqueFigCoreTelephonyStatus _currentStatus;
	FigCoreTelephonyMonitorListHead* _callbackEntries;
	CFAllocatorRef _allocator;

}

@property (nonatomic,readonly) OpaqueFigCoreTelephonyStatus currentStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_setupConnection;
-(id)init;
-(void)_teardownConnection;
-(void)processDataStatus:(id)arg1 ;
-(void)_handleCTNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2 ;
-(int)registerListener:(void*)arg1 callback:(/*function pointer*/void*)arg2 queue:(id)arg3 ;
-(void)deregisterListener:(void*)arg1 ;
-(void)internetDataStatus:(id)arg1 ;
-(OpaqueFigCoreTelephonyStatus)currentStatus;
-(void)dealloc;
@end


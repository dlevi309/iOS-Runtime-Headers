/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSSiriAssertionMonitor : CSEventMonitor <CSXPCConnectionDelegate> {

	unsigned char _assertionState;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(BOOL)arg1 ;
-(void)enableAssertionReceived;
-(void)disableAssertionReceived;
-(void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
@end


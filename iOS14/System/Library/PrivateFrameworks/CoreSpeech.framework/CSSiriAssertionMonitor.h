/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)dealloc;
-(void)enableAssertionReceived;
-(void)disableAssertionReceived;
@end


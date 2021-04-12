/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/VTEventMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface VTPolicy : NSObject <VTEventMonitorDelegate> {

	NSMutableArray* _monitors;
	NSMutableArray* _conditions;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultVoiceTriggerEnablePolicy;
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setCallback:(/*^block*/id)arg1 ;
-(void)subscribeEventMonitor:(id)arg1 ;
-(void)addConditions:(/*^block*/id)arg1 ;
-(BOOL)_checkAllConditionsEnabled;
-(void)VTEventMonitorDidReceiveEvent:(id)arg1 ;
-(void)notifyCallback:(BOOL)arg1 ;
@end


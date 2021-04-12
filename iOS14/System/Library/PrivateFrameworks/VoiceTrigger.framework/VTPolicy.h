/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCallback:(/*^block*/id)arg1 ;
-(id)init;
-(void)addConditions:(/*^block*/id)arg1 ;
-(BOOL)isEnabled;
-(void)dealloc;
-(void)subscribeEventMonitor:(id)arg1 ;
-(BOOL)_checkAllConditionsEnabled;
-(void)VTEventMonitorDidReceiveEvent:(id)arg1 ;
-(void)notifyCallback:(BOOL)arg1 ;
@end


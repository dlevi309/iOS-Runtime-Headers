/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSEventMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface CSPolicy : NSObject <CSEventMonitorDelegate> {

	NSMutableArray* _monitors;
	NSMutableArray* _conditions;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(/*^block*/id)arg1 ;
-(id)init;
-(void)addConditions:(/*^block*/id)arg1 ;
-(BOOL)isEnabled;
-(void)CSEventMonitorDidReceiveEvent:(id)arg1 ;
-(void)dealloc;
-(void)notifyCallbackWithOption:(unsigned long long)arg1 ;
-(void)subscribeEventMonitor:(id)arg1 ;
-(BOOL)_checkAllConditionsEnabled;
-(void)notifyCallback:(BOOL)arg1 option:(unsigned long long)arg2 ;
@end


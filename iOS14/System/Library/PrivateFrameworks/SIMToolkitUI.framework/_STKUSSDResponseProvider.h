/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <libobjc.A.dylib/STKAlertSessionResponseProvider.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSObject, CoreTelephonyClient, NSDictionary, NSString;

@interface _STKUSSDResponseProvider : NSObject <STKAlertSessionResponseProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _telephonyClient;
	NSDictionary* _options;
	BOOL _hasSentResponse;
	NSObject*<OS_os_log> _logger;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> logger; 
@property (nonatomic,readonly) BOOL hasSentResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendResponse:(long long)arg1 ;
-(void)sendResponse:(long long)arg1 withStringResult:(id)arg2 ;
-(BOOL)hasSentResponse;
-(NSObject*<OS_os_log>)logger;
-(id)initWithQueue:(id)arg1 telephonyClient:(id)arg2 options:(id)arg3 logger:(id)arg4 ;
-(void)dealloc;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <libobjc.A.dylib/STKAlertSessionResponseProvider.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSObject, CoreTelephonyClient, CTXPCServiceSubscriptionContext, NSDictionary, NSString;

@interface _STKSIMToolkitResponseProvider : NSObject <STKAlertSessionResponseProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _telephonyClient;
	CTXPCServiceSubscriptionContext* _context;
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
-(void)sendResponse:(long long)arg1 withBOOLResult:(BOOL)arg2 ;
-(void)sendResponse:(long long)arg1 ;
-(id)initWithQueue:(id)arg1 telephonyClient:(id)arg2 context:(id)arg3 options:(id)arg4 logger:(id)arg5 ;
-(void)sendResponse:(long long)arg1 withStringResult:(id)arg2 ;
-(BOOL)hasSentResponse;
-(CFStringRef)_responseFromResponseType:(long long)arg1 ;
-(NSObject*<OS_os_log>)logger;
-(void)sendSuccessWithSelectedIndex:(unsigned long long)arg1 ;
@end


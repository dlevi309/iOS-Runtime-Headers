/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <libobjc.A.dylib/STKAlertSessionResponseProvider.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSObject, NSDictionary, NSString;

@interface _STKUSSDResponseProvider : NSObject <STKAlertSessionResponseProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	CTServerConnectionRef _connection;
	NSDictionary* _options;
	BOOL _hasSentResponse;
	NSObject*<OS_os_log> _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_os_log> logger; 
@property (nonatomic,readonly) BOOL hasSentResponse; 
-(void)dealloc;
-(NSObject*<OS_os_log>)logger;
-(void)sendResponse:(long long)arg1 ;
-(void)sendResponse:(long long)arg1 withStringResult:(id)arg2 ;
-(BOOL)hasSentResponse;
-(id)initWithQueue:(id)arg1 connection:(CTServerConnectionRef)arg2 options:(id)arg3 logger:(id)arg4 ;
@end


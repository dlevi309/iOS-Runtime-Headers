/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXActivityDeferrableProtocol.h>

@protocol OS_xpc_object, OS_os_log;
@class NSObject, NSString;

@interface ATXXPCActivity : NSObject <ATXActivityDeferrableProtocol> {

	NSObject*<OS_xpc_object> _activity;
	NSString* _name;
	NSObject*<OS_os_log> _handle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)shouldDefer;
-(BOOL)didDefer;
-(id)initWithActivity:(id)arg1 name:(id)arg2 ;
-(id)initWithActivity:(id)arg1 name:(id)arg2 logHandle:(id)arg3 ;
@end


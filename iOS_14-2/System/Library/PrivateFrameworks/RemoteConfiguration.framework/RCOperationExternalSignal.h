/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <libobjc.A.dylib/RCOperationRetrySignal.h>

@protocol OS_dispatch_group;
@class NSObject, NSString;

@interface RCOperationExternalSignal : NSObject <RCOperationRetrySignal> {

	BOOL _result;
	NSObject*<OS_dispatch_group> _group;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)triggerWithRetry:(BOOL)arg1 ;
-(void)onQueue:(id)arg1 signal:(/*^block*/id)arg2 ;
@end


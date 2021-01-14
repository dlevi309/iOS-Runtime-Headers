/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/BRCReachabilityDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, BRCThrottler;

@interface BRCAccountOnlinePerformer : NSObject <BRCReachabilityDelegate> {

	NSString* _accountID;
	NSObject*<OS_dispatch_queue> _queue;
	BRCThrottler* _throttler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)addPerformer:(id)arg1 ;
+(void)removePerformer:(id)arg1 ;
-(id)_key;
-(void)_close;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(void)perform;
-(id)initWithAccountID:(id)arg1 ;
-(void)resumeAndAutoClose;
@end


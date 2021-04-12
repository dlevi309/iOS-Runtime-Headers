/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)perform;
-(id)initWithAccountID:(id)arg1 ;
-(void)_close;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(void)resumeAndAutoClose;
@end


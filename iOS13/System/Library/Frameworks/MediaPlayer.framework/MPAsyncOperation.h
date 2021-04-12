/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/MPUserIdentityConsuming.h>

@protocol OS_dispatch_queue;
@class ICUserIdentity, NSObject, NSError, NSString;

@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _isExecuting;
	BOOL _isFinished;
	ICUserIdentity* _userIdentity;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSError * error;                   //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) ICUserIdentity * userIdentity;              //@synthesize userIdentity=_userIdentity - In the implementation block
-(id)init;
-(NSError *)error;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(void)finish;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(ICUserIdentity *)userIdentity;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
@end


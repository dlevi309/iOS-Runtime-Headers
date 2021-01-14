/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) ICUserIdentity * userIdentity;              //@synthesize userIdentity=_userIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)execute;
-(void)finish;
-(ICUserIdentity *)userIdentity;
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(NSError *)error;
-(BOOL)isExecuting;
-(void)finishWithError:(id)arg1 ;
-(BOOL)isConcurrent;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <libobjc.A.dylib/RCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/RCOperationThrottler.h>

@protocol RCOperationThrottlerDelegate;
@class RCOperationThrottler, NSString;

@interface RCTimedOperationThrottler : NSObject <RCOperationThrottlerDelegate, RCOperationThrottler> {

	double _cooldownTime;
	RCOperationThrottler* _operationThrottler;
	id<RCOperationThrottlerDelegate> _delegate;

}

@property (nonatomic,retain) RCOperationThrottler * operationThrottler;                     //@synthesize operationThrottler=_operationThrottler - In the implementation block
@property (assign,nonatomic,__weak) id<RCOperationThrottlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double cooldownTime;                                                     //@synthesize cooldownTime=_cooldownTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL suspended; 
-(id)init;
-(id<RCOperationThrottlerDelegate>)delegate;
-(void)setDelegate:(id<RCOperationThrottlerDelegate>)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithDelegate:(id)arg1 ;
-(void)tickle;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(RCOperationThrottler *)operationThrottler;
-(double)cooldownTime;
-(void)setCooldownTime:(double)arg1 ;
-(void)setOperationThrottler:(RCOperationThrottler *)arg1 ;
@end


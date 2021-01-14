/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)tickle;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(id<RCOperationThrottlerDelegate>)delegate;
-(BOOL)suspended;
-(double)cooldownTime;
-(void)setDelegate:(id<RCOperationThrottlerDelegate>)arg1 ;
-(void)setOperationThrottler:(RCOperationThrottler *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(RCOperationThrottler *)operationThrottler;
-(void)setCooldownTime:(double)arg1 ;
@end


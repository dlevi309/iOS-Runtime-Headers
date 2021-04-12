/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/SCKOperationThrottler.h>

@protocol SCKOperationThrottlerDelegate;
@class SCKOperationThrottler, NSString;

@interface SCKTimedOperationThrottler : NSObject <SCKOperationThrottlerDelegate, SCKOperationThrottler> {

	double _cooldownTime;
	SCKOperationThrottler* _operationThrottler;
	id<SCKOperationThrottlerDelegate> _delegate;

}

@property (nonatomic,retain) SCKOperationThrottler * operationThrottler;                     //@synthesize operationThrottler=_operationThrottler - In the implementation block
@property (assign,nonatomic,__weak) id<SCKOperationThrottlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double cooldownTime;                                                      //@synthesize cooldownTime=_cooldownTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL suspended; 
-(id<SCKOperationThrottlerDelegate>)delegate;
-(void)setDelegate:(id<SCKOperationThrottlerDelegate>)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithDelegate:(id)arg1 ;
-(void)tickle;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(SCKOperationThrottler *)operationThrottler;
-(double)cooldownTime;
-(void)setCooldownTime:(double)arg1 ;
-(void)setOperationThrottler:(SCKOperationThrottler *)arg1 ;
@end


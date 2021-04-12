/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)tickle;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)setSuspended:(BOOL)arg1 ;
-(id<SCKOperationThrottlerDelegate>)delegate;
-(BOOL)suspended;
-(double)cooldownTime;
-(void)setDelegate:(id<SCKOperationThrottlerDelegate>)arg1 ;
-(void)setOperationThrottler:(SCKOperationThrottler *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(SCKOperationThrottler *)operationThrottler;
-(void)setCooldownTime:(double)arg1 ;
@end


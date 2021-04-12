/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWProcessTerminationManager.h>

@protocol SWProcessTerminationManager <NSObject>
@required
-(void)webContentProcessTerminated;
-(void)onRetry:(/*^block*/id)arg1;

@end


@protocol SWProcessTerminationPolicyDecider, SWErrorReporting;
@class NSMutableArray, NSString;

@interface SWProcessTerminationManager : NSObject <SWProcessTerminationManager> {

	id<SWProcessTerminationPolicyDecider> _throttler;
	id<SWErrorReporting> _errorReporter;
	NSMutableArray* _onRetryBlocks;

}

@property (nonatomic,readonly) id<SWProcessTerminationPolicyDecider> throttler;              //@synthesize throttler=_throttler - In the implementation block
@property (nonatomic,readonly) id<SWErrorReporting> errorReporter;                           //@synthesize errorReporter=_errorReporter - In the implementation block
@property (nonatomic,readonly) NSMutableArray * onRetryBlocks;                               //@synthesize onRetryBlocks=_onRetryBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SWProcessTerminationPolicyDecider>)throttler;
-(id<SWErrorReporting>)errorReporter;
-(NSMutableArray *)onRetryBlocks;
-(void)webContentProcessTerminated;
-(void)onRetry:(/*^block*/id)arg1 ;
-(id)initWithTerminationThrottler:(id)arg1 errorReporter:(id)arg2 ;
@end


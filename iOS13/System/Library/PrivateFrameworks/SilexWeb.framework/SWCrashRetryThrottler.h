/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWProcessTerminationPolicyDecider.h>

@class NSString;

@interface SWCrashRetryThrottler : NSObject <SWProcessTerminationPolicyDecider> {

	BOOL _crashed;
	unsigned long long retryPolicy;

}

@property (assign,nonatomic) BOOL crashed;                                  //@synthesize crashed=_crashed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long retryPolicy; 
-(BOOL)shouldReloadAfterWebProcessCrash;
-(unsigned long long)retryPolicy;
-(BOOL)crashed;
-(void)setCrashed:(BOOL)arg1 ;
@end


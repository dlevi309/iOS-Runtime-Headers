/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWProcessTerminationPolicyDecider.h>

@class NSString;

@interface SWCrashRetryThrottler : NSObject <SWProcessTerminationPolicyDecider> {

	BOOL _crashed;
	unsigned long long retryPolicy;

}

@property (assign,nonatomic) BOOL crashed;                                  //@synthesize crashed=_crashed - In the implementation block
@property (nonatomic,readonly) unsigned long long retryPolicy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)crashed;
-(BOOL)shouldReloadAfterWebProcessCrash;
-(unsigned long long)retryPolicy;
-(void)setCrashed:(BOOL)arg1 ;
@end


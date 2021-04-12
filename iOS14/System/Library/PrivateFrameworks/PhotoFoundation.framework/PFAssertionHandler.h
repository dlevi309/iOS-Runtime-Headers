/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <Foundation/NSAssertionHandler.h>

@protocol PFAssertionPolicyHandler;
@interface PFAssertionHandler : NSAssertionHandler {

	id<PFAssertionPolicyHandler> _policy;

}

@property (retain) id<PFAssertionPolicyHandler> policy;              //@synthesize policy=_policy - In the implementation block
+(id)currentHandler;
+(void)install;
+(BOOL)runningUnitTests;
-(void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5 ;
-(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 ;
-(void)setPolicy:(id<PFAssertionPolicyHandler>)arg1 ;
-(id)init;
-(id<PFAssertionPolicyHandler>)policy;
-(void)_install;
-(id)defaultPolicy;
-(id)defaultTestingPolicy;
-(id)newAssertionInfoInMethod:(SEL)arg1 object:(id)arg2 function:(id)arg3 file:(id)arg4 lineNumber:(long long)arg5 description:(id)arg6 arguments:(char*)arg7 ;
-(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(char*)arg5 ;
-(void)continueAfterAssertInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(char*)arg5 ;
@end


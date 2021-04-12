/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <Foundation/NSAssertionHandler.h>

@protocol NUAssertionPolicyHandler;
@interface NUAssertionHandler : NSAssertionHandler {

	id<NUAssertionPolicyHandler> _policy;

}

@property (retain) id<NUAssertionPolicyHandler> policy;              //@synthesize policy=_policy - In the implementation block
+(id)currentHandler;
+(BOOL)runningUnitTests;
-(id)init;
-(void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5 ;
-(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 ;
-(id<NUAssertionPolicyHandler>)policy;
-(id)defaultPolicy;
-(void)setPolicy:(id<NUAssertionPolicyHandler>)arg1 ;
-(id)defaultTestingPolicy;
-(id)newAssertionInfoInMethod:(SEL)arg1 object:(id)arg2 function:(id)arg3 file:(id)arg4 lineNumber:(unsigned long long)arg5 description:(id)arg6 arguments:(char*)arg7 ;
-(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(unsigned long long)arg3 description:(id)arg4 arguments:(char*)arg5 ;
-(void)continueAfterAssertInFunction:(id)arg1 file:(id)arg2 lineNumber:(unsigned long long)arg3 description:(id)arg4 arguments:(char*)arg5 ;
@end


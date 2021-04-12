/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <Foundation/NSAssertionHandler.h>

@interface TSUAssertionHandler : NSAssertionHandler
+(id)currentHandler;
+(void)installAsNSHandler;
+(void)testCaseStarted:(id)arg1 ;
+(void)testCaseStopped:(id)arg1 ;
+(id)performBlockIgnoringAssertions:(/*^block*/id)arg1 ;
-(void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5 ;
-(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 ;
-(void)handleFailureWithLocation:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(char*)arg5 ;
@end


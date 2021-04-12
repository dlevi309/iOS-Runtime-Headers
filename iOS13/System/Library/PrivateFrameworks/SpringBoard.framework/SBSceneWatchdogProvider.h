/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/FBProcessWatchdogProviding.h>

@class FBApplicationProcessWatchdogPolicy, NSString;

@interface SBSceneWatchdogProvider : NSObject <FBProcessWatchdogProviding> {

	FBApplicationProcessWatchdogPolicy* _defaultProcessWatchdogProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultSceneWatchdogProvider;
-(id)init;
-(id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2 ;
-(id)_scaleProvisions:(id)arg1 byFactor:(double)arg2 ;
@end


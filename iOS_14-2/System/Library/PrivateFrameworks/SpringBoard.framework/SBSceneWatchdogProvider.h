/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/FBProcessWatchdogProviding.h>

@class FBApplicationProcessWatchdogPolicy, NSString;

@interface SBSceneWatchdogProvider : NSObject <FBProcessWatchdogProviding> {

	BOOL _watchdogDisabled;
	FBApplicationProcessWatchdogPolicy* _defaultProcessWatchdogProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)disabledSceneWatchdogProvider;
+(id)defaultSceneWatchdogProvider;
-(id)initAsDisabled:(BOOL)arg1 ;
-(id)_scaleProvisions:(id)arg1 byFactor:(double)arg2 ;
-(id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2 ;
@end


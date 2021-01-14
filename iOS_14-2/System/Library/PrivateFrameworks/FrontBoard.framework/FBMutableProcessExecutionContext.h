/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBProcessExecutionContext.h>

@class RBSProcessIdentity, NSArray, NSDictionary, NSURL;

@interface FBMutableProcessExecutionContext : FBProcessExecutionContext

@property (nonatomic,copy) RBSProcessIdentity * identity; 
@property (nonatomic,copy) NSArray * arguments; 
@property (nonatomic,copy) NSDictionary * environment; 
@property (nonatomic,retain) NSURL * standardOutputURL; 
@property (nonatomic,retain) NSURL * standardErrorURL; 
@property (assign,nonatomic) BOOL waitForDebugger; 
@property (assign,nonatomic) BOOL disableASLR; 
@property (assign,nonatomic) BOOL checkForLeaks; 
@property (assign,nonatomic) long long launchIntent; 
@property (nonatomic,retain) id<FBProcessWatchdogProviding> watchdogProvider; 
@property (assign,nonatomic) double watchdogExtension; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end


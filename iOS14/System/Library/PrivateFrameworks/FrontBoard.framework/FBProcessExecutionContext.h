/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol FBProcessWatchdogProviding;
@class RBSProcessIdentity, NSArray, NSDictionary, NSURL;

@interface FBProcessExecutionContext : NSObject <NSCopying, NSMutableCopying> {

	RBSProcessIdentity* _identity;
	NSArray* _arguments;
	NSDictionary* _environment;
	NSURL* _standardOutputURL;
	NSURL* _standardErrorURL;
	BOOL _waitForDebugger;
	BOOL _disableASLR;
	BOOL _checkForLeaks;
	long long _launchIntent;
	unsigned _launchAssertionFlags;
	id<FBProcessWatchdogProviding> _watchdogProvider;
	double _watchdogExtension;

}

@property (nonatomic,copy) NSArray * arguments;                                            //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy) NSDictionary * environment;                                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSURL * standardOutputURL;                                    //@synthesize standardOutputURL=_standardOutputURL - In the implementation block
@property (nonatomic,retain) NSURL * standardErrorURL;                                     //@synthesize standardErrorURL=_standardErrorURL - In the implementation block
@property (assign,nonatomic) BOOL waitForDebugger;                                         //@synthesize waitForDebugger=_waitForDebugger - In the implementation block
@property (assign,nonatomic) BOOL disableASLR;                                             //@synthesize disableASLR=_disableASLR - In the implementation block
@property (assign,nonatomic) BOOL checkForLeaks;                                           //@synthesize checkForLeaks=_checkForLeaks - In the implementation block
@property (assign,nonatomic) long long launchIntent;                                       //@synthesize launchIntent=_launchIntent - In the implementation block
@property (assign,nonatomic) unsigned launchAssertionFlags;                                //@synthesize launchAssertionFlags=_launchAssertionFlags - In the implementation block
@property (nonatomic,retain) id<FBProcessWatchdogProviding> watchdogProvider;              //@synthesize watchdogProvider=_watchdogProvider - In the implementation block
@property (assign,nonatomic) double watchdogExtension;                                     //@synthesize watchdogExtension=_watchdogExtension - In the implementation block
@property (nonatomic,copy) RBSProcessIdentity * identity;                                  //@synthesize identity=_identity - In the implementation block
-(id)initWithIdentity:(id)arg1 ;
-(id)_initWithExecutionContext:(id)arg1 ;
-(void)setIdentity:(RBSProcessIdentity *)arg1 ;
-(void)setLaunchAssertionFlags:(unsigned)arg1 ;
-(void)setWatchdogProvider:(id<FBProcessWatchdogProviding>)arg1 ;
-(void)setWaitForDebugger:(BOOL)arg1 ;
-(void)setWatchdogExtension:(double)arg1 ;
-(void)setArguments:(NSArray *)arg1 ;
-(void)setLaunchIntent:(long long)arg1 ;
-(RBSProcessIdentity *)identity;
-(NSURL *)standardOutputURL;
-(NSURL *)standardErrorURL;
-(BOOL)waitForDebugger;
-(double)watchdogExtension;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)checkForLeaks;
-(void)setStandardErrorURL:(NSURL *)arg1 ;
-(NSArray *)arguments;
-(long long)launchIntent;
-(id<FBProcessWatchdogProviding>)watchdogProvider;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(BOOL)disableASLR;
-(void)setDisableASLR:(BOOL)arg1 ;
-(NSDictionary *)environment;
-(void)setCheckForLeaks:(BOOL)arg1 ;
-(unsigned)_launchAssertionFlags;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStandardOutputURL:(NSURL *)arg1 ;
-(unsigned)launchAssertionFlags;
@end


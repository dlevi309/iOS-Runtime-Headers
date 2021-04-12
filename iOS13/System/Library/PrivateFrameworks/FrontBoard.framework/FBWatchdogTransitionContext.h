/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol FBProcessWatchdogProviding;
@interface FBWatchdogTransitionContext : NSObject <NSCopying, NSMutableCopying> {

	long long _watchdogBehavior;
	id<FBProcessWatchdogProviding> _watchdogProvider;
	BOOL _runIndependently;

}

@property (assign,nonatomic) BOOL runIndependently;                                        //@synthesize runIndependently=_runIndependently - In the implementation block
@property (assign,nonatomic) long long watchdogBehavior;                                   //@synthesize watchdogBehavior=_watchdogBehavior - In the implementation block
@property (nonatomic,retain) id<FBProcessWatchdogProviding> watchdogProvider;              //@synthesize watchdogProvider=_watchdogProvider - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id<FBProcessWatchdogProviding>)watchdogProvider;
-(void)setWatchdogProvider:(id<FBProcessWatchdogProviding>)arg1 ;
-(long long)watchdogBehavior;
-(void)setWatchdogBehavior:(long long)arg1 ;
-(BOOL)runIndependently;
-(void)setRunIndependently:(BOOL)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setWatchdogProvider:(id<FBProcessWatchdogProviding>)arg1 ;
-(void)setRunIndependently:(BOOL)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)watchdogBehavior;
-(BOOL)runIndependently;
-(id<FBProcessWatchdogProviding>)watchdogProvider;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWatchdogBehavior:(long long)arg1 ;
@end


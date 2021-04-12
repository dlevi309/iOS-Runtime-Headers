/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>
#import <SignpostSupport/SignpostCARenderServerFrameMetadata.h>

@class NSSet;

@interface SignpostFrameLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata> {

	unsigned _frameSeed;
	unsigned _swapId;
	unsigned long long _totalFrameCount;
	unsigned long long _lateFrameCount;
	NSSet* _contributingPids;

}

@property (nonatomic,retain) NSSet * contributingPids;                          //@synthesize contributingPids=_contributingPids - In the implementation block
@property (nonatomic,readonly) unsigned frameSeed;                              //@synthesize frameSeed=_frameSeed - In the implementation block
@property (nonatomic,readonly) unsigned swapId;                                 //@synthesize swapId=_swapId - In the implementation block
@property (nonatomic,readonly) unsigned long long totalFrameCount;              //@synthesize totalFrameCount=_totalFrameCount - In the implementation block
@property (nonatomic,readonly) unsigned long long lateFrameCount;               //@synthesize lateFrameCount=_lateFrameCount - In the implementation block
-(unsigned)frameSeed;
-(void)setContributingPids:(NSSet *)arg1 ;
-(id)initWithFrameLatencyInterval:(id)arg1 isLong:(BOOL)arg2 ;
-(NSSet *)contributingPids;
-(unsigned)swapId;
-(id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 swapID:(unsigned)arg4 frameSeed:(unsigned)arg5 totalFrameCount:(unsigned long long)arg6 lateFrameCount:(unsigned long long)arg7 ;
-(unsigned long long)totalFrameCount;
-(unsigned long long)lateFrameCount;
@end


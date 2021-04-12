/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>
#import <SignpostSupport/SignpostCARenderServerFrameMetadata.h>

@interface SignpostHIDLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata> {

	unsigned _swapId;
	unsigned _frameSeed;

}

@property (nonatomic,readonly) unsigned swapId;                 //@synthesize swapId=_swapId - In the implementation block
@property (nonatomic,readonly) unsigned frameSeed;              //@synthesize frameSeed=_frameSeed - In the implementation block
-(unsigned)frameSeed;
-(id)initWithHIDLatencyInterval:(id)arg1 ;
-(unsigned)swapId;
-(id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 swapID:(unsigned)arg4 frameSeed:(unsigned)arg5 ;
@end


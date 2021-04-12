/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)swapId;
-(unsigned)frameSeed;
-(id)initWithHIDLatencyInterval:(id)arg1 ;
-(id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 swapID:(unsigned)arg4 frameSeed:(unsigned)arg5 ;
@end


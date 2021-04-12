/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/BurstClipStylePhoto.h>

@interface BurstClipStylePhotoDissolvePop : BurstClipStylePhoto
-(double)maximumDuration;
-(double)minimumDuration;
-(double)idealDuration;
-(unsigned long long)_minimumNumberOfContainedClips;
-(unsigned long long)_idealNumberOfContainedClips;
-(id)containedClipsWithoutTransitions;
-(unsigned long long)_maximumNumberOfContainedClips;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3 ;
-(double)minimumRegularClipDuration;
-(double)minimumLastClipDuration;
-(double)idealRegularClipDuration;
-(double)idealLastClipDuration;
-(double)maximumRegularClipDuration;
-(double)maximumLastClipDuration;
-(double)clipLastClipRatio;
@end


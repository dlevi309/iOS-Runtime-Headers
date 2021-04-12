/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/BurstClipStyle.h>

@class NSString;

@interface BurstClipStylePhoto : BurstClipStyle {

	int _transitionFrameDuration;
	NSString* _transitionName;

}

@property (nonatomic,copy) NSString * transitionName;                  //@synthesize transitionName=_transitionName - In the implementation block
@property (assign,nonatomic) int transitionFrameDuration;              //@synthesize transitionFrameDuration=_transitionFrameDuration - In the implementation block
-(double)maximumDuration;
-(BOOL)isSupported;
-(NSString *)transitionName;
-(double)minimumDuration;
-(double)idealDuration;
-(void)setTransitionName:(NSString *)arg1 ;
-(unsigned long long)numberOfAvailableClips;
-(unsigned long long)_minimumNumberOfContainedClips;
-(unsigned long long)_idealNumberOfContainedClips;
-(double)idealContainedClipDuration;
-(double)maximumContainedClipDuration;
-(id)containedClipsWithoutTransitions;
-(unsigned long long)_maximumNumberOfContainedClips;
-(double)minimumContainedClipDuration;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(int)transitionFrameDuration;
-(void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3 ;
-(void)setTransitionFrameDuration:(int)arg1 ;
@end


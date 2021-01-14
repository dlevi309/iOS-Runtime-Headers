/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isSupported;
-(double)maximumDuration;
-(double)minimumDuration;
-(NSString *)transitionName;
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


/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/BurstClipStylePhoto.h>

@class UIColor;

@interface BurstStyleThreeUp : BurstClipStylePhoto {

	UIColor* _gapColor;
	UIColor* _popBackgroundColor;

}

@property (nonatomic,retain) UIColor * gapColor;                        //@synthesize gapColor=_gapColor - In the implementation block
@property (nonatomic,retain) UIColor * popBackgroundColor;              //@synthesize popBackgroundColor=_popBackgroundColor - In the implementation block
@property (assign,nonatomic) int transitionFrameDuration; 
-(double)maximumDuration;
-(UIColor *)popBackgroundColor;
-(BOOL)isSupported;
-(id)transitionName;
-(double)idealDuration;
-(UIColor *)gapColor;
-(void)setGapColor:(UIColor *)arg1 ;
-(unsigned long long)numberOfAvailableClips;
-(unsigned long long)_minimumNumberOfContainedClips;
-(unsigned long long)_idealNumberOfContainedClips;
-(double)idealContainedClipDuration;
-(double)maximumContainedClipDuration;
-(unsigned long long)numberOfPossibleClips;
-(id)containedClipsWithoutTransitions;
-(unsigned long long)_maximumNumberOfContainedClips;
-(double)minimumContainedClipDuration;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(void)setPopBackgroundColor:(UIColor *)arg1 ;
@end


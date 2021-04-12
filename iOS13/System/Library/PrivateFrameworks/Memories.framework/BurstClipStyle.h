/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class BurstClip;

@interface BurstClipStyle : NSObject {

	BurstClip* _burstClip;

}

@property (assign,nonatomic,__weak) BurstClip * burstClip;               //@synthesize burstClip=_burstClip - In the implementation block
@property (nonatomic,readonly) double minimumPhotoDuration; 
@property (nonatomic,readonly) double idealPhotoDuration; 
@property (nonatomic,readonly) double maximumPhotoDuration; 
@property (nonatomic,readonly) double minimumVideoDuration; 
@property (nonatomic,readonly) double idealVideoDuration; 
-(int)duration;
-(double)maximumDuration;
-(BOOL)isSupported;
-(double)minimumDuration;
-(int)projectFrameRate;
-(id)sourceClips;
-(double)idealDuration;
-(BurstClip *)burstClip;
-(void)turnOffKenBurnsForClips:(id)arg1 ;
-(id)containedClipsWithoutTransitions;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3 ;
-(double)minimumPhotoDuration;
-(double)idealPhotoDuration;
-(double)maximumPhotoDuration;
-(double)minimumVideoDuration;
-(double)idealVideoDuration;
-(double)projectAspectRatio;
-(void)setBurstClip:(BurstClip *)arg1 ;
@end


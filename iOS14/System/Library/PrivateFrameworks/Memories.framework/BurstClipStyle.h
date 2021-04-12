/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isSupported;
-(double)maximumDuration;
-(int)duration;
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


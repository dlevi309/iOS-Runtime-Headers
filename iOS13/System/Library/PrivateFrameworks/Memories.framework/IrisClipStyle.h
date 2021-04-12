/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class IrisClip;

@interface IrisClipStyle : NSObject {

	IrisClip* _irisClip;

}

@property (assign,nonatomic,__weak) IrisClip * irisClip;              //@synthesize irisClip=_irisClip - In the implementation block
-(int)duration;
-(double)maximumDuration;
-(double)minimumDuration;
-(int)projectFrameRate;
-(double)idealDuration;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(double)minimumPhotoDuration;
-(double)idealPhotoDuration;
-(double)maximumPhotoDuration;
-(IrisClip *)irisClip;
-(double)projectAspectRatio;
-(void)adjustGeometryOfIntroClip:(id)arg1 outroClip:(id)arg2 ;
-(void)setIrisClip:(IrisClip *)arg1 ;
-(NSRange)preferredInTransitionDurationRange;
-(NSRange)preferredOutTransitionDurationRange;
-(BOOL)buildIntro;
-(BOOL)buildOutro;
@end


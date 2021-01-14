/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class IrisClip;

@interface IrisClipStyle : NSObject {

	IrisClip* _irisClip;

}

@property (assign,nonatomic,__weak) IrisClip * irisClip;              //@synthesize irisClip=_irisClip - In the implementation block
-(double)maximumDuration;
-(int)duration;
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


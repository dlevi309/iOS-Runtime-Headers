/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class NSString;

@interface VCPClassification : NSObject {

	float _duration;
	float _sumConfidence;
	NSString* _sceneId;

}

@property (retain) NSString * sceneId;               //@synthesize sceneId=_sceneId - In the implementation block
@property (assign) float duration;                   //@synthesize duration=_duration - In the implementation block
@property (assign) float sumConfidence;              //@synthesize sumConfidence=_sumConfidence - In the implementation block
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(id)initWithSceneId:(id)arg1 withDuration:(float)arg2 withConfidence:(float)arg3 ;
-(NSString *)sceneId;
-(void)setSceneId:(NSString *)arg1 ;
-(float)sumConfidence;
-(void)setSumConfidence:(float)arg1 ;
@end


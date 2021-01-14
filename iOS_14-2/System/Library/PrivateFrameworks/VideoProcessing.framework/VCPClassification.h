/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDuration:(float)arg1 ;
-(NSString *)sceneId;
-(void)setSceneId:(NSString *)arg1 ;
-(id)initWithSceneId:(id)arg1 withDuration:(float)arg2 withConfidence:(float)arg3 ;
-(float)sumConfidence;
-(void)setSumConfidence:(float)arg1 ;
-(float)duration;
@end


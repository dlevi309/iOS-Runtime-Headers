/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPImageDescriptor, VCPVideoKeyFrame;

@interface VCPMovieHighlight : NSObject {

	BOOL _isAutoPlayable;
	BOOL _isTrimmed;
	float _score;
	float _junkScore;
	float _qualityScore;
	float _expressionScore;
	float _actionScore;
	float _voiceScore;
	float _humanActionScore;
	float _humanPoseScore;
	VCPImageDescriptor* _descriptor;
	VCPVideoKeyFrame* _keyFrame;
	CGRect _bestPlaybackCrop;
	SCD_Struct_VC7 _timerange;

}

@property (assign,nonatomic) SCD_Struct_VC7 timerange;                     //@synthesize timerange=_timerange - In the implementation block
@property (assign,nonatomic) float score;                                  //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) float junkScore;                              //@synthesize junkScore=_junkScore - In the implementation block
@property (assign,nonatomic) float qualityScore;                           //@synthesize qualityScore=_qualityScore - In the implementation block
@property (assign,nonatomic) float expressionScore;                        //@synthesize expressionScore=_expressionScore - In the implementation block
@property (assign,nonatomic) float actionScore;                            //@synthesize actionScore=_actionScore - In the implementation block
@property (assign,nonatomic) float voiceScore;                             //@synthesize voiceScore=_voiceScore - In the implementation block
@property (assign,nonatomic) float humanActionScore;                       //@synthesize humanActionScore=_humanActionScore - In the implementation block
@property (assign,nonatomic) float humanPoseScore;                         //@synthesize humanPoseScore=_humanPoseScore - In the implementation block
@property (assign,nonatomic) CGRect bestPlaybackCrop;                      //@synthesize bestPlaybackCrop=_bestPlaybackCrop - In the implementation block
@property (assign,nonatomic) BOOL isAutoPlayable;                          //@synthesize isAutoPlayable=_isAutoPlayable - In the implementation block
@property (assign,nonatomic) BOOL isTrimmed;                               //@synthesize isTrimmed=_isTrimmed - In the implementation block
@property (nonatomic,retain) VCPImageDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) VCPVideoKeyFrame * keyFrame;                  //@synthesize keyFrame=_keyFrame - In the implementation block
-(float)score;
-(void)setScore:(float)arg1 ;
-(BOOL)isTrimmed;
-(VCPImageDescriptor *)descriptor;
-(BOOL)isShort;
-(void)setDescriptor:(VCPImageDescriptor *)arg1 ;
-(void)setActionScore:(float)arg1 ;
-(float)actionScore;
-(float)qualityScore;
-(CGRect)bestPlaybackCrop;
-(BOOL)isAutoPlayable;
-(VCPVideoKeyFrame *)keyFrame;
-(void)setQualityScore:(float)arg1 ;
-(SCD_Struct_VC7)timerange;
-(float)junkScore;
-(float)expressionScore;
-(float)voiceScore;
-(float)humanActionScore;
-(float)humanPoseScore;
-(void)mergeSegment:(id)arg1 ;
-(void)copyScoresFrom:(id)arg1 ;
-(void)checkAutoPlayable;
-(void)setTimerange:(SCD_Struct_VC7)arg1 ;
-(void)setJunkScore:(float)arg1 ;
-(void)setExpressionScore:(float)arg1 ;
-(void)setVoiceScore:(float)arg1 ;
-(void)setHumanActionScore:(float)arg1 ;
-(void)setHumanPoseScore:(float)arg1 ;
-(void)setBestPlaybackCrop:(CGRect)arg1 ;
-(void)setIsAutoPlayable:(BOOL)arg1 ;
-(void)setIsTrimmed:(BOOL)arg1 ;
-(void)setKeyFrame:(VCPVideoKeyFrame *)arg1 ;
-(id)initWithTimeRange:(SCD_Struct_VC7)arg1 ;
@end


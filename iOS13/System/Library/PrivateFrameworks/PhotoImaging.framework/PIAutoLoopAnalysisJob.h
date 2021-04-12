/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <NeutrinoCore/NURenderJob.h>

@class AVAsset, NSDictionary;

@interface PIAutoLoopAnalysisJob : NURenderJob {

	AVAsset* _videoSource;
	NSDictionary* _recipe;

}

@property (nonatomic,retain) AVAsset * videoSource;              //@synthesize videoSource=_videoSource - In the implementation block
@property (nonatomic,retain) NSDictionary * recipe;              //@synthesize recipe=_recipe - In the implementation block
-(id)result;
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
-(BOOL)prepare:(out id*)arg1 ;
-(AVAsset *)videoSource;
-(void)setVideoSource:(AVAsset *)arg1 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(id)scalePolicy;
-(BOOL)wantsOutputVideo;
-(id)analysisRequest;
@end


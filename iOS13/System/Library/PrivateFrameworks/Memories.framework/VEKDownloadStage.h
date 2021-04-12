/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/VEKPipelineStage.h>

@class MiroCloudDownloader, VEKResult;

@interface VEKDownloadStage : VEKPipelineStage {

	int _downloadPolicy;
	MiroCloudDownloader* _cloudDownloader;
	VEKResult* _stageResults;

}

@property (nonatomic,retain) MiroCloudDownloader * cloudDownloader;              //@synthesize cloudDownloader=_cloudDownloader - In the implementation block
@property (nonatomic,retain) VEKResult * stageResults;                           //@synthesize stageResults=_stageResults - In the implementation block
@property (assign) int downloadPolicy;                                           //@synthesize downloadPolicy=_downloadPolicy - In the implementation block
-(void)setDownloadPolicy:(int)arg1 ;
-(int)downloadPolicy;
-(id)outputTypes;
-(id)inputTypes;
-(MiroCloudDownloader *)cloudDownloader;
-(VEKResult *)stageResults;
-(void)setStageResults:(VEKResult *)arg1 ;
-(void)_downloadAssets:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setCloudDownloader:(MiroCloudDownloader *)arg1 ;
-(BOOL)shouldCancelOnNonLocalAssets;
-(void)tellPipelineThatItShouldCancelPlease;
-(id)runStageWithInput:(id)arg1 ;
@end


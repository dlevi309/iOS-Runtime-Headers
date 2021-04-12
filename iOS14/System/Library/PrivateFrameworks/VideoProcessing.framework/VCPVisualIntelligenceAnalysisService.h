/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPTaskProcessingService;

@interface VCPVisualIntelligenceAnalysisService : NSObject {

	VCPTaskProcessingService* _service;

}
+(id)service;
-(id)init;
-(void)requestShareSheetProcessingForPixelBuffer:(CVBufferRef)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(void)requestShareSheetProcessingForAssetURL:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
@end


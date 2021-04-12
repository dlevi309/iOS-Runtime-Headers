/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoStabilizer.h>

@class NSMutableDictionary, NSArray;

@interface VCPVideoGyroStabilizer : VCPVideoStabilizer {

	NSMutableDictionary* _analysisDict;
	NSArray* _metadata;
	CGSize _cropSize;

}
-(int)convertAnalysisResult;
-(id)initWithMetadata:(id)arg1 sourceSize:(CGSize)arg2 cropRect:(CGRect)arg3 ;
-(void)storeAnalytics:(CGAffineTransform)arg1 isLivePhoto:(BOOL)arg2 ;
@end


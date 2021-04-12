/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary;

@interface VCPVideoMetaAnalyzer : NSObject

@property (nonatomic,retain,readonly) NSDictionary * publicResults; 
@property (nonatomic,retain,readonly) NSDictionary * privateResults; 
+(id)analyzerForTrackType:(id)arg1 withTransform:(CGAffineTransform)arg2 requestAnalyses:(unsigned long long)arg3 formatDescription:(opaqueCMFormatDescriptionRef)arg4 ;
-(int)finalizeAnalysis;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(NSDictionary *)publicResults;
-(NSDictionary *)privateResults;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary;

@interface VCPVideoMetaAnalyzer : NSObject

@property (nonatomic,retain,readonly) NSDictionary * publicResults; 
@property (nonatomic,retain,readonly) NSDictionary * privateResults; 
+(id)analyzerForTrackType:(id)arg1 withTransform:(CGAffineTransform)arg2 ;
-(int)finalizeAnalysis;
-(NSDictionary *)privateResults;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(NSDictionary *)publicResults;
@end


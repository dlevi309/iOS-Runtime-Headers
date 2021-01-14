/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableDictionary, NSMutableArray;

@interface VCPVideoMetaFaceAnalyzer : VCPVideoMetaAnalyzer {

	NSMutableDictionary* _activeFaces;
	CGAffineTransform _transform;
	NSMutableArray* _faceResults;

}
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(int)finalizeAnalysis;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(id)publicResults;
-(CGAffineTransform)flipTransform:(CGAffineTransform)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface VCPExifAnalyzer : NSObject {

	NSDictionary* _properties;
	unsigned long long _requestedAnalyses;
	NSMutableDictionary* _results;

}
-(CGAffineTransform)transformUprightAboutTopLeft:(unsigned)arg1 ;
-(int)addFaceResults:(id)arg1 flags:(unsigned long long*)arg2 ;
-(id)initWithProperties:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 ;
-(int)analyzeAsset:(unsigned long long*)arg1 results:(id*)arg2 ;
@end


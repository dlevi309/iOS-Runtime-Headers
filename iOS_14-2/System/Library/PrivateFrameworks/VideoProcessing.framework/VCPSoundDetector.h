/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/SNResultsObserving.h>

@class NSMutableArray, NSString;

@interface VCPSoundDetector : NSObject <SNResultsObserving> {

	NSMutableArray* _results;
	SCD_Struct_VC6 _activeStart;
	SCD_Struct_VC6 _activeEnd;
	int _length;
	float _sampleRate;
	SCD_Struct_VC6 _trackStart;
	float _activeConfidence;
	float _threshold;
	int _minDetections;
	NSString* _resultsKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)results;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
-(void)addDetectionFromTime:(const SCD_Struct_VC6*)arg1 toTime:(const SCD_Struct_VC6*)arg2 confidence:(float)arg3 ;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(id)initWithTrackStart:(SCD_Struct_VC6)arg1 threshold:(float)arg2 resultsKey:(id)arg3 ;
@end


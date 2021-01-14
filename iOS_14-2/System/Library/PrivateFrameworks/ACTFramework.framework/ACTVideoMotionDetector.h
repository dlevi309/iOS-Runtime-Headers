/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
*/

#import <ACTFramework/ACTFramework-Structs.h>
#import <ACTFramework/ACTVideoProcessor.h>

@class NSURL, NSDictionary, ACTSlowmoResults;

@interface ACTVideoMotionDetector : ACTVideoProcessor {

	NSURL* _url;
	NSDictionary* _result;
	double _startTimestamp;
	sbp_Slowmo_Projection* _projections[2];
	int _curProjIndex;
	int _frameCount;
	int _processedFrameCount;
	double _lastFrameTimestamp;
	ACTSlowmoResults* _results;
	BOOL _outputRawMarkers;
	BOOL _verbose;
	BOOL _skipSecondPass;
	BOOL _singleTimeRange;
	float _rowGradient[3264];
	float _colGradient[3264];

}

@property (readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (readonly) NSDictionary * result;              //@synthesize result=_result - In the implementation block
+(id)motionDetectorWithURL:(id)arg1 options:(id)arg2 ;
-(NSURL *)url;
-(void)processBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSDictionary *)result;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)finishProcessing;
-(void)dealloc;
-(unsigned char)calculateProjectionSignature:(_sbp_Slowmo_Projection*)arg1 buffer:(CVBufferRef)arg2 ;
-(void)gradientForSignature:(float*)arg1 gradient:(float*)arg2 count:(int)arg3 ;
-(void)startProcessing;
-(void)processVideo;
@end


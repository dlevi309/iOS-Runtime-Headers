/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@interface HMIFaceTrackerMatch : NSObject {

	unsigned long long _projectedFaceIndex;
	unsigned long long _detectedFaceIndex;
	double _score;

}

@property (readonly) unsigned long long projectedFaceIndex;              //@synthesize projectedFaceIndex=_projectedFaceIndex - In the implementation block
@property (readonly) unsigned long long detectedFaceIndex;               //@synthesize detectedFaceIndex=_detectedFaceIndex - In the implementation block
@property (readonly) double score;                                       //@synthesize score=_score - In the implementation block
-(double)score;
-(id)initWithProjectedFaceIndex:(unsigned long long)arg1 detectedFaceIndex:(unsigned long long)arg2 score:(double)arg3 ;
-(unsigned long long)projectedFaceIndex;
-(unsigned long long)detectedFaceIndex;
@end


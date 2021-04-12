/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIMotionDetection.h>

@class NSArray;

@interface HMISparseOpticalFlowMotionDetection : HMIMotionDetection {

	NSArray* _motionVectors;
	CGSize _size;

}

@property (readonly) NSArray * motionVectors;              //@synthesize motionVectors=_motionVectors - In the implementation block
@property (readonly) CGSize size;                          //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(id)classMotionScoreMap;
-(id)classPaddingMap;
-(BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4 ;
-(NSArray *)motionVectors;
-(float)scoreForSubBoundingBox:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4 ;
-(id)initWithBoundingBox:(CGRect)arg1 size:(CGSize)arg2 motionVectors:(id)arg3 ;
@end


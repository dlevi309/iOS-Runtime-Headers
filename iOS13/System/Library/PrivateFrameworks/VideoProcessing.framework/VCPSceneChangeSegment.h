/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPSceneChangeSegment : NSObject {

	unsigned long long _numOfFrames;
	SCD_Struct_VC28 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_VC28 timeRange;                   //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfFrames;              //@synthesize numOfFrames=_numOfFrames - In the implementation block
-(id)init;
-(SCD_Struct_VC28)timeRange;
-(void)mergeSegment:(id)arg1 ;
-(unsigned long long)numOfFrames;
-(void)updateSegment:(SCD_Struct_VC6)arg1 ;
-(void)resetSegment:(SCD_Struct_VC6)arg1 ;
-(void)finalizeAtTime:(SCD_Struct_VC6)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPMetaSegment : NSObject {

	unsigned long long _numOfFrames;
	SCD_Struct_VC7 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_VC7 timeRange;                    //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfFrames;              //@synthesize numOfFrames=_numOfFrames - In the implementation block
-(id)init;
-(SCD_Struct_VC7)timeRange;
-(unsigned long long)numOfFrames;
-(void)updateSegment:(SCD_Struct_VC6)arg1 ;
-(void)resetSegment:(SCD_Struct_VC6)arg1 ;
-(void)finalizeAtTime:(SCD_Struct_VC6)arg1 ;
-(void)mergeSegment:(id)arg1 ;
@end


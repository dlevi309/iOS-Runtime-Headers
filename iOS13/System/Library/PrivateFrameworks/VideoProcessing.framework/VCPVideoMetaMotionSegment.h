/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPMetaSegment.h>

@interface VCPVideoMetaMotionSegment : VCPMetaSegment {

	float _absMotion;
	float _stabilityScore;

}

@property (assign) float absMotion;                   //@synthesize absMotion=_absMotion - In the implementation block
@property (assign) float stabilityScore;              //@synthesize stabilityScore=_stabilityScore - In the implementation block
-(void)mergeSegment:(id)arg1 ;
-(void)finalizeAtTime:(SCD_Struct_VC6)arg1 ;
-(void)resetSegment:(float)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(void)updateSegment:(float)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(float)stabilityScore;
-(id)initWithAbsMotion:(float)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(float)absMotion;
-(void)setAbsMotion:(float)arg1 ;
-(void)setStabilityScore:(float)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finalizeAtTime:(SCD_Struct_VC6)arg1 ;
-(float)absMotion;
-(void)resetSegment:(float)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(void)updateSegment:(float)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(float)stabilityScore;
-(id)initWithAbsMotion:(float)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(void)setAbsMotion:(float)arg1 ;
-(void)setStabilityScore:(float)arg1 ;
-(void)mergeSegment:(id)arg1 ;
@end


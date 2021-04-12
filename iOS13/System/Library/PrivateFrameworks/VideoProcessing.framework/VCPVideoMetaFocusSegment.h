/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPMetaSegment.h>

@interface VCPVideoMetaFocusSegment : VCPMetaSegment {

	long long _focusStatus;

}

@property (assign) long long focusStatus;              //@synthesize focusStatus=_focusStatus - In the implementation block
-(void)resetSegment:(long long)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(long long)focusStatus;
-(id)initWithFocusStatus:(long long)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(void)updateSegment:(long long)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(void)setFocusStatus:(long long)arg1 ;
@end


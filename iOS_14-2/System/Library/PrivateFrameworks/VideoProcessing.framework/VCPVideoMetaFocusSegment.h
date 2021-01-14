/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class AVDepthData;

@interface JFXMediaReaderDepthData : NSObject {

	AVDepthData* _avDepthData;
	SCD_Struct_JF4 _timeRange;

}

@property (nonatomic,readonly) AVDepthData * avDepthData;              //@synthesize avDepthData=_avDepthData - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF4 timeRange;               //@synthesize timeRange=_timeRange - In the implementation block
-(SCD_Struct_JF4)timeRange;
-(AVDepthData *)avDepthData;
-(id)initWithAVDepthData:(id)arg1 timeRange:(SCD_Struct_JF4)arg2 ;
@end


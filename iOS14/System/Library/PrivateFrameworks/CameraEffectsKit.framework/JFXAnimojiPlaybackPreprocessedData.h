/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class ARFrame, AVDepthData, NSDictionary;

@interface JFXAnimojiPlaybackPreprocessedData : NSObject {

	ARFrame* _arFrame;
	AVDepthData* _avDepthData;
	NSDictionary* _animojiBlendShapes;
	SCD_Struct_JF3 _time;
	SCD_Struct_JF4 _mediaTimeRangeForData;

}

@property (nonatomic,readonly) SCD_Struct_JF3 time;                               //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) ARFrame * arFrame;                                 //@synthesize arFrame=_arFrame - In the implementation block
@property (nonatomic,readonly) AVDepthData * avDepthData;                         //@synthesize avDepthData=_avDepthData - In the implementation block
@property (nonatomic,readonly) NSDictionary * animojiBlendShapes;                 //@synthesize animojiBlendShapes=_animojiBlendShapes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF4 mediaTimeRangeForData;              //@synthesize mediaTimeRangeForData=_mediaTimeRangeForData - In the implementation block
-(SCD_Struct_JF3)time;
-(ARFrame *)arFrame;
-(AVDepthData *)avDepthData;
-(id)initForRenderTime:(SCD_Struct_JF3)arg1 usingDataFromMediaTimeRange:(SCD_Struct_JF4)arg2 arFrame:(id)arg3 avDepthData:(id)arg4 animojiBlendShapes:(id)arg5 ;
-(NSDictionary *)animojiBlendShapes;
-(SCD_Struct_JF4)mediaTimeRangeForData;
@end


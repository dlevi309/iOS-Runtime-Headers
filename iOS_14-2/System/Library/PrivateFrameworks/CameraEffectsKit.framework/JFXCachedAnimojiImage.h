/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class PVImageBuffer, NSDictionary;

@interface JFXCachedAnimojiImage : NSObject {

	PVImageBuffer* _animojiImageBuffer;
	NSDictionary* _animojiRenderAttributes;
	SCD_Struct_JF4 _mediaTimeRange;

}

@property (nonatomic,readonly) PVImageBuffer * animojiImageBuffer;                  //@synthesize animojiImageBuffer=_animojiImageBuffer - In the implementation block
@property (nonatomic,readonly) NSDictionary * animojiRenderAttributes;              //@synthesize animojiRenderAttributes=_animojiRenderAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF4 mediaTimeRange;                       //@synthesize mediaTimeRange=_mediaTimeRange - In the implementation block
-(id)description;
-(SCD_Struct_JF4)mediaTimeRange;
-(PVImageBuffer *)animojiImageBuffer;
-(NSDictionary *)animojiRenderAttributes;
-(id)initWithMediaTimeRange:(SCD_Struct_JF4)arg1 animojiRenderingAttributes:(id)arg2 animojiImageBuffer:(id)arg3 ;
@end


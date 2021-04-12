/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol OS_dispatch_queue, MTLTexture;
@class NSObject;

@interface ARImageNoiseTexture : NSObject {

	float _minSNR;
	float _maxSNR;
	float _nSteps;
	NSObject*<OS_dispatch_queue> _queue;
	float _lastSNR;
	id<MTLTexture> _texture;

}

@property (nonatomic,readonly) id<MTLTexture> texture;              //@synthesize texture=_texture - In the implementation block
+(id)sharedInstanceForCameraPosition:(long long)arg1 longEdgeImageResolution:(unsigned)arg2 ;
-(id<MTLTexture>)texture;
-(float)snrToNoiseIntensity:(float)arg1 ;
-(id)initWithNoiseModel:(int)arg1 ;
@end


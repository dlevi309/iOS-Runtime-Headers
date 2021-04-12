/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
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


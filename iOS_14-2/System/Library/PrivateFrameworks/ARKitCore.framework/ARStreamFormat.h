/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@interface ARStreamFormat : NSObject {

	unsigned _pixelFormat;
	long long _framesPerSecond;
	CGSize _imageResolution;

}

@property (nonatomic,readonly) CGSize imageResolution;                 //@synthesize imageResolution=_imageResolution - In the implementation block
@property (nonatomic,readonly) long long framesPerSecond;              //@synthesize framesPerSecond=_framesPerSecond - In the implementation block
@property (nonatomic,readonly) unsigned pixelFormat;                   //@synthesize pixelFormat=_pixelFormat - In the implementation block
-(unsigned)pixelFormat;
-(long long)framesPerSecond;
-(CGSize)imageResolution;
-(id)initWithResolution:(CGSize)arg1 framesPerSecond:(long long)arg2 pixelFormat:(unsigned)arg3 ;
@end


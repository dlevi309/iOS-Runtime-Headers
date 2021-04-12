/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JTPixelBufferPool;

@interface JTPixelRotationSession : NSObject {

	OpaqueVTImageRotationSessionRef _imageRotationSession;
	BOOL _mirror;
	unsigned _rotationDegrees;
	JTPixelBufferPool* _pixelBufferPool;

}

@property (nonatomic,retain) JTPixelBufferPool * pixelBufferPool;              //@synthesize pixelBufferPool=_pixelBufferPool - In the implementation block
@property (nonatomic,readonly) unsigned rotationDegrees;                       //@synthesize rotationDegrees=_rotationDegrees - In the implementation block
@property (nonatomic,readonly) BOOL mirror;                                    //@synthesize mirror=_mirror - In the implementation block
+(void)applyDeviceRotationCorrectionWithSession:(inout id*)arg1 toFrameSet:(inout id*)arg2 ;
-(void)dealloc;
-(JTPixelBufferPool *)pixelBufferPool;
-(unsigned)rotationDegrees;
-(id)initWithRotation:(unsigned)arg1 mirror:(BOOL)arg2 ;
-(BOOL)mirror;
-(CVBufferRef)createRotatedPixelBuffer:(CVBufferRef)arg1 ;
-(id)createRotatedFrameSet:(id)arg1 ;
-(void)JT_releaseImageRotationSession;
-(void)setPixelBufferPool:(JTPixelBufferPool *)arg1 ;
@end


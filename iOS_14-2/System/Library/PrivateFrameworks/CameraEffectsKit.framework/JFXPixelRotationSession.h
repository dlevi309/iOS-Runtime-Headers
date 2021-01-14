/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JFXPixelBufferPool;

@interface JFXPixelRotationSession : NSObject {

	OpaqueVTImageRotationSessionRef _imageRotationSession;
	BOOL _mirror;
	int _rotationCardinalAngle;
	JFXPixelBufferPool* _pixelBufferPool;

}

@property (nonatomic,retain) JFXPixelBufferPool * pixelBufferPool;              //@synthesize pixelBufferPool=_pixelBufferPool - In the implementation block
@property (nonatomic,readonly) int rotationCardinalAngle;                       //@synthesize rotationCardinalAngle=_rotationCardinalAngle - In the implementation block
@property (nonatomic,readonly) BOOL mirror;                                     //@synthesize mirror=_mirror - In the implementation block
+(void)applyDeviceRotationCorrectionWithSession:(inout id*)arg1 toFrameSet:(inout id*)arg2 ;
-(BOOL)mirror;
-(JFXPixelBufferPool *)pixelBufferPool;
-(void)setPixelBufferPool:(JFXPixelBufferPool *)arg1 ;
-(void)dealloc;
-(id)initWithRotation:(int)arg1 mirror:(BOOL)arg2 ;
-(CVBufferRef)createRotatedPixelBuffer:(CVBufferRef)arg1 ;
-(int)rotationCardinalAngle;
-(id)createRotatedFrameSet:(id)arg1 ;
-(void)JT_releaseImageRotationSession;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@interface ARImageRotationTechnique : ARTechnique {

	OpaqueVTImageRotationSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _bufferPool;
	long long _rotationAngle;
	long long _mirrorMode;

}

@property (nonatomic,readonly) long long rotationAngle;              //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (nonatomic,readonly) long long mirrorMode;                 //@synthesize mirrorMode=_mirrorMode - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(long long)rotationAngle;
-(id)processData:(id)arg1 ;
-(id)_fullDescription;
-(unsigned long long)requiredSensorDataTypes;
-(long long)mirrorMode;
-(id)initWithRotation:(long long)arg1 mirror:(long long)arg2 ;
-(int)_rotateAccelerate:(CVBufferRef)arg1 pOutputBuffer:(_CVBuffer*)arg2 ;
@end


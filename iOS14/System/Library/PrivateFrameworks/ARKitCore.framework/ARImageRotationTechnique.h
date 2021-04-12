/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>

@interface ARImageRotationTechnique : ARTechnique {

	OpaqueVTImageRotationSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _bufferPool;
	long long _rotationAngle;
	long long _mirrorMode;

}

@property (nonatomic,readonly) long long rotationAngle;              //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (nonatomic,readonly) long long mirrorMode;                 //@synthesize mirrorMode=_mirrorMode - In the implementation block
-(long long)rotationAngle;
-(id)processData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)_fullDescription;
-(unsigned long long)requiredSensorDataTypes;
-(long long)mirrorMode;
-(id)initWithRotation:(long long)arg1 mirror:(long long)arg2 ;
-(int)_rotateAccelerate:(CVBufferRef)arg1 pOutputBuffer:(_CVBuffer*)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXImageScaler : NSObject {

	BOOL _useCPU;
	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;

}
-(void)dealloc;
-(id)initForCPU:(BOOL)arg1 ;
-(void)scaleImage:(CVBufferRef)arg1 destinationImage:(CVBufferRef)arg2 ;
@end


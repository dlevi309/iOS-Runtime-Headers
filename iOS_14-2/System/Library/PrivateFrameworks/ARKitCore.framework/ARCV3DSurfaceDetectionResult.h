/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@interface ARCV3DSurfaceDetectionResult : NSObject {

	CV3DSurfaceDetectionResult* _cv3dDetectionResult;

}

@property (nonatomic,readonly) CV3DSurfaceDetectionResult* cv3dDetectionResult;              //@synthesize cv3dDetectionResult=_cv3dDetectionResult - In the implementation block
-(void)dealloc;
-(CV3DSurfaceDetectionResult*)cv3dDetectionResult;
-(id)initWithDetectionResult:(CV3DSurfaceDetectionResult*)arg1 ;
-(unsigned long long)numPlanes;
-(CV3DSurfaceDetectionPlane*)planeAtIndex:(unsigned long long)arg1 ;
@end


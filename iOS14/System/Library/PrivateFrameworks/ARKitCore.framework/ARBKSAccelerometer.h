/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@class BKSAccelerometer;

@interface ARBKSAccelerometer : NSObject {

	BKSAccelerometer* _accelerometer;

}
+(id)sharedWeakAccelerometerHandle;
+(id)sharedAccelerometerHandle;
-(long long)currentOrientation;
-(id)initPrivate;
-(void)dealloc;
@end


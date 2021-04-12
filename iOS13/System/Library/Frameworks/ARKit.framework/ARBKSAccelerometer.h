/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class BKSAccelerometer;

@interface ARBKSAccelerometer : NSObject {

	BKSAccelerometer* _accelerometer;

}
+(id)sharedWeakAccelerometerHandle;
+(id)sharedAccelerometerHandle;
-(void)dealloc;
-(long long)currentOrientation;
-(id)initPrivate;
@end


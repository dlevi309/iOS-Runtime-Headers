/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
*/


#import <iMessageApps/iMessageApps-Structs.h>
@interface IMADropTarget : NSObject {

	double _scale;
	double _meshScaleFactor;
	double _rotation;
	CGPoint _screenCoordinate;
	CGSize _initialSize;

}

@property (nonatomic,readonly) CGPoint screenCoordinate;              //@synthesize screenCoordinate=_screenCoordinate - In the implementation block
@property (nonatomic,readonly) CGSize initialSize;                    //@synthesize initialSize=_initialSize - In the implementation block
@property (nonatomic,readonly) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) double meshScaleFactor;                //@synthesize meshScaleFactor=_meshScaleFactor - In the implementation block
@property (nonatomic,readonly) double rotation;                       //@synthesize rotation=_rotation - In the implementation block
-(id)description;
-(double)scale;
-(double)rotation;
-(CGSize)initialSize;
-(double)meshScaleFactor;
-(CGPoint)screenCoordinate;
-(id)initWithScreenCoordinate:(CGPoint)arg1 initialSize:(CGSize)arg2 scale:(double)arg3 meshScaleFactor:(double)arg4 rotation:(double)arg5 ;
@end


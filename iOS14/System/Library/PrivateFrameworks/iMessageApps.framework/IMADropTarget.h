/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)rotation;
-(double)scale;
-(double)meshScaleFactor;
-(id)description;
-(CGSize)initialSize;
-(CGPoint)screenCoordinate;
-(id)initWithScreenCoordinate:(CGPoint)arg1 initialSize:(CGSize)arg2 scale:(double)arg3 meshScaleFactor:(double)arg4 rotation:(double)arg5 ;
@end


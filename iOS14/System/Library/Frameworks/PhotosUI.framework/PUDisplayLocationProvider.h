/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUDisplayLocationProvider.h>

@protocol PUDisplayLocationProvider
@required
-(CGPoint*)locationInView:(id)arg1;

@end


@protocol UICoordinateSpace;
@interface PUDisplayLocationProvider : NSObject <PUDisplayLocationProvider> {

	id<UICoordinateSpace> __coordinateSpace;
	CGPoint __point;

}

@property (nonatomic,readonly) CGPoint _point;                                      //@synthesize _point=__point - In the implementation block
@property (nonatomic,readonly) id<UICoordinateSpace> _coordinateSpace;              //@synthesize _coordinateSpace=__coordinateSpace - In the implementation block
-(CGPoint)_point;
-(id)init;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id<UICoordinateSpace>)_coordinateSpace;
@end


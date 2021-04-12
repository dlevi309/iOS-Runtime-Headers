/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UICoordinateSpace;
@class NSObject;

@interface PXCoordinatedRect : NSObject <NSCopying> {

	NSObject*<UICoordinateSpace> _coordinateSpace;
	CGRect _rect;

}

@property (nonatomic,readonly) CGRect rect;                                               //@synthesize rect=_rect - In the implementation block
@property (nonatomic,readonly) NSObject*<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
-(CGRect)rect;
-(id)init;
-(NSObject*<UICoordinateSpace>)coordinateSpace;
-(id)initWithRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(CGRect)rectInCoordinateSpace:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


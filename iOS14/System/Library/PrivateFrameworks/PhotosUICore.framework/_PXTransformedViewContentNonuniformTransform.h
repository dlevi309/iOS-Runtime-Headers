/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXNonuniformTransform.h>

@class UIView, PXNonuniformTransform;

@interface _PXTransformedViewContentNonuniformTransform : PXNonuniformTransform {

	UIView* _transformedView;
	PXNonuniformTransform* _transform;

}

@property (nonatomic,readonly) UIView * transformedView;                       //@synthesize transformedView=_transformedView - In the implementation block
@property (nonatomic,readonly) PXNonuniformTransform * transform;              //@synthesize transform=_transform - In the implementation block
-(PXNonuniformTransform *)transform;
-(UIView *)transformedView;
-(id)initWithTransformedView:(id)arg1 transform:(id)arg2 ;
-(CGAffineTransform)affineTransformForRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(id)inverseTransform;
@end


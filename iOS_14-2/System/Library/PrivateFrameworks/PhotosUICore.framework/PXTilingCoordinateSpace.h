/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXTilingCoordinateSpace : NSObject {

	PXTilingCoordinateSpace* _parentSpace;
	CGAffineTransform _transform;

}

@property (nonatomic,readonly) void* identifier; 
@property (assign,nonatomic,__weak) PXTilingCoordinateSpace * parentSpace;              //@synthesize parentSpace=_parentSpace - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                               //@synthesize transform=_transform - In the implementation block
-(id)init;
-(PXTilingCoordinateSpace *)parentSpace;
-(void)setParentSpace:(PXTilingCoordinateSpace *)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void*)identifier;
@end


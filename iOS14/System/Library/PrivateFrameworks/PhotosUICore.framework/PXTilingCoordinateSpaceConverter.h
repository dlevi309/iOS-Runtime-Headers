/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXTilingCoordinateSpaceConverter : NSObject {

	BOOL _shouldCache;

}

@property (assign,nonatomic) BOOL shouldCache;              //@synthesize shouldCache=_shouldCache - In the implementation block
+(BOOL)canConvertBetweenCoordinateSpaceIdentifier:(void*)arg1 andCoordinateSpaceIdentifier:(void*)arg2 ;
+(BOOL)_canConvertBetweenCoordinateSpace:(id)arg1 andCoordinateSpace:(id)arg2 ;
+(id)defaultConverter;
-(BOOL)shouldCache;
-(void)invalidateCache;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpaceIdentifier:(void*)arg2 toCoordinateSpaceIdentifier:(void*)arg3 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpaceIdentifier:(void*)arg2 toCoordinateSpaceIdentifier:(void*)arg3 ;
-(PXTileGeometry*)convertTileGeometry:(PXTileGeometry*)arg1 toCoordinateSpaceIdentifier:(void*)arg2 ;
-(CGAffineTransform)_transformOfCoordinateSpaceIdentifier:(void*)arg1 relativeToCoordinateSpaceIdentifier:(void*)arg2 ;
-(CGAffineTransform)_transformOfCoordinateSpace:(id)arg1 relativeToCoordinateSpace:(id)arg2 ;
-(void)setShouldCache:(BOOL)arg1 ;
@end


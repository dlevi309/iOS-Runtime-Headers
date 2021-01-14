/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface PUCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	CGPoint _parallaxOffset;
	CGPoint _edgeParallaxOffset;

}

@property (assign,nonatomic) CGPoint parallaxOffset;                  //@synthesize parallaxOffset=_parallaxOffset - In the implementation block
@property (assign,nonatomic) CGPoint edgeParallaxOffset;              //@synthesize edgeParallaxOffset=_edgeParallaxOffset - In the implementation block
-(void)setParallaxOffset:(CGPoint)arg1 ;
-(CGPoint)edgeParallaxOffset;
-(void)setEdgeParallaxOffset:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)parallaxOffset;
-(BOOL)isEqual:(id)arg1 ;
@end


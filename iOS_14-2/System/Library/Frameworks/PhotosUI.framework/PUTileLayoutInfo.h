/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PUTilingCoordinateSystem;
@class PUTileIdentifier, NSIndexPath, NSString;

@interface PUTileLayoutInfo : NSObject <NSCopying> {

	PUTileIdentifier* _tileIdentifier;
	double _alpha;
	double _zPosition;
	id<PUTilingCoordinateSystem> _coordinateSystem;
	CGPoint _center;
	CGSize _size;
	CGRect _contentsRect;
	UIEdgeInsets _hitTestOutset;
	UIEdgeInsets _expandedRectInsets;
	CGAffineTransform _transform;

}

@property (setter=_setTileIdentifier:,nonatomic,retain) PUTileIdentifier * tileIdentifier;                            //@synthesize tileIdentifier=_tileIdentifier - In the implementation block
@property (assign,setter=_setCenter:,nonatomic) CGPoint center;                                                       //@synthesize center=_center - In the implementation block
@property (assign,setter=_setSize:,nonatomic) CGSize size;                                                            //@synthesize size=_size - In the implementation block
@property (assign,setter=_setAlpha:,nonatomic) double alpha;                                                          //@synthesize alpha=_alpha - In the implementation block
@property (assign,setter=_setTransform:,nonatomic) CGAffineTransform transform;                                       //@synthesize transform=_transform - In the implementation block
@property (assign,setter=_setZPosition:,nonatomic) double zPosition;                                                  //@synthesize zPosition=_zPosition - In the implementation block
@property (setter=_setCoordinateSystem:,nonatomic,retain) id<PUTilingCoordinateSystem> coordinateSystem;              //@synthesize coordinateSystem=_coordinateSystem - In the implementation block
@property (assign,nonatomic) UIEdgeInsets expandedRectInsets;                                                         //@synthesize expandedRectInsets=_expandedRectInsets - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath; 
@property (nonatomic,readonly) NSString * tileKind; 
@property (nonatomic,readonly) NSString * dataSourceIdentifier; 
@property (nonatomic,readonly) CGRect contentsRect;                                                                   //@synthesize contentsRect=_contentsRect - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets hitTestOutset;                                                            //@synthesize hitTestOutset=_hitTestOutset - In the implementation block
@property (nonatomic,readonly) CGRect frame; 
-(id)clone;
-(NSString *)tileKind;
-(void)_setSize:(CGSize)arg1 ;
-(void)_setTransform:(CGAffineTransform)arg1 ;
-(id)layoutInfoWithAlpha:(double)arg1 ;
-(CGRect)contentsRect;
-(CGPoint)center;
-(id)layoutInfoWithCoordinateSystem:(id)arg1 ;
-(id)init;
-(NSIndexPath *)indexPath;
-(double)alpha;
-(CGSize)size;
-(CGRect)frame;
-(NSString *)dataSourceIdentifier;
-(UIEdgeInsets)expandedRectInsets;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(CGRect)arg7 coordinateSystem:(id)arg8 ;
-(CGAffineTransform)transform;
-(id)layoutInfoWithCenter:(CGPoint)arg1 size:(CGSize)arg2 alpha:(double)arg3 transform:(CGAffineTransform)arg4 zPosition:(double)arg5 coordinateSystem:(id)arg6 ;
-(id<PUTilingCoordinateSystem>)coordinateSystem;
-(void)_setCoordinateSystem:(id)arg1 ;
-(id)description;
-(UIEdgeInsets)hitTestOutset;
-(void)_setTileIdentifier:(id)arg1 ;
-(id)layoutInfoWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3 ;
-(unsigned long long)hash;
-(void)_setCenter:(CGPoint)arg1 ;
-(void)setExpandedRectInsets:(UIEdgeInsets)arg1 ;
-(id)layoutInfoWithCenter:(CGPoint)arg1 size:(CGSize)arg2 transform:(CGAffineTransform)arg3 ;
-(id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg1 mixFactor:(double)arg2 coordinateSystem:(id)arg3 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 ;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg1 ;
-(UIEdgeInsets)cropInsets;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(CGRect)arg7 hitTestOutset:(UIEdgeInsets)arg8 coordinateSystem:(id)arg9 ;
-(void)_setZPosition:(double)arg1 ;
-(void)_setAlpha:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)parallaxOffset;
-(id)layoutInfoWithZPosition:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)zPosition;
-(PUTileIdentifier *)tileIdentifier;
@end


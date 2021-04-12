/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXGridLayoutMetrics : PXLayoutMetrics {

	BOOL _displaysHeaderTile;
	long long _axis;
	unsigned long long _additionalTileCount;
	CGSize _itemSize;
	CGSize _interItemSpacing;
	CGSize _headerSize;
	CGSize _headerSpacing;
	CGSize _footerSize;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) long long axis;                                      //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                     //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) CGSize interItemSpacing;                             //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) BOOL displaysHeaderTile;                             //@synthesize displaysHeaderTile=_displaysHeaderTile - In the implementation block
@property (assign,nonatomic) CGSize headerSize;                                   //@synthesize headerSize=_headerSize - In the implementation block
@property (assign,nonatomic) CGSize headerSpacing;                                //@synthesize headerSpacing=_headerSpacing - In the implementation block
@property (assign,nonatomic) CGSize footerSize;                                   //@synthesize footerSize=_footerSize - In the implementation block
@property (assign,nonatomic) unsigned long long additionalTileCount;              //@synthesize additionalTileCount=_additionalTileCount - In the implementation block
-(CGSize)interItemSpacing;
-(void)setAxis:(long long)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(long long)axis;
-(CGSize)itemSize;
-(void)setInterItemSpacing:(CGSize)arg1 ;
-(UIEdgeInsets)contentInsets;
-(CGSize)headerSize;
-(CGSize)footerSize;
-(BOOL)displaysHeaderTile;
-(void)setDisplaysHeaderTile:(BOOL)arg1 ;
-(CGSize)headerSpacing;
-(void)setHeaderSpacing:(CGSize)arg1 ;
-(unsigned long long)additionalTileCount;
-(void)setAdditionalTileCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(void)setHeaderSize:(CGSize)arg1 ;
-(void)setFooterSize:(CGSize)arg1 ;
@end


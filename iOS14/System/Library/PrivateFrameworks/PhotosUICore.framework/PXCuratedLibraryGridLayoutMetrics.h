/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXCuratedLibraryGridLayoutMetrics : PXLayoutMetrics {

	long long _numberOfColumns;
	double _itemAspectRatio;
	double _headerAspectRatio;
	double _screenScale;
	double _interitemSpacing;
	long long _style;
	long long _numberOfPrecedingAssets;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) long long numberOfColumns;                      //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double itemAspectRatio;                         //@synthesize itemAspectRatio=_itemAspectRatio - In the implementation block
@property (assign,nonatomic) double headerAspectRatio;                       //@synthesize headerAspectRatio=_headerAspectRatio - In the implementation block
@property (assign,nonatomic) double screenScale;                             //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                        //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) long long style;                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long numberOfPrecedingAssets;              //@synthesize numberOfPrecedingAssets=_numberOfPrecedingAssets - In the implementation block
-(void)setNumberOfColumns:(long long)arg1 ;
-(void)setNumberOfPrecedingAssets:(long long)arg1 ;
-(long long)numberOfPrecedingAssets;
-(double)headerAspectRatio;
-(void)setHeaderAspectRatio:(double)arg1 ;
-(void)setItemAspectRatio:(double)arg1 ;
-(id)init;
-(double)interitemSpacing;
-(long long)numberOfColumns;
-(double)itemAspectRatio;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setScreenScale:(double)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setInteritemSpacing:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)screenScale;
-(long long)style;
@end


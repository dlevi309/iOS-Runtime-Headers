/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@interface HUMosaicLayoutGeometry : NSObject {

	BOOL _isPortrait;
	double _cellSize;
	double _cellSpacing;
	HUGridSize _gridSize;

}

@property (assign,nonatomic) HUGridSize gridSize;              //@synthesize gridSize=_gridSize - In the implementation block
@property (assign,nonatomic) double cellSize;                  //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) double cellSpacing;               //@synthesize cellSpacing=_cellSpacing - In the implementation block
@property (assign,nonatomic) BOOL isPortrait;                  //@synthesize isPortrait=_isPortrait - In the implementation block
-(BOOL)isPortrait;
-(void)setGridSize:(HUGridSize)arg1 ;
-(double)cellSpacing;
-(double)cellSize;
-(void)setCellSize:(double)arg1 ;
-(HUGridSize)gridSize;
-(void)setIsPortrait:(BOOL)arg1 ;
-(void)setCellSpacing:(double)arg1 ;
@end


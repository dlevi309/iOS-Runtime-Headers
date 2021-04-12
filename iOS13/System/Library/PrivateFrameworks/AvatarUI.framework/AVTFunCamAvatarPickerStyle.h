/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


#import <AvatarUI/AvatarUI-Structs.h>
@interface AVTFunCamAvatarPickerStyle : NSObject {

	double _interitemSpacing;
	CGSize _cellSize;
	CGSize _engagedCellSize;
	UIEdgeInsets _gridEdgeInsets;

}

@property (assign,nonatomic) CGSize cellSize;                          //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) CGSize engagedCellSize;                   //@synthesize engagedCellSize=_engagedCellSize - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                  //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gridEdgeInsets;              //@synthesize gridEdgeInsets=_gridEdgeInsets - In the implementation block
+(/*^block*/id)insetProviderForConstant:(double)arg1 ;
+(id)defaultLayoutStyle;
-(CGSize)cellSize;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setCellSize:(CGSize)arg1 ;
-(double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2 ;
-(CGSize)engagedCellSize;
-(/*^block*/id)imageItemInsetsForGrid;
-(/*^block*/id)imageItemInsetsForList;
-(UIEdgeInsets)gridEdgeInsets;
-(id)initWithCellSize:(CGSize)arg1 engagedCellSize:(CGSize)arg2 interitemSpacing:(double)arg3 gridEdgeInsets:(UIEdgeInsets)arg4 ;
-(void)setEngagedCellSize:(CGSize)arg1 ;
-(void)setGridEdgeInsets:(UIEdgeInsets)arg1 ;
@end


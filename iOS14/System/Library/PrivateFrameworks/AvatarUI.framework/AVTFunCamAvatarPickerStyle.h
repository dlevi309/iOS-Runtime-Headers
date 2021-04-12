/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(/*^block*/id)imageItemInsetsForGrid;
-(/*^block*/id)imageItemInsetsForList;
-(UIEdgeInsets)gridEdgeInsets;
-(double)interitemSpacing;
-(CGSize)cellSize;
-(void)setCellSize:(CGSize)arg1 ;
-(id)initWithCellSize:(CGSize)arg1 engagedCellSize:(CGSize)arg2 interitemSpacing:(double)arg3 gridEdgeInsets:(UIEdgeInsets)arg4 ;
-(void)setEngagedCellSize:(CGSize)arg1 ;
-(void)setGridEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2 ;
-(void)setInteritemSpacing:(double)arg1 ;
-(CGSize)engagedCellSize;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, UICollectionViewFlowLayout;

@interface _UIFlowLayoutInfo : NSObject {

	BOOL _useFloatingHeaderFooter;
	CGRect _visibleBounds;
	CGSize _layoutSize;
	BOOL _isValid;
	CGSize _computedEstimatedSum;
	long long _computedEstimatedCount;
	BOOL _usesFloatingHeaderFooter;
	BOOL _horizontal;
	BOOL _leftToRight;
	BOOL _estimatesSizes;
	NSMutableArray* _sections;
	double _dimension;
	UICollectionViewFlowLayout* _layout;
	SCD_Struct_UI40 _rowAlignmentOptions;
	CGSize _contentSize;

}

@property (nonatomic,readonly) NSMutableArray * sections;                             //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL usesFloatingHeaderFooter;                           //@synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter - In the implementation block
@property (assign,nonatomic) double dimension;                                        //@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic) BOOL horizontal;                                         //@synthesize horizontal=_horizontal - In the implementation block
@property (assign,nonatomic) BOOL leftToRight;                                        //@synthesize leftToRight=_leftToRight - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                      //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI40 rowAlignmentOptions;                     //@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewFlowLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL estimatesSizes;                                     //@synthesize estimatesSizes=_estimatesSizes - In the implementation block
@property (nonatomic,readonly) CGSize computedEstimatedSize; 
-(id)init;
-(id)copy;
-(void)invalidate:(BOOL)arg1 ;
-(double)dimension;
-(CGSize)contentSize;
-(UICollectionViewFlowLayout *)layout;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(id)snapshot;
-(void)setDimension:(double)arg1 ;
-(BOOL)estimatesSizes;
-(void)setEstimatesSizes:(BOOL)arg1 ;
-(NSMutableArray *)sections;
-(id)specifiedItemSizes;
-(BOOL)horizontal;
-(SCD_Struct_UI40)rowAlignmentOptions;
-(id)setSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 ;
-(CGSize)computedEstimatedSize;
-(void)setLeftToRight:(BOOL)arg1 ;
-(void)setHorizontal:(BOOL)arg1 ;
-(id)addSection;
-(void)setRowAlignmentOptions:(SCD_Struct_UI40)arg1 ;
-(BOOL)leftToRight;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)setSizes:(id)arg1 forItemsAtIndexPaths:(id)arg2 ;
-(void)didUpdateSizeForSection:(long long)arg1 withDelta:(double)arg2 ;
-(id)invalidatedIndexPaths;
-(void)updateEstimatedSizeForSize:(CGSize)arg1 ;
-(BOOL)usesFloatingHeaderFooter;
-(void)setUsesFloatingHeaderFooter:(BOOL)arg1 ;
@end


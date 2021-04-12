/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_UI46 _rowAlignmentOptions;
	CGSize _contentSize;

}

@property (nonatomic,readonly) NSMutableArray * sections;                             //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL usesFloatingHeaderFooter;                           //@synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter - In the implementation block
@property (assign,nonatomic) double dimension;                                        //@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic) BOOL horizontal;                                         //@synthesize horizontal=_horizontal - In the implementation block
@property (assign,nonatomic) BOOL leftToRight;                                        //@synthesize leftToRight=_leftToRight - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                      //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI46 rowAlignmentOptions;                     //@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewFlowLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL estimatesSizes;                                     //@synthesize estimatesSizes=_estimatesSizes - In the implementation block
@property (nonatomic,readonly) CGSize computedEstimatedSize; 
-(id)snapshot;
-(void)setEstimatesSizes:(BOOL)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(BOOL)estimatesSizes;
-(void)invalidate:(BOOL)arg1 ;
-(double)dimension;
-(SCD_Struct_UI46)rowAlignmentOptions;
-(id)invalidatedIndexPaths;
-(void)didUpdateSizeForSection:(long long)arg1 withDelta:(double)arg2 ;
-(id)init;
-(id)setSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)setUsesFloatingHeaderFooter:(BOOL)arg1 ;
-(void)setHorizontal:(BOOL)arg1 ;
-(BOOL)horizontal;
-(CGSize)contentSize;
-(NSMutableArray *)sections;
-(void)updateEstimatedSizeForSize:(CGSize)arg1 ;
-(BOOL)usesFloatingHeaderFooter;
-(void)setRowAlignmentOptions:(SCD_Struct_UI46)arg1 ;
-(void)setSizes:(id)arg1 forItemsAtIndexPaths:(id)arg2 ;
-(id)copy;
-(void)setLeftToRight:(BOOL)arg1 ;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(id)specifiedItemSizes;
-(id)addSection;
-(void)setDimension:(double)arg1 ;
-(CGSize)computedEstimatedSize;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(BOOL)leftToRight;
-(UICollectionViewFlowLayout *)layout;
@end


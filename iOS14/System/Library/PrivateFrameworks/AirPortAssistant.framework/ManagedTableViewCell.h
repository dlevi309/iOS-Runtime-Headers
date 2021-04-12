/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class TableViewManager, NSMutableDictionary, NSIndexPath;

@interface ManagedTableViewCell : UITableViewCell {

	TableViewManager* _parentTableManager;
	NSMutableDictionary* _cellDict;
	NSIndexPath* _currentIndexPath;
	double _cellXEdgeInset;
	double _neededContentHeight;
	double _computedRightmostEditTextInset;
	double _forcedRightmostEditTextInset;
	CGRect _modifiedContentViewFrame;

}

@property (assign,nonatomic) TableViewManager * parentTableManager;                //@synthesize parentTableManager=_parentTableManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cellDict;                       //@synthesize cellDict=_cellDict - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentIndexPath;                       //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
@property (nonatomic,readonly) double neededContentHeight;                         //@synthesize neededContentHeight=_neededContentHeight - In the implementation block
@property (nonatomic,readonly) double computedRightmostEditTextInset;              //@synthesize computedRightmostEditTextInset=_computedRightmostEditTextInset - In the implementation block
@property (assign,nonatomic) double forcedRightmostEditTextInset;                  //@synthesize forcedRightmostEditTextInset=_forcedRightmostEditTextInset - In the implementation block
-(double)verticalInset;
-(NSIndexPath *)currentIndexPath;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)accessibilityValue;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)setParentTableManager:(TableViewManager *)arg1 ;
-(void)setForcedRightmostEditTextInset:(double)arg1 ;
-(void)setCellDict:(NSMutableDictionary *)arg1 ;
-(double)neededContentHeight;
-(double)computedRightmostEditTextInset;
-(TableViewManager *)parentTableManager;
-(NSMutableDictionary *)cellDict;
-(double)edgeInsetValue:(id)arg1 ;
-(double)rightInsetForView:(id)arg1 withItem:(id)arg2 ;
-(double)usableContentWidthForItem:(id)arg1 withVerticalNeighborView:(id)arg2 ;
-(double)usableContentWidth;
-(double)leftInsetForView:(id)arg1 withItem:(id)arg2 ;
-(double)horizontalSpacingForView:(id)arg1 withItem:(id)arg2 ;
-(double)verticalSpacingForView:(id)arg1 withItem:(id)arg2 ;
-(double)calculateFrameSizeForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned long long)arg3 withRemainingContentWidth:(double)arg4 ;
-(void)calculatePositionForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned long long)arg3 ;
-(void)repositionView:(id)arg1 ifOverlapsPreviousView:(id)arg2 ;
-(double)forcedRightmostEditTextInset;
@end


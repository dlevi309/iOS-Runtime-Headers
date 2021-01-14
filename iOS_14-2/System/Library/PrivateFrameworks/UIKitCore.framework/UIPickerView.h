/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPickerViewScrollTesting.h>
#import <UIKit/UIPickerTableViewContainerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UIPickerViewDataSource, UIPickerViewDelegate;
@class NSMutableArray, UIView, CALayer, UIColor, _UIPickerViewTestParameters, UISelectionFeedbackGenerator, NSString;

@interface UIPickerView : UIView <UIPickerViewScrollTesting, UIPickerTableViewContainerDelegate, UITableViewDelegate, UITableViewDataSource, NSCoding> {

	NSMutableArray* _tables;
	id<UIPickerViewDataSource> _dataSource;
	id<UIPickerViewDelegate> _delegate;
	long long _numberOfComponents;
	UIView* _foregroundView;
	CALayer* _maskGradientLayer;
	UIView* _topLineOrFillView;
	UIView* _bottomLineView;
	struct {
		unsigned needsLayout : 1;
		unsigned delegateRespondsToNumberOfComponentsInPickerView : 1;
		unsigned delegateRespondsToNumberOfRowsInComponent : 1;
		unsigned delegateRespondsToDidSelectRow : 1;
		unsigned delegateRespondsToViewForRow : 1;
		unsigned delegateRespondsToTitleForRow : 1;
		unsigned delegateRespondsToAttributedTitleForRow : 1;
		unsigned delegateRespondsToWidthForComponent : 1;
		unsigned delegateRespondsToRowHeightForComponent : 1;
		unsigned showsSelectionBar : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowSelectingCells : 1;
		unsigned soundsDisabled : 1;
		unsigned usesCheckedSelection : 1;
		unsigned skipsBackground : 1;
		unsigned isInLayoutSubviews : 1;
		unsigned usesDynamicRowHeight : 1;
	}  _pickerViewFlags;
	UIColor* _textColor;
	UIColor* _textShadowColor;
	_UIPickerViewTestParameters* _currentTestParameters;
	BOOL _magnifierEnabled;
	BOOL _enabled;
	long long _magnifierStyle;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	UIColor* _magnifierLineColor;

}

@property (assign,setter=_setEnabled:,getter=_enabled,nonatomic) BOOL enabled;                                                                                                 //@synthesize enabled=_enabled - In the implementation block
@property (assign,setter=_setMagnifierStyle:,getter=_magnifierStyle,nonatomic) long long magnifierStyle;                                                                       //@synthesize magnifierStyle=_magnifierStyle - In the implementation block
@property (assign,setter=_setMagnifierEnabled:,nonatomic) BOOL _magnifierEnabled;                                                                                              //@synthesize magnifierEnabled=_magnifierEnabled - In the implementation block
@property (setter=_setSelectionFeedbackGenerator:,getter=_selectionFeedbackGenerator,nonatomic,retain) UISelectionFeedbackGenerator * selectionFeedbackGenerator;              //@synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator - In the implementation block
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (setter=_setMagnifierLineColor:,getter=_magnifierLineColor,nonatomic,retain) UIColor * magnifierLineColor;                                                           //@synthesize magnifierLineColor=_magnifierLineColor - In the implementation block
@property (setter=_setUsesDynamicRowHeight:,getter=_usesDynamicRowHeight) BOOL usesDynamicRowHeight; 
@property (assign,nonatomic,__weak) id<UIPickerViewDataSource> dataSource;                                                                                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<UIPickerViewDelegate> delegate;                                                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsSelectionIndicator; 
@property (nonatomic,readonly) long long numberOfComponents;                                                                                                                   //@synthesize numberOfComponents=_numberOfComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(CGSize)defaultSizeForMainScreenTraits;
+(CGSize)sizeForMainScreenTraitsThatFits:(CGSize)arg1 ;
+(CGSize)defaultSizeForCurrentOrientation;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
+(CGSize)sizeThatFits:(CGSize)arg1 forTraits:(id)arg2 ;
+(CGSize)defaultSizeForTraits:(id)arg1 ;
-(void)_UIAppearance_setMagnifierLineColor:(id)arg1 ;
-(void)_UIAppearance_setTextColor:(id)arg1 ;
-(BOOL)_enabled;
-(id)_textColor;
-(BOOL)allowsMultipleSelection;
-(void)_setTextColor:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(BOOL)_usesCheckSelection;
-(id<UIPickerViewDelegate>)delegate;
-(id)_systemDefaultFocusGroupDescriptor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_contentView;
-(id<UIPickerViewDataSource>)dataSource;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)isAccessibilityElementByDefault;
-(void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(BOOL)arg3 ;
-(BOOL)_soundsEnabled;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)defaultSize;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)_setEnabled:(BOOL)arg1 ;
-(long long)numberOfColumns;
-(void)setDelegate:(id<UIPickerViewDelegate>)arg1 ;
-(void)setDataSource:(id<UIPickerViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setDrawsBackground:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4 ;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(void)reload;
-(void)reloadAllComponents;
-(long long)numberOfComponents;
-(void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_setMagnifierEnabled:(BOOL)arg1 ;
-(void)_setUsesCheckedSelection:(BOOL)arg1 ;
-(long long)numberOfRowsInComponent:(long long)arg1 ;
-(CGSize)_contentSizeForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(void)setSoundsEnabled:(BOOL)arg1 ;
-(long long)selectedRowInComponent:(long long)arg1 ;
-(id)tableViewForColumn:(long long)arg1 ;
-(id)viewForRow:(long long)arg1 forComponent:(long long)arg2 ;
-(id)pickerImageNamePrefix;
-(id)_orientationImageSuffix;
-(void)reloadAllPickerPieces;
-(double)scrollAnimationDuration;
-(void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4 ;
-(void)reloadComponent:(long long)arg1 ;
-(CGRect)_effectiveTableViewFrameForColumn:(long long)arg1 ;
-(BOOL)_drawsBackground;
-(double)_tableRowHeight;
-(NSRange)visibleRowsForColumn:(int)arg1 ;
-(void)_resetSelectionOfTables;
-(id)_popoverSuffix;
-(BOOL)_magnifierEnabled;
-(void)_sendSelectionChangedFromTable:(id)arg1 notify:(BOOL)arg2 ;
-(CATransform3D)_perspectiveTransform;
-(void)_willPlayClickSound;
-(id)_selectionFeedbackGenerator;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_usesCheckedSelection;
-(double)_wheelShift;
-(BOOL)_usesDynamicRowHeight;
-(double)_rowHeightForDefaultFont;
-(BOOL)_isLandscapeOrientation;
-(long long)_magnifierStyle;
-(void)_updateSelectedRows;
-(void)_setColumnView:(id)arg1 enabled:(BOOL)arg2 ;
-(id)_selectionBarSuffix;
-(long long)_delegateNumberOfComponents;
-(long long)columnForTableView:(id)arg1 ;
-(void)_setMagnifierStyle:(long long)arg1 ;
-(double)_delegateRowHeightForComponent:(long long)arg1 ;
-(void)_addMagnifierLinesForRowHeight:(double)arg1 ;
-(double)_delegateWidthForComponent:(long long)arg1 ofCount:(int)arg2 withSizeLeft:(double)arg3 ;
-(id)_createColumnWithTableFrame:(CGRect)arg1 rowHeight:(double)arg2 ;
-(CGRect)_selectionBarRectForHeight:(double)arg1 ;
-(void)_addHighlightRectForRowHeight:(double)arg1 ;
-(long long)_delegateNumberOfRowsInComponent:(long long)arg1 ;
-(void)_updateWithOldSize:(CGSize)arg1 newSize:(CGSize)arg2 ;
-(void)_noteScrollingFinishedForComponent:(long long)arg1 ;
-(void)_sendSelectionChangedForComponent:(long long)arg1 notify:(BOOL)arg2 ;
-(void)_setUsesDynamicRowHeight:(BOOL)arg1 ;
-(BOOL)_forceTextAlignmentCentered;
-(id)_delegateTitleForRow:(long long)arg1 forComponent:(long long)arg2 ;
-(id)_delegateAttributedTitleForRow:(long long)arg1 forComponent:(long long)arg2 ;
-(void)reloadDataForColumn:(int)arg1 ;
-(id)_scalarStatisticsForUserValueChangedEvent;
-(id)imageForPickerPiece:(long long)arg1 ;
-(id)_createTableWithFrame:(CGRect)arg1 forComponent:(long long)arg2 ;
-(CGSize)rowSizeForComponent:(long long)arg1 ;
-(long long)numberOfRowsInColumn:(long long)arg1 ;
-(void)setShowsSelectionIndicator:(BOOL)arg1 ;
-(BOOL)showsSelectionIndicator;
-(int)selectedRowForColumn:(int)arg1 ;
-(void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(BOOL)arg3 ;
-(void)_setSelectionFeedbackGenerator:(id)arg1 ;
-(void)_iterateOnCurrentTest;
-(void)_completeCurrentTest;
-(id)_highlightColor;
-(CGSize)_sizeThatFits:(CGSize)arg1 ;
-(id)_textShadowColor;
-(BOOL)_needsLayout;
-(void)_setMagnifierLineColor:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)_canHostViewControllerContentScrollView;
-(void)_setTextShadowColor:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setNeedsLayout;
-(void)dealloc;
-(void)_setHighlightColor:(id)arg1 ;
-(id)_magnifierLineColor;
@end


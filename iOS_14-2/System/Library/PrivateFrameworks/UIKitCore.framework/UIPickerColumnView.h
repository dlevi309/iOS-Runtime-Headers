/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPickerTableViewContainerDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UIPickerTableView, UIView, UIPickerView, UIColor, NSString;

@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource> {

	UIPickerTableView* _topTable;
	UIPickerTableView* _middleTable;
	UIPickerTableView* _bottomTable;
	UIView* _topContainerView;
	UIView* _middleContainerView;
	UIView* _bottomContainerView;
	double _middleBarHeight;
	double _rowHeight;
	UIPickerView* _pickerView;
	CGRect _tableFrame;
	CATransform3D _perspectiveTransform;
	BOOL _isNoLongerInUse;
	UIColor* __textColor;
	double _leftHitTestExtension;
	double _rightHitTestExtension;

}

@property (assign,nonatomic) BOOL isNoLongerInUse;                                                      //@synthesize isNoLongerInUse=_isNoLongerInUse - In the implementation block
@property (assign,nonatomic) CGRect selectionBarRect; 
@property (nonatomic,readonly) long long selectionBarRow; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * _textColor;              //@synthesize _textColor=__textColor - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                          //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) CATransform3D perspectiveTransform;                                        //@synthesize perspectiveTransform=_perspectiveTransform - In the implementation block
@property (assign,nonatomic) double leftHitTestExtension;                                               //@synthesize leftHitTestExtension=_leftHitTestExtension - In the implementation block
@property (assign,nonatomic) double rightHitTestExtension;                                              //@synthesize rightHitTestExtension=_rightHitTestExtension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginUpdates;
-(BOOL)canBecomeFocused;
-(UIColor *)_textColor;
-(void)endUpdates;
-(id)cellForRowAtIndexPath:(id)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(void)_moveTableViewIfNecessary:(id)arg1 toContentOffset:(CGPoint)arg2 ;
-(NSRange)_visibleGlobalRows;
-(BOOL)_usesCheckSelection;
-(void)setPerspectiveTransform:(CATransform3D)arg1 ;
-(void)setRowHeight:(double)arg1 ;
-(id)_createContainerViewWithFrame:(CGRect)arg1 ;
-(double)_horizontalBiasForEndTables;
-(id)_systemDefaultFocusGroupDescriptor;
-(void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3 ;
-(double)leftHitTestExtension;
-(CGRect)_tableFrame;
-(void)_pickerTableViewDidChangeContentOffset:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)_viewToAddFocusLayer;
-(void)setLeftHitTestExtension:(double)arg1 ;
-(void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(BOOL)arg3 ;
-(BOOL)_soundsEnabled;
-(BOOL)isRowChecked:(long long)arg1 ;
-(void)setSelectionBarRect:(CGRect)arg1 ;
-(id)_createTableViewWithFrame:(CGRect)arg1 containingFrame:(CGRect)arg2 ;
-(double)rowHeight;
-(void)reloadData;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(BOOL)selectRow:(long long)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 updateChecked:(BOOL)arg4 ;
-(CATransform3D)perspectiveTransform;
-(id)_allVisibleCells;
-(id)_visibleCellClosestToPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(CGRect)accessibilityFrame;
-(CGRect)selectionBarRect;
-(CATransform3D)_transformForTableWithTranslationX:(double)arg1 ;
-(void)setIsNoLongerInUse:(BOOL)arg1 ;
-(CATransform3D)_transformForTableWithPerspectiveTranslationX:(double)arg1 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(CGRect)_defaultFocusRegionFrame;
-(void)_centerTableInContainer:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 tableFrame:(CGRect)arg2 middleBarHeight:(double)arg3 rowHeight:(double)arg4 pickerView:(id)arg5 transform:(CATransform3D)arg6 ;
-(id)_preferredTable;
-(long long)selectionBarRow;
-(BOOL)_pointLiesWithinEffectiveTableBounds:(CGPoint)arg1 ;
-(void)setRightHitTestExtension:(double)arg1 ;
-(double)rightHitTestExtension;
-(BOOL)isNoLongerInUse;
-(BOOL)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(BOOL)arg2 ;
-(id)accessibilityPath;
-(BOOL)selectRow:(long long)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(BOOL)_containsTable:(id)arg1 ;
-(void)markAsNoLongerInUse;
@end


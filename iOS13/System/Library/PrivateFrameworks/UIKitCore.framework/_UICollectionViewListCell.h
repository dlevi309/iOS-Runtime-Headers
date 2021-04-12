/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIEditable.h>
#import <UIKitCore/_UICollectionViewListCellReorderControlDelegate.h>

@protocol UITableConstants;
@class _UICollectionViewListCellVisualProvider, NSMutableDictionary, UICellAccessoryManager, NSString;

@interface _UICollectionViewListCell : UICollectionViewCell <UIEditable, _UICollectionViewListCellReorderControlDelegate> {

	struct {
		unsigned needsUpdateAccessories : 1;
		unsigned usesCustomBackgroundView : 1;
		unsigned usesCustomSelectedBackgroundView : 1;
		unsigned usesCustomBackgroundColor : 1;
		unsigned isEditing : 1;
	}  _tableCellFlags;
	_UICollectionViewListCellVisualProvider* _visualProvider;
	NSMutableDictionary* _accessoryData;
	UIEdgeInsets _contentViewInset;
	long long _selectionStyle;
	id<UITableConstants> _constants;
	UICellAccessoryManager* _accessoryManager;

}

@property (getter=_constants,nonatomic,readonly) id<UITableConstants> constants;                                //@synthesize constants=_constants - In the implementation block
@property (getter=_accessoryManager,nonatomic,readonly) UICellAccessoryManager * accessoryManager;              //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (assign,nonatomic) long long selectionStyle;                                                          //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canBeEdited; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
+(id)_createVisualProviderForCell:(id)arg1 ;
-(id)_table;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)backgroundView;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(void)didMoveToSuperview;
-(void)setBackgroundView:(id)arg1 ;
-(BOOL)isEditing;
-(void)_updateConstants;
-(id)_constants;
-(void)setSelectedBackgroundView:(id)arg1 ;
-(long long)_defaultFocusStyle;
-(void)_layoutAccessories;
-(void)_updateAccessoriesIfNeeded;
-(void)_constantsDidChange;
-(id)_preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(long long)selectionStyle;
-(id)_defaultBackgroundView:(BOOL)arg1 ;
-(id)selectedBackgroundView;
-(long long)accessoryTypeForAxis:(long long)arg1 ;
-(id)accessoryViewForAxis:(long long)arg1 ;
-(id)_accessoriesForType:(long long)arg1 view:(id)arg2 editing:(BOOL)arg3 ;
-(id)_accessoryViewForType:(long long)arg1 ;
-(id)_accessoryForRawAxis:(long long)arg1 ;
-(void)_setAccessory:(id)arg1 forRawAxis:(long long)arg2 ;
-(void)_setNeedsUpdateAccessories;
-(BOOL)canBeEdited;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)_reorderControlShouldBeginReordering:(id)arg1 ;
-(void)_reorderControlDidBeginReordering:(id)arg1 ;
-(void)_reorderControl:(id)arg1 didMoveToPoint:(CGPoint)arg2 ;
-(void)_reorderControlDidEndReordering:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(BOOL)_canFocusProgrammatically;
-(void)_configureFocusedFloatingContentView:(id)arg1 ;
-(void)setAccessoryType:(long long)arg1 forAxis:(long long)arg2 ;
-(void)setAccessoryView:(id)arg1 forAxis:(long long)arg2 ;
-(UIEdgeInsets)_contentViewInset;
-(double)_defaultTrailingCellMarginWidth;
-(long long)_cellStyle;
-(id)_editingControlTintColorForStyle:(long long)arg1 ;
-(id)_accessoryManager;
@end


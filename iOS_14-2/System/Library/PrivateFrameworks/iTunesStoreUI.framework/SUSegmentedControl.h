/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/SUMenuViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class NSString, SUClientInterface, NSMutableArray, SUSimpleMenuViewController, UIPopoverController, UISegmentedControl, NSArray, UIColor;

@interface SUSegmentedControl : UIControl <SUMenuViewControllerDelegate, UIPopoverControllerDelegate> {

	BOOL _autosizesText;
	NSString* _cancelButtonTitle;
	SUClientInterface* _clientInterface;
	BOOL _hidingPopoverForRotation;
	NSMutableArray* _items;
	long long _maximumNumberOfItems;
	double _maximumWidth;
	SUSimpleMenuViewController* _menuViewController;
	NSString* _moreListTitle;
	UIPopoverController* _popoverController;
	UISegmentedControl* _segmentedControl;
	long long _selectionIndex;
	BOOL _showsMoreListAutomatically;
	long long _tintStyle;

}

@property (nonatomic,copy) NSArray * items; 
@property (assign,nonatomic) long long maximumNumberOfItems;                   //@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
@property (assign,nonatomic) double maximumWidth;                              //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;                       //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * moreListTitle;                           //@synthesize moreListTitle=_moreListTitle - In the implementation block
@property (nonatomic,readonly) long long numberOfVisibleSegments; 
@property (assign,nonatomic) long long segmentedControlStyle; 
@property (assign,nonatomic) long long selectedItemIndex; 
@property (nonatomic,readonly) long long selectedSegmentIndex; 
@property (assign,nonatomic) BOOL showsMoreListAutomatically;                  //@synthesize showsMoreListAutomatically=_showsMoreListAutomatically - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) long long tintStyle;                              //@synthesize tintStyle=_tintStyle - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;              //@synthesize clientInterface=_clientInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)maximumWidth;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(long long)tintStyle;
-(void)setMaximumWidth:(double)arg1 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4 ;
-(void)setTintStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMaximumNumberOfItems:(long long)arg1 ;
-(void)_reloadData;
-(void)setSelectedItemIndex:(long long)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(NSArray *)items;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)layoutSubviews;
-(id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)cancelButtonTitle;
-(void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(long long)selectedItemIndex;
-(SUClientInterface *)clientInterface;
-(long long)maximumNumberOfItems;
-(long long)segmentedControlStyle;
-(long long)selectedSegmentIndex;
-(void)setSegmentedControlStyle:(long long)arg1 ;
-(void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(UIColor *)tintColor;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(void)_applyStyling;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(void)_destroyPopoverController;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(NSString *)moreListTitle;
-(void)setMoreListTitle:(NSString *)arg1 ;
-(void)sizeToFitUserInterfaceIdiom;
-(void)menuViewControllerDidCancel:(id)arg1 ;
-(void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2 ;
-(void)_windowDidRotateNotification:(id)arg1 ;
-(void)_windowWillRotateNotification:(id)arg1 ;
-(void)showMoreList:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)showPopover:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setShowsMoreListAutomatically:(BOOL)arg1 ;
-(BOOL)showsMoreListAutomatically;
-(void)_valueChangedEvent:(id)arg1 ;
-(void)_setValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(void)_showMoreList:(BOOL)arg1 ;
-(void)_destroyMenuViewController;
-(long long)numberOfVisibleSegments;
-(void)_presentPopoverAnimated:(BOOL)arg1 ;
-(id)_titlesForMoreList;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIDebuggingInformationTouchObserver.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIDebuggingInformationHierarchyLayoutDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIDebuggingInformationHierarchyCellDelegate.h>
#import <UIKit/UIDebuggingInformationViewController.h>

@class NSArray, NSMutableArray, NSMutableDictionary, UIView, UIRefreshControl, UICollectionView, UIDebuggingInformationInspectorDetailViewController, NSString;

@interface UIDebuggingInformationHierarchyViewController : UIViewController <UIDebuggingInformationTouchObserver, UICollectionViewDataSource, UIDebuggingInformationHierarchyLayoutDelegate, UICollectionViewDelegate, UIDebuggingInformationHierarchyCellDelegate, UIDebuggingInformationViewController> {

	NSArray* _showingOverlayItems;
	NSArray* _normalItems;
	NSMutableArray* _keys;
	NSMutableDictionary* _managedValues;
	NSMutableDictionary* _observersForKeys;
	NSMutableDictionary* _controlsForKeys;
	NSArray* _data;
	UIView* _rootViewForInspection;
	UIRefreshControl* _refreshControl;
	UIView* _highlightedView;
	UICollectionView* _collectionView;
	CGColorRef _originalBorderColor;
	double _originalBorderWidth;
	UIDebuggingInformationInspectorDetailViewController* _detail;

}

@property (nonatomic,retain) NSMutableArray * keys;                                                     //@synthesize keys=_keys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * managedValues;                                       //@synthesize managedValues=_managedValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observersForKeys;                                    //@synthesize observersForKeys=_observersForKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * controlsForKeys;                                     //@synthesize controlsForKeys=_controlsForKeys - In the implementation block
@property (nonatomic,retain) NSArray * data;                                                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) UIView * rootViewForInspection;                                            //@synthesize rootViewForInspection=_rootViewForInspection - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                                         //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UIView * highlightedView;                                                  //@synthesize highlightedView=_highlightedView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                         //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) CGColorRef originalBorderColor;                                            //@synthesize originalBorderColor=_originalBorderColor - In the implementation block
@property (assign,nonatomic) double originalBorderWidth;                                                //@synthesize originalBorderWidth=_originalBorderWidth - In the implementation block
@property (nonatomic,retain) UIDebuggingInformationInspectorDetailViewController * detail;              //@synthesize detail=_detail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)data;
-(NSMutableArray *)keys;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(void)setData:(NSArray *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UIRefreshControl *)refreshControl;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)highlightView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(void)setDetail:(UIDebuggingInformationInspectorDetailViewController *)arg1 ;
-(void)didReceiveNewView:(id)arg1 ;
-(BOOL)shouldHighlightSelectedCells;
-(void)expandBeneathCell:(id)arg1 ;
-(void)collapseBeneathCell:(id)arg1 ;
-(void)displayDetailsForCell:(id)arg1 ;
-(unsigned long long)indentationLevelForIndexPath:(id)arg1 ;
-(BOOL)shouldCollapseAtIndexPath:(id)arg1 ;
-(id)colorForIndentationLevel:(unsigned long long)arg1 ;
-(void)setRootViewForInspection:(UIView *)arg1 ;
-(void)_showWindowChange;
-(void)chooseNewTarget:(id)arg1 ;
-(void)refresh:(id)arg1 ;
-(id)getViewsRecursiveWithLevel:(unsigned long long)arg1 forView:(id)arg2 ;
-(UIView *)highlightedView;
-(void)setHighlightedView:(UIView *)arg1 ;
-(NSMutableDictionary *)managedValues;
-(void)setManagedValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)observersForKeys;
-(void)setObserversForKeys:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)controlsForKeys;
-(void)setControlsForKeys:(NSMutableDictionary *)arg1 ;
-(UIView *)rootViewForInspection;
-(CGColorRef)originalBorderColor;
-(void)setOriginalBorderColor:(CGColorRef)arg1 ;
-(double)originalBorderWidth;
-(void)setOriginalBorderWidth:(double)arg1 ;
-(UIDebuggingInformationInspectorDetailViewController *)detail;
@end


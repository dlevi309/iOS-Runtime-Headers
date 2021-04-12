/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(NSMutableArray *)keys;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(UIDebuggingInformationInspectorDetailViewController *)detail;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)refresh:(id)arg1 ;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(void)setData:(NSArray *)arg1 ;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(void)viewDidLoad;
-(NSArray *)data;
-(UIRefreshControl *)refreshControl;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setDetail:(UIDebuggingInformationInspectorDetailViewController *)arg1 ;
-(void)highlightView:(id)arg1 ;
-(void)didReceiveNewView:(id)arg1 ;
-(BOOL)shouldHighlightSelectedCells;
-(void)expandBeneathCell:(id)arg1 ;
-(void)collapseBeneathCell:(id)arg1 ;
-(void)displayDetailsForCell:(id)arg1 ;
-(unsigned long long)indentationLevelForIndexPath:(id)arg1 ;
-(BOOL)shouldCollapseAtIndexPath:(id)arg1 ;
-(id)colorForIndentationLevel:(unsigned long long)arg1 ;
-(NSMutableDictionary *)managedValues;
-(void)_showWindowChange;
-(void)chooseNewTarget:(id)arg1 ;
-(id)getViewsRecursiveWithLevel:(unsigned long long)arg1 forView:(id)arg2 ;
-(UIView *)highlightedView;
-(void)setRootViewForInspection:(UIView *)arg1 ;
-(void)setHighlightedView:(UIView *)arg1 ;
-(void)setManagedValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)observersForKeys;
-(NSMutableDictionary *)controlsForKeys;
-(void)setObserversForKeys:(NSMutableDictionary *)arg1 ;
-(void)setControlsForKeys:(NSMutableDictionary *)arg1 ;
-(UIView *)rootViewForInspection;
-(CGColorRef)originalBorderColor;
-(void)setOriginalBorderColor:(CGColorRef)arg1 ;
-(double)originalBorderWidth;
-(void)setOriginalBorderWidth:(double)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end


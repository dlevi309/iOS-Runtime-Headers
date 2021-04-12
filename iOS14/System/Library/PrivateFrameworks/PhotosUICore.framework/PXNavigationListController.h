/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PXNavigationListDataSectionManagerObserver.h>

@protocol PXNavigationListContainer;
@class UITableView, PXNavigationListDataSectionManager, PXNavigationListDataSection, NSUserActivity, NSString;

@interface PXNavigationListController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, PXNavigationListDataSectionManagerObserver> {

	BOOL __needsUpdateRowHeight;
	UITableView* _tableView;
	PXNavigationListDataSectionManager* _dataSectionManager;
	id<PXNavigationListContainer> _container;
	PXNavigationListDataSection* _dataSection;
	NSUserActivity* _siriActionActivity;
	double _rowHeight;

}

@property (nonatomic,retain) PXNavigationListDataSection * dataSection;                                //@synthesize dataSection=_dataSection - In the implementation block
@property (nonatomic,retain) NSUserActivity * siriActionActivity;                                      //@synthesize siriActionActivity=_siriActionActivity - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                         //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,setter=_setNeedsUpdateRowHeight:,nonatomic) BOOL _needsUpdateRowHeight;              //@synthesize _needsUpdateRowHeight=__needsUpdateRowHeight - In the implementation block
@property (nonatomic,readonly) PXNavigationListDataSectionManager * dataSectionManager;                //@synthesize dataSectionManager=_dataSectionManager - In the implementation block
@property (assign,nonatomic,__weak) id<PXNavigationListContainer> container;                           //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) double contentHeight; 
@property (nonatomic,readonly) UITableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL allowsNavigation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)navigateToListItem:(id)arg1 sourceViewController:(id)arg2 existingAssetsFetchResult:(id)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(PXNavigationListDataSection *)dataSection;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)contentHeightDidChange;
-(UITableView *)tableView;
-(void)setRowHeight:(double)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setContainer:(id<PXNavigationListContainer>)arg1 ;
-(void)_updateTableView;
-(id)initWithDataSectionManager:(id)arg1 ;
-(double)_contentHeightForDataSection:(id)arg1 ;
-(void)setAllowsNavigation:(BOOL)arg1 ;
-(BOOL)allowsNavigation;
-(double)_rowHeightForCurrentFont;
-(void)_updateCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updateCellSeparatorStyle:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(PXNavigationListDataSectionManager *)dataSectionManager;
-(id)_navigateTolistItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDataSection:(PXNavigationListDataSection *)arg1 ;
-(BOOL)_needsUpdateRowHeight;
-(void)_setNeedsUpdateRowHeight:(BOOL)arg1 ;
-(double)rowHeight;
-(void)_preferredContentSizeChanged:(id)arg1 ;
-(NSUserActivity *)siriActionActivity;
-(id)initWithCoder:(id)arg1 ;
-(void)setSiriActionActivity:(NSUserActivity *)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<PXNavigationListContainer>)container;
-(id)_createTransparentFullWidthViewOfHeight:(double)arg1 ;
-(double)contentHeight;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end


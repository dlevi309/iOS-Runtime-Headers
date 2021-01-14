/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PXContentFilterController.h>

@protocol PXContentFilterControllerDelegate;
@class PXContentFilterState, NSString, NSArray;

@interface PXUIContentFilterController : UITableViewController <UITableViewDataSource, UITableViewDelegate, PXContentFilterController> {

	NSArray* _contentFilterGroups;
	PXContentFilterState* _filterState;
	NSString* _identifier;
	id<PXContentFilterControllerDelegate> _contentFilterDelegate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) id<PXContentFilterControllerDelegate> contentFilterDelegate;              //@synthesize contentFilterDelegate=_contentFilterDelegate - In the implementation block
@property (nonatomic,copy) PXContentFilterState * filterState;                                                  //@synthesize filterState=_filterState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL filteringIsActive; 
@property (nonatomic,readonly) NSString * filteringLocalizedCaption; 
@property (nonatomic,readonly) NSString * filteringLocalizedTitle; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)_existingCellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(PXContentFilterState *)filterState;
-(void)setFilterState:(PXContentFilterState *)arg1 ;
-(BOOL)filteringIsActive;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id)_getUpdatedFilterState;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)_updateFilterState:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_setupNavigationBar;
-(void)_clickedRowAtIndexPath:(id)arg1 ;
-(id)_contentFilterGroups;
-(void)_setupTableView;
-(id)_existingCellForFilterItemTag:(long long)arg1 ;
-(void)viewDidLoad;
-(void)_clickedContentFilterCell:(id)arg1 ;
-(long long)_filterItemTagForExistingCellForRowAtIndexPath:(id)arg1 ;
-(BOOL)_selectCellWithFilterItemTag:(long long)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSString *)identifier;
-(void)_enumerateExistingCellsUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)filteringLocalizedCaption;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<PXContentFilterControllerDelegate>)contentFilterDelegate;
-(NSString *)filteringLocalizedTitle;
@end


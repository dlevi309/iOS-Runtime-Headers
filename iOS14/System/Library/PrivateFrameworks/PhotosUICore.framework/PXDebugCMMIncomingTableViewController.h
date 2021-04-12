/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@class PXCMMInvitationsDataSourceManager, PXCMMInvitationsDataSource, NSString;

@interface PXDebugCMMIncomingTableViewController : UITableViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver> {

	PXCMMInvitationsDataSourceManager* _dataSourceManager;
	PXCMMInvitationsDataSource* _dataSource;

}

@property (nonatomic,retain) PXCMMInvitationsDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) PXCMMInvitationsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSourceManager:(id)arg1 ;
-(PXCMMInvitationsDataSource *)dataSource;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDataSource:(PXCMMInvitationsDataSource *)arg1 ;
-(PXCMMInvitationsDataSourceManager *)dataSourceManager;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end


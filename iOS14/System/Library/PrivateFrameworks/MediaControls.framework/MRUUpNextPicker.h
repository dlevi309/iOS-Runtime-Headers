/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MRUUpNextDataSourceDelegate.h>
#import <libobjc.A.dylib/MRUDiffableDataSourceDelegate.h>

@class MRUUpNextDataSource, UITableView, MRUDiffableDataSource, NSString;

@interface MRUUpNextPicker : UIView <UITableViewDelegate, MRUUpNextDataSourceDelegate, MRUDiffableDataSourceDelegate> {

	MRUUpNextDataSource* _dataSource;
	UITableView* _tableView;
	MRUDiffableDataSource* _diffableDataSource;

}

@property (nonatomic,retain) UITableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MRUDiffableDataSource * diffableDataSource;              //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,readonly) MRUUpNextDataSource * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(MRUUpNextDataSource *)dataSource;
-(void)layoutSubviews;
-(MRUDiffableDataSource *)diffableDataSource;
-(void)setTableView:(UITableView *)arg1 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)setDiffableDataSource:(MRUDiffableDataSource *)arg1 ;
-(void)configureCell:(id)arg1 forSong:(id)arg2 ;
-(void)configureCell:(id)arg1 forTVEpisode:(id)arg2 ;
-(void)configureCell:(id)arg1 forMovie:(id)arg2 ;
-(void)updateDiffableDataSourceAnimated:(BOOL)arg1 ;
-(void)upNextDataSource:(id)arg1 didChangeResponseItemIDs:(id)arg2 ;
-(void)dataSource:(id)arg1 didDeleteItemWithIdentifier:(id)arg2 ;
-(void)dataSource:(id)arg1 moveItemWithIdentifier:(id)arg2 aferIndentifier:(id)arg3 ;
-(void)dataSource:(id)arg1 moveItemToTopWithIdentifier:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 dataSource:(id)arg2 ;
-(id)reponseItemForIndexPath:(id)arg1 ;
@end


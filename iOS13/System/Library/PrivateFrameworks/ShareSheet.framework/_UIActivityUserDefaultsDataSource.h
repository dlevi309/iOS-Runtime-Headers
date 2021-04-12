/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol _UIActivityUserDefaultsDataSourceProxy;
@interface _UIActivityUserDefaultsDataSource : UITableViewDiffableDataSource {

	id<_UIActivityUserDefaultsDataSourceProxy> _dataSourceProxy;

}

@property (assign,nonatomic,__weak) id<_UIActivityUserDefaultsDataSourceProxy> dataSourceProxy;              //@synthesize dataSourceProxy=_dataSourceProxy - In the implementation block
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<_UIActivityUserDefaultsDataSourceProxy>)dataSourceProxy;
-(void)setDataSourceProxy:(id<_UIActivityUserDefaultsDataSourceProxy>)arg1 ;
@end


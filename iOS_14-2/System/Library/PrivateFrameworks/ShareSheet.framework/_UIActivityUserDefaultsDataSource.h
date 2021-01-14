/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol _UIActivityUserDefaultsDataSourceProxy;
@interface _UIActivityUserDefaultsDataSource : UITableViewDiffableDataSource {

	id<_UIActivityUserDefaultsDataSourceProxy> _dataSourceProxy;

}

@property (assign,nonatomic,__weak) id<_UIActivityUserDefaultsDataSourceProxy> dataSourceProxy;              //@synthesize dataSourceProxy=_dataSourceProxy - In the implementation block
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id<_UIActivityUserDefaultsDataSourceProxy>)dataSourceProxy;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setDataSourceProxy:(id<_UIActivityUserDefaultsDataSourceProxy>)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
@end


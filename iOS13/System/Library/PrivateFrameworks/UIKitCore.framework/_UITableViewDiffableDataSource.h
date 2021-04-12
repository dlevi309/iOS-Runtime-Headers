/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UITableView;

@interface _UITableViewDiffableDataSource : _UIDiffableDataSourceSnapshotter {

	long long _defaultRowAnimation;

}

@property (assign,nonatomic) long long defaultRowAnimation;                 //@synthesize defaultRowAnimation=_defaultRowAnimation - In the implementation block
@property (nonatomic,__weak,readonly) UITableView * tableView; 
-(UITableView *)tableView;
-(id)initWithTableView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(long long)defaultRowAnimation;
-(void)setDefaultRowAnimation:(long long)arg1 ;
-(id)initWithTableView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
@end


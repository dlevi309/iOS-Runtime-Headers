/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UITableView;

@interface _UITableViewDiffableDataSource : _UIDiffableDataSourceSnapshotter {

	long long _defaultRowAnimation;

}

@property (assign,nonatomic) long long defaultRowAnimation;                 //@synthesize defaultRowAnimation=_defaultRowAnimation - In the implementation block
@property (nonatomic,__weak,readonly) UITableView * tableView; 
-(id)initWithTableView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(long long)defaultRowAnimation;
-(UITableView *)tableView;
-(void)setDefaultRowAnimation:(long long)arg1 ;
-(id)initWithTableView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
@end


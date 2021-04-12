/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDiffableDataSourceIdentifying.h>
#import <UIKit/UITableViewDataSource.h>

@class __UIDiffableDataSource, NSString;

@interface UITableViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UITableViewDataSource> {

	__UIDiffableDataSource* _impl;

}

@property (nonatomic,retain) __UIDiffableDataSource * impl;              //@synthesize impl=_impl - In the implementation block
@property (assign,nonatomic) long long defaultRowAnimation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)snapshot;
-(__UIDiffableDataSource *)impl;
-(void)applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(id)initWithViewUpdatesSink:(id)arg1 ;
-(BOOL)_isDiffableDataSource;
-(void)applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 ;
-(void)_applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setImpl:(__UIDiffableDataSource *)arg1 ;
-(id)initWithTableView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(long long)defaultRowAnimation;
-(void)setDefaultRowAnimation:(long long)arg1 ;
@end


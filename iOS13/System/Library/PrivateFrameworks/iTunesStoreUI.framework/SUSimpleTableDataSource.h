/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray;

@interface SUSimpleTableDataSource : SUTableDataSource {

	Class _cellConfigurationClass;
	NSArray* _objects;

}

@property (nonatomic,retain) Class cellConfigurationClass;              //@synthesize cellConfigurationClass=_cellConfigurationClass - In the implementation block
@property (nonatomic,retain) NSArray * objects;                         //@synthesize objects=_objects - In the implementation block
-(void)dealloc;
-(NSArray *)objects;
-(long long)numberOfSections;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(void)setObjects:(NSArray *)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(void)reloadCellContexts;
-(id)objectForIndexPath:(id)arg1 ;
-(Class)cellConfigurationClass;
-(void)setCellConfigurationClass:(Class)arg1 ;
@end


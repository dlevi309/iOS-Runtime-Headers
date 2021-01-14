/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)objects;
-(void)setObjects:(NSArray *)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(void)dealloc;
-(id)objectForIndexPath:(id)arg1 ;
-(Class)cellConfigurationClass;
-(id)cellForIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(void)reloadCellContexts;
-(void)setCellConfigurationClass:(Class)arg1 ;
@end


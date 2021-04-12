/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class WFDatabase, NSArray, NSIndexSet;

@interface WFDatabaseSectionedResultsController : NSObject {

	WFDatabase* _database;
	NSArray* _resultsControllers;
	NSIndexSet* _sections;

}

@property (nonatomic,readonly) WFDatabase * database;                          //@synthesize database=_database - In the implementation block
@property (nonatomic,copy,readonly) NSArray * resultsControllers;              //@synthesize resultsControllers=_resultsControllers - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * sections;                     //@synthesize sections=_sections - In the implementation block
-(void)removeObserver:(id)arg1 ;
-(WFDatabase *)database;
-(void)update;
-(NSIndexSet *)sections;
-(NSArray *)resultsControllers;
-(id)descriptorAtIndexPath:(id)arg1 ;
-(id)resultsControllerForSection:(long long)arg1 ;
-(id)initWithCollections:(id)arg1 forSections:(id)arg2 database:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)addUpdateObserver:(id)arg1 selector:(SEL)arg2 ;
-(id)indexPathForDescriptor:(id)arg1 ;
-(void)addUpdateObserver:(id)arg1 selector:(SEL)arg2 forSection:(unsigned long long)arg3 ;
-(void)removeObserver:(id)arg1 forSection:(unsigned long long)arg2 ;
@end


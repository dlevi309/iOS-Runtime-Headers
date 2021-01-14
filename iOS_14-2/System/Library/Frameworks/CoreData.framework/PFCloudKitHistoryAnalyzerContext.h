/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFHistoryAnalyzerContext.h>

@class NSMutableDictionary, NSManagedObjectContext, NSSet;

@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext {

	NSMutableDictionary* _objectIDToAnalyzerStateCache;
	NSManagedObjectContext* _managedObjectContext;
	NSSet* _configuredEntityNames;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSSet * configuredEntityNames;                              //@synthesize configuredEntityNames=_configuredEntityNames - In the implementation block
-(NSManagedObjectContext *)managedObjectContext;
-(id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2 store:(id)arg3 ;
-(id)cloudKitAnalyzerOptions;
-(BOOL)reset:(id*)arg1 ;
-(BOOL)resetStateForObjectID:(id)arg1 error:(id*)arg2 ;
-(BOOL)processChange:(id)arg1 error:(id*)arg2 ;
-(id)analyzerStateForChangedObjectID:(id)arg1 error:(id*)arg2 ;
-(BOOL)finishProcessing:(id*)arg1 ;
-(id)fetchSortedStates:(id*)arg1 ;
-(id)newAnalyzerStateForChange:(id)arg1 error:(id*)arg2 ;
-(NSSet *)configuredEntityNames;
-(void)dealloc;
@end


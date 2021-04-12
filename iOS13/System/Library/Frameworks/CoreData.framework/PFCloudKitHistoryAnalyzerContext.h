/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFHistoryAnalyzerContext.h>

@class NSMutableDictionary, NSManagedObjectContext;

@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext {

	NSMutableDictionary* _objectIDToAnalyzerStateCache;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
-(void)dealloc;
-(BOOL)reset:(id*)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)cloudKitAnalyzerOptions;
-(BOOL)resetStateForObjectID:(id)arg1 error:(id*)arg2 ;
-(BOOL)processChange:(id)arg1 error:(id*)arg2 ;
-(id)analyzerStateForChangedObjectID:(id)arg1 error:(id*)arg2 ;
-(BOOL)finishProcessing:(id*)arg1 ;
-(id)fetchSortedStates:(id*)arg1 ;
-(id)newAnalyzerStateForChange:(id)arg1 error:(id*)arg2 ;
@end


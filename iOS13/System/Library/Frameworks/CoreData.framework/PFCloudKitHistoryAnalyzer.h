/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/PFHistoryAnalyzer.h>

@class NSManagedObjectContext;

@interface PFCloudKitHistoryAnalyzer : PFHistoryAnalyzer {

	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
+(BOOL)isPrivateTransaction:(id)arg1 ;
+(BOOL)isPrivateTransactionAuthor:(id)arg1 ;
+(BOOL)isPrivateContextName:(id)arg1 ;
-(void)dealloc;
-(NSManagedObjectContext *)managedObjectContext;
-(id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)processTransaction:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)cloudKitAnalyzerOptions;
-(id)instantiateNewAnalyzerContext;
@end


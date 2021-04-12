/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/PFHistoryAnalyzerObjectState.h>

@class NSNumber, NSManagedObjectID, NSDictionary, NSString;

@interface NSCKHistoryAnalyzerState : NSManagedObject <PFHistoryAnalyzerObjectState>

@property (nonatomic,retain) NSNumber * entityId; 
@property (nonatomic,retain) NSNumber * entityPK; 
@property (nonatomic,retain) NSNumber * originalChangeTypeNum; 
@property (nonatomic,retain) NSNumber * finalChangeTypeNum; 
@property (nonatomic,readonly) NSManagedObjectID * analyzedObjectID; 
@property (nonatomic,readonly) NSNumber * originalTransactionNumber; 
@property (nonatomic,readonly) long long originalChangeType; 
@property (nonatomic,readonly) NSNumber * finalTransactionNumber; 
@property (nonatomic,readonly) long long finalChangeType; 
@property (nonatomic,readonly) NSDictionary * tombstone; 
@property (nonatomic,readonly) NSString * finalChangeAuthor; 
+(id)entityPath;
+(id)countAnalyzerStatesInStore:(id)arg1 matchingPredicate:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)insertAnalyzerStateForChange:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)fetchStateForChangedObjectID:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)purgeAnalyzedHistoryFromStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)countAnalyzerStatesInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)tombstone;
-(void)updateWithChange:(id)arg1 ;
-(NSManagedObjectID *)analyzedObjectID;
-(long long)originalChangeType;
-(long long)finalChangeType;
@end


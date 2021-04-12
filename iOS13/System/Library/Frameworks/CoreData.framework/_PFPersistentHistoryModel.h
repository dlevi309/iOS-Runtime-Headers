/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/_PFAncillaryModelFactory.h>

@class NSString;

@interface _PFPersistentHistoryModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ancillaryModelNamespace;
+(unsigned long long)ancillaryEntityOffset;
+(unsigned long long)ancillaryEntityCount;
+(id)_tombstonesForEntity:(id)arg1 ;
+(void)resetCaches;
+(BOOL)_hasTombstonesInUserInfo:(id)arg1 ;
+(id)newPersistentHistoryManagedObjectModelForSQLModel:(id)arg1 options:(id)arg2 ;
+(id)newPersistentHistorySQLModelForSQLModel:(id)arg1 options:(id)arg2 ;
+(unsigned long long)_maxCountOfTombstonesInModel:(id)arg1 ;
+(id)_tombstonesColumnsForEntity:(id)arg1 ;
+(id)_entitiesWithTooManyTombstonesInModel:(id)arg1 ;
+(void)createModelsWithTombstoneCount:(int)arg1 andOptions:(id)arg2 ;
@end


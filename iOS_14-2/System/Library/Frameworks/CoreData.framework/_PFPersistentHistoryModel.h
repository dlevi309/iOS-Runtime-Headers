/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/_PFAncillaryModelFactory.h>

@class NSString;

@interface _PFPersistentHistoryModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(unsigned long long)ancillaryEntityCount;
+(void)_invalidateStaticCaches;
+(unsigned long long)_maxCountOfTombstonesInModel:(id)arg1 ;
+(id)_tombstonesForEntity:(id)arg1 ;
+(id)ancillaryModelNamespace;
+(void)resetCaches;
+(id)newPersistentHistoryManagedObjectModelForSQLModel:(id)arg1 options:(id)arg2 ;
+(BOOL)_hasTombstonesInUserInfo:(id)arg1 ;
+(unsigned long long)ancillaryEntityOffset;
+(id)_tombstonesColumnsForEntity:(id)arg1 ;
+(id)newPersistentHistorySQLModelForSQLModel:(id)arg1 options:(id)arg2 ;
@end


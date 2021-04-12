/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class SGSqliteDatabase, NSString;

@interface SGDSqlHarvestQueueStore : NSObject {

	SGSqliteDatabase* _db;
	NSString* _dirPath;

}
-(BOOL)_migrateDb:(id)arg1 ;
-(SCD_Struct_SG22)popByItemId:(long long)arg1 ;
-(void)createFile:(/*^block*/id)arg1 ;
-(void)close;
-(SCD_Struct_SG22)popByCustomPriorityCriteria:(unsigned char)arg1 ;
-(void)resetProgressForItemId:(long long)arg1 ;
-(SCD_Struct_SG22)popBySourceKey:(id)arg1 messageId:(id)arg2 ;
-(BOOL)deleteWithItemId:(long long)arg1 fileId:(int)arg2 ;
-(SCD_Struct_SG22)_popWithStringAfterWhereClause:(id)arg1 binder:(/*^block*/id)arg2 ;
-(SCD_Struct_SG30)fetchMetadata;
-(void)garbageCollectFiles:(/*^block*/id)arg1 ;
-(void)markAsFailedWithItemId:(long long)arg1 ;
-(id)_recreateDb;
-(id)_getDb;
-(SCD_Struct_SG22)popHighPriorityItem;
-(SCD_Struct_SG22)popItem;
-(id)initWithDirectory:(id)arg1 ;
-(id)filesIdsToOpen;
-(void)createItemWithId:(long long)arg1 sourceKey:(id)arg2 messageId:(id)arg3 customPriorityCriteria:(unsigned char)arg4 fileId:(int)arg5 metadataChunk:(SCD_Struct_SG21*)arg6 htmlChunk:(SCD_Struct_SG21*)arg7 textChunk:(SCD_Struct_SG21*)arg8 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSSQLiteStatement, NSMutableDictionary;

@interface NSSQLiteStatementCache : NSObject {

	NSSQLEntity* _entity;
	NSSQLiteStatement* _insertStatementCache;
	NSSQLiteStatement* _batchInsertStatementCache;
	NSSQLiteStatement* _deletionStatementCache;
	NSSQLiteStatement* _faultingStatementCache;
	NSMutableDictionary* _toManyRelationshipStatementCache;
	CFDictionaryRef _correlationInsertCache;
	CFDictionaryRef _correlationDeleteCache;
	CFDictionaryRef _correlationMasterReorderCache;
	CFDictionaryRef _correlationMasterReorderCachePart2;
	CFDictionaryRef _correlationReorderCache;

}
-(id)initWithEntity:(id)arg1 ;
-(id)faultingStatement;
-(id)deletionStatement;
-(id)correlationReorderStatementForRelationship:(id)arg1 ;
-(id)correlationInsertStatementForRelationship:(id)arg1 ;
-(id)correlationDeleteStatementForRelationship:(id)arg1 ;
-(void)cacheCorrelationMasterReorderStatementPart2:(id)arg1 forRelationship:(id)arg2 ;
-(id)correlationMasterReorderStatementForRelationship:(id)arg1 ;
-(id)batchInsertStatement;
-(void)cacheCorrelationDeleteStatement:(id)arg1 forRelationship:(id)arg2 ;
-(void)cacheFaultingStatement:(id)arg1 andFetchRequest:(id)arg2 forRelationship:(id)arg3 ;
-(void)cacheCorrelationReorderStatement:(id)arg1 forRelationship:(id)arg2 ;
-(void)cacheDeletionStatement:(id)arg1 ;
-(void)_clearSaveGeneratedCachedStatements;
-(void)cacheCorrelationInsertStatement:(id)arg1 forRelationship:(id)arg2 ;
-(void)cacheCorrelationMasterReorderStatement:(id)arg1 forRelationship:(id)arg2 ;
-(id)correlationMasterReorderStatementPart2ForRelationship:(id)arg1 ;
-(void)cacheInsertStatement:(id)arg1 ;
-(void)clearCachedStatements;
-(id)preparedFaultingCachesForRelationship:(id)arg1 ;
-(void)insertOrReplaceStatement:(id)arg1 forRelationship:(id)arg2 inDictionary:(CFDictionaryRef)arg3 ;
-(void)cacheFaultingStatement:(id)arg1 ;
-(CFDictionaryRef)createCorrelationCacheDictionary;
-(void)cacheBatchInsertStatement:(id)arg1 ;
-(id)insertStatement;
-(void)dealloc;
@end


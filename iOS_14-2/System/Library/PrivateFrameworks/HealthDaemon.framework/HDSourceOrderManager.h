/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDProfile, HDDatabaseValueCache;

@interface HDSourceOrderManager : NSObject {

	HDProfile* _profile;
	HDDatabaseValueCache* _sourceOrdersForTypeCache;

}
+(id)_defaultOrderingWithSources:(id)arg1 ;
-(BOOL)_addOrderedSource:(id)arg1 objectType:(id)arg2 transactionCache:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
-(id)_sourceOrderForCodableSourceOrder:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(BOOL)_insertCodableObjectTypeSourceOrder:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(id)initWithProfile:(id)arg1 ;
-(id)_defaultSourceCacheItemWithTransactionCache:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)createSourceOrdersWithCodables:(id)arg1 error:(id*)arg2 ;
-(id)_sourceCacheItemForObjectType:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(id)orderedSourcesForObjectType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_updateSourceOrder:(id)arg1 type:(id)arg2 transactionCache:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
-(BOOL)addOrderedSource:(id)arg1 objectTypes:(id)arg2 error:(id*)arg3 ;
-(BOOL)_updateSourceOrder:(id)arg1 type:(id)arg2 error:(id*)arg3 ;
-(BOOL)_updateOrderedSourceIDsForWrappedSource:(HDWrappedSource*)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(void)resetCacheWithTransaction:(id)arg1 ;
-(id)_orderedSourceIDsForOrderedSources:(id)arg1 sourcesByID:(id)arg2 objectType:(id)arg3 transactionCache:(id)arg4 database:(id)arg5 error:(id*)arg6 ;
-(id)_mergedSourceOrderForExistingOrder:(id)arg1 incomingOrder:(id)arg2 ;
-(id)orderedSourceIDsForObjectType:(id)arg1 bundleIdentifierMapping:(id)arg2 userOrdered:(BOOL*)arg3 error:(id*)arg4 ;
-(id)_sourceCacheItemForObjectType:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetCacheWithError:(id*)arg1 ;
-(id)_fetchSourceCacheItemForObjectType:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
-(BOOL)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 error:(id*)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/


@class NSString, NSURL;

@interface CKKnowledgeStore : NSObject {

	 backingStore;
	 sparqlQueue;
	 location;
	 delegate;

}

@property (retain,nonatomic) id<CKKnowledgeStoreDelegate> delegate; 
@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSURL * filePathURL; 
@property (readonly,nonatomic) long long hash; 
+(id)knowledgeStoreWithName:(id)arg1 ;
+(id)defaultSynchedKnowledgeStore;
+(id)inMemoryKnowledgeStore;
+(id)userDefaultsKnowledgeStore;
+(id)synchedKnowledgeStoreWithName:(id)arg1 ;
+(id)directoryURL;
+(id)defaultKnowledgeStore;
-(NSURL *)filePathURL;
-(id)init;
-(id<CKKnowledgeStoreDelegate>)delegate;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)entityWithIdentifier:(id)arg1 ;
-(void)triplesMatching:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)removeEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)removeEntity:(id)arg1 error:(id*)arg2 ;
-(void)disableSyncAndDeleteCloudDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeValueForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeValuesForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeValuesMatching:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)importTriplesFromFileAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)removeValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeValuesMatching:(id)arg1 error:(id*)arg2 ;
-(id)keysAndReturnError:(id*)arg1 ;
-(BOOL)removeAllValuesAndReturnError:(id*)arg1 ;
-(id)keysMatching:(id)arg1 error:(id*)arg2 ;
-(id)valuesAndReturnError:(id*)arg1 ;
-(id)valuesForKeysMatching:(id)arg1 error:(id*)arg2 ;
-(NSString *)name;
-(void)setDelegate:(id<CKKnowledgeStoreDelegate>)arg1 ;
-(void)entitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dictionaryRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)dictionaryRepresentationAndReturnError:(id*)arg1 ;
-(void)dictionaryRepresentationForKeysMatching:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)keysWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)dictionaryRepresentationForKeysMatching:(id)arg1 error:(id*)arg2 ;
-(void)keysMatching:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)valuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)valueForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)valuesForKeysMatching:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)entitiesAndReturnError:(id*)arg1 ;
-(id)triplesMatching:(id)arg1 error:(id*)arg2 ;
-(void)sparqlResultsForQuery:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)subgraphWithEntities:(id)arg1 ;
-(void)importContentsOfJSONLDAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 error:(id*)arg4 ;
-(long long)hash;
-(void)valuesForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)removeValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)writeBatch;
-(BOOL)isEqual:(id)arg1 ;
@end


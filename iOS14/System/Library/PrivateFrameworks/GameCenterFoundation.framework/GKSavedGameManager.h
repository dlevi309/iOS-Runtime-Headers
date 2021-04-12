/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class NSURL, NSMetadataQuery, NSMutableDictionary, NSMutableArray;

@interface GKSavedGameManager : NSObject {

	BOOL _ubiquityUnavailable;
	NSURL* _ubiquityURL;
	NSMetadataQuery* _query;
	NSMutableDictionary* _documents;
	long long _queryDisableCount;
	NSMutableArray* _fetchHandlers;

}

@property (nonatomic,retain) NSURL * ubiquityURL;                          //@synthesize ubiquityURL=_ubiquityURL - In the implementation block
@property (assign,nonatomic) BOOL ubiquityUnavailable;                     //@synthesize ubiquityUnavailable=_ubiquityUnavailable - In the implementation block
@property (nonatomic,retain) NSMetadataQuery * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * documents;              //@synthesize documents=_documents - In the implementation block
@property (assign,nonatomic) long long queryDisableCount;                  //@synthesize queryDisableCount=_queryDisableCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchHandlers;               //@synthesize fetchHandlers=_fetchHandlers - In the implementation block
+(id)sharedManager;
-(NSMetadataQuery *)query;
-(void)setQueryDisableCount:(long long)arg1 ;
-(void)loadDataForSavedGame:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)savedGameForDocument:(id)arg1 ;
-(id)init;
-(void)enableQueryUpdates;
-(id)savedGamesWithName:(id)arg1 ;
-(id)savedGameForDocuments:(id)arg1 ;
-(void)queryDidFinishGathering:(id)arg1 ;
-(id)currentDocumentWithName:(id)arg1 ;
-(NSURL *)ubiquityURL;
-(void)fetchSavedGamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setupUbiquity;
-(void)setFetchHandlers:(NSMutableArray *)arg1 ;
-(void)addDocument:(id)arg1 ;
-(void)documentModified:(id)arg1 ;
-(void)disableQueryUpdates;
-(void)startSavedGameQuery;
-(void)callFetchHandlers;
-(NSMutableDictionary *)documents;
-(id)documentToSaveWithName:(id)arg1 ;
-(long long)queryDisableCount;
-(void)setDocuments:(NSMutableDictionary *)arg1 ;
-(id)documentForSavedGame:(id)arg1 ;
-(void)removeDocument:(id)arg1 ;
-(void)updateSavedGameDocumentsForQueryWithHandler:(/*^block*/id)arg1 ;
-(id)fileURLForName:(id)arg1 ;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(NSMutableArray *)fetchHandlers;
-(void)ubiquityAvailabilityChanged:(id)arg1 ;
-(void)documentConflictStateChanged:(id)arg1 ;
-(BOOL)ubiquityUnavailable;
-(id)errorForNoUbiquity;
-(void)setUbiquityUnavailable:(BOOL)arg1 ;
-(void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryDidUpdate:(id)arg1 ;
-(void)setUbiquityURL:(NSURL *)arg1 ;
-(void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)deleteSavedGamesWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


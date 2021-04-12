/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class CKContainer, CKDatabase;

@interface WFCloudKitWebServiceRequest : NSObject {

	CKContainer* _container;
	CKDatabase* _database;

}

@property (nonatomic,readonly) CKContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                //@synthesize database=_database - In the implementation block
-(CKContainer *)container;
-(CKDatabase *)database;
-(id)databaseName;
-(id)initWithContainer:(id)arg1 database:(id)arg2 ;
-(id)fetchRecordsWithItemType:(Class)arg1 filter:(id)arg2 cacheKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)fetchProxiedRecordWithIdentifier:(id)arg1 possibleItemTypes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)queryWithItemType:(Class)arg1 filter:(id)arg2 ;
-(id)postJSON:(id)arg1 toURL:(id)arg2 cacheKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)getJSONFromURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)webServiceForRequestType:(unsigned long long)arg1 ;
-(id)pathComponentsForType:(unsigned long long)arg1 parameters:(id)arg2 ;
-(id)cloudKitEnvironment;
-(id)cloudKitAPIToken;
-(id)urlForType:(unsigned long long)arg1 parameters:(id)arg2 ;
-(id)recordsFromQueryResponse:(id)arg1 ;
-(id)extractRecordDictFromRecordIfNecessary:(id)arg1 recordType:(id)arg2 ;
-(void)parseRecord:(id)arg1 intoItem:(id)arg2 allKeys:(BOOL)arg3 ;
@end


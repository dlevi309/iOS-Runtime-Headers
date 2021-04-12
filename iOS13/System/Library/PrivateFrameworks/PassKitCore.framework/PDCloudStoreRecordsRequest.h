/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, CKQuery, NSArray, NSMutableArray;

@interface PDCloudStoreRecordsRequest : NSObject {

	BOOL _storeChangesInDatabase;
	BOOL _returnRecords;
	BOOL _useLastChangeToken;
	BOOL _shouldSaveToken;
	NSString* _groupName;
	NSString* _groupNameSuffix;
	long long _qualityOfService;
	unsigned long long _requestType;
	NSString* _zoneName;
	CKQuery* _ckQuery;
	NSArray* _recordsToSave;
	NSArray* _recordIDs;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (assign,nonatomic) BOOL storeChangesInDatabase;                      //@synthesize storeChangesInDatabase=_storeChangesInDatabase - In the implementation block
@property (assign,nonatomic) BOOL returnRecords;                               //@synthesize returnRecords=_returnRecords - In the implementation block
@property (nonatomic,retain) NSString * groupName;                             //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) NSString * groupNameSuffix;                       //@synthesize groupNameSuffix=_groupNameSuffix - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                       //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                   //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) BOOL useLastChangeToken;                          //@synthesize useLastChangeToken=_useLastChangeToken - In the implementation block
@property (assign,nonatomic) BOOL shouldSaveToken;                             //@synthesize shouldSaveToken=_shouldSaveToken - In the implementation block
@property (nonatomic,retain) NSString * zoneName;                              //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,retain) CKQuery * ckQuery;                                //@synthesize ckQuery=_ckQuery - In the implementation block
@property (nonatomic,retain) NSArray * recordsToSave;                          //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordIDs;                              //@synthesize recordIDs=_recordIDs - In the implementation block
-(id)description;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(NSString *)zoneName;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(unsigned long long)requestType;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)recordsToSave;
-(NSArray *)recordIDs;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(CKQuery *)ckQuery;
-(BOOL)returnRecords;
-(BOOL)useLastChangeToken;
-(BOOL)storeChangesInDatabase;
-(id)initWithRequestType:(unsigned long long)arg1 storeChanges:(BOOL)arg2 returnRecords:(BOOL)arg3 qualityOfService:(long long)arg4 groupName:(id)arg5 groupNameSuffix:(id)arg6 ;
-(void)setUseLastChangeToken:(BOOL)arg1 ;
-(void)setShouldSaveToken:(BOOL)arg1 ;
-(void)setCkQuery:(CKQuery *)arg1 ;
-(NSString *)groupNameSuffix;
-(void)setStoreChangesInDatabase:(BOOL)arg1 ;
-(void)setReturnRecords:(BOOL)arg1 ;
-(void)setGroupNameSuffix:(NSString *)arg1 ;
-(BOOL)shouldSaveToken;
@end


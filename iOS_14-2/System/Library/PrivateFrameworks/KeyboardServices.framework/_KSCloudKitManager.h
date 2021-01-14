/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@protocol OS_dispatch_queue, _KSCloudKitManagerDelegate;
@class NSObject, _KSRequestThrottle, CKRecordZone, CKContainer, CKDatabase, NSString;

@interface _KSCloudKitManager : NSObject {

	NSObject*<OS_dispatch_queue> _ckWorkQueue;
	NSObject*<OS_dispatch_queue> _dataQueue;
	_KSRequestThrottle* _accountChangeThrottle;
	_KSRequestThrottle* _fetchZoneThrottle;
	BOOL _recordZoneOperationInProgress;
	BOOL _subscriptionOperationInProgress;
	CKRecordZone* _recordZone;
	id<_KSCloudKitManagerDelegate> _delegate;
	CKContainer* _cloudKitContainer;
	CKDatabase* _cloudKitDatabase;
	CKDatabase* _publicDatabase;
	NSString* _recordZoneKey;
	NSString* _subscriptionKey;
	NSString* _lastKnownUserKey;

}

@property (nonatomic,retain) CKContainer * cloudKitContainer;                             //@synthesize cloudKitContainer=_cloudKitContainer - In the implementation block
@property (nonatomic,retain) CKDatabase * cloudKitDatabase;                               //@synthesize cloudKitDatabase=_cloudKitDatabase - In the implementation block
@property (nonatomic,retain) CKDatabase * publicDatabase;                                 //@synthesize publicDatabase=_publicDatabase - In the implementation block
@property (nonatomic,readonly) NSString * recordZoneKey;                                  //@synthesize recordZoneKey=_recordZoneKey - In the implementation block
@property (nonatomic,readonly) NSString * subscriptionKey;                                //@synthesize subscriptionKey=_subscriptionKey - In the implementation block
@property (nonatomic,readonly) NSString * lastKnownUserKey;                               //@synthesize lastKnownUserKey=_lastKnownUserKey - In the implementation block
@property (assign,nonatomic) BOOL recordZoneOperationInProgress;                          //@synthesize recordZoneOperationInProgress=_recordZoneOperationInProgress - In the implementation block
@property (assign,nonatomic) BOOL subscriptionOperationInProgress;                        //@synthesize subscriptionOperationInProgress=_subscriptionOperationInProgress - In the implementation block
@property (nonatomic,retain) CKRecordZone * recordZone;                                   //@synthesize recordZone=_recordZone - In the implementation block
@property (assign,nonatomic,__weak) id<_KSCloudKitManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)prepareContainerForID:(id)arg1 ;
-(void)setupAccountDidChange:(BOOL)arg1 ;
-(id)userIdentity;
-(void)setSubscriptionOperationInProgress:(BOOL)arg1 ;
-(id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3 ;
-(BOOL)subscriptionOperationInProgress;
-(void)copyFieldsFromRecord:(id)arg1 toRecord:(id)arg2 ;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(id<_KSCloudKitManagerDelegate>)delegate;
-(void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)needsDeviceToDevice;
-(void)addOperation:(id)arg1 priority:(unsigned long long)arg2 ;
-(id)initWithRecordZoneName:(id)arg1 ;
-(void)identityUpdated:(id)arg1 ;
-(void)resetZoneWithDelete:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)accountStatusDidChange:(id)arg1 ;
-(void)setupSubscription;
-(CKRecordZone *)recordZone;
-(void)_ckFetchRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_checkAccountStatusWithCompletionHandler:(/*^block*/id)arg1 withRetryCount:(unsigned long long)arg2 ;
-(NSString *)recordZoneKey;
-(NSString *)subscriptionKey;
-(id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3 encryptedFields:(id)arg4 ;
-(void)queryAccountStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<_KSCloudKitManagerDelegate>)arg1 ;
-(void)_inconvenientOperation:(id)arg1 ;
-(id)recordIDForName:(id)arg1 ;
-(void)setRecordZoneOperationInProgress:(BOOL)arg1 ;
-(BOOL)changeInUserAccountDetected;
-(id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4 encryptedFields:(id)arg5 ;
-(id)resolveConflicts:(id)arg1 ;
-(void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_ckSaveRecordZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_ckDeleteRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchPublicRecordsWithNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_submitFetchRecordsOperation:(id)arg1 withPriority:(unsigned long long)arg2 changeToken:(id)arg3 completionHandler:(/*^block*/id)arg4 retryCount:(unsigned long long)arg5 ;
-(NSString *)lastKnownUserKey;
-(void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(/*^block*/id)arg3 retryCount:(unsigned long long)arg4 ;
-(CKDatabase *)publicDatabase;
-(id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4 ;
-(id)initWithContainer:(id)arg1 recordZoneName:(id)arg2 ;
-(void)setupRecordZoneWithCompletionHandler:(/*^block*/id)arg1 ignoreDefaults:(BOOL)arg2 ;
-(void)setCloudKitDatabase:(CKDatabase *)arg1 ;
-(void)setCloudKitContainer:(CKContainer *)arg1 ;
-(CKContainer *)cloudKitContainer;
-(void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 retryCount:(unsigned long long)arg5 ;
-(CKDatabase *)cloudKitDatabase;
-(BOOL)recordZoneOperationInProgress;
-(void)dealloc;
-(BOOL)isAccountAvailable;
-(void)setPublicDatabase:(CKDatabase *)arg1 ;
-(void)setRecordZone:(CKRecordZone *)arg1 ;
@end


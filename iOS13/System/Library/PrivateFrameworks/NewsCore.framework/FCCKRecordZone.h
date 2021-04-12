/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCCKRecordZoneDelegate;
@class CKRecordZoneID, FCCKPrivateDatabase;

@interface FCCKRecordZone : NSObject {

	BOOL _zoneReady;
	CKRecordZoneID* _recordZoneID;
	FCCKPrivateDatabase* _database;
	id<FCCKRecordZoneDelegate> _delegate;

}

@property (nonatomic,retain) FCCKPrivateDatabase * database;                          //@synthesize database=_database - In the implementation block
@property (assign,nonatomic,__weak) id<FCCKRecordZoneDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * recordZoneID;                           //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (getter=isZoneReady) BOOL zoneReady;                                        //@synthesize zoneReady=_zoneReady - In the implementation block
-(id)description;
-(id<FCCKRecordZoneDelegate>)delegate;
-(void)setDelegate:(id<FCCKRecordZoneDelegate>)arg1 ;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCCKPrivateDatabase *)database;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
-(BOOL)isZoneReady;
-(void)setZoneReady:(BOOL)arg1 ;
-(void)performActionWithRecordZone:(/*^block*/id)arg1 ;
-(id)initWithDatabase:(id)arg1 delegate:(id)arg2 recordZoneID:(id)arg3 ;
-(void)fetchChangesWithChangeToken:(id)arg1 desiredKeys:(id)arg2 fetchAllChanges:(BOOL)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
@end


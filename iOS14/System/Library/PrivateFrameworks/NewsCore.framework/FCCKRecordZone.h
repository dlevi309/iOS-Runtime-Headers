/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(id<FCCKRecordZoneDelegate>)delegate;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(void)setDelegate:(id<FCCKRecordZoneDelegate>)arg1 ;
-(id)description;
-(void)setZoneReady:(BOOL)arg1 ;
-(void)performActionWithRecordZone:(/*^block*/id)arg1 ;
-(CKRecordZoneID *)recordZoneID;
-(FCCKPrivateDatabase *)database;
-(id)initWithDatabase:(id)arg1 delegate:(id)arg2 recordZoneID:(id)arg3 ;
-(void)fetchChangesWithChangeToken:(id)arg1 desiredKeys:(id)arg2 fetchAllChanges:(BOOL)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isZoneReady;
@end


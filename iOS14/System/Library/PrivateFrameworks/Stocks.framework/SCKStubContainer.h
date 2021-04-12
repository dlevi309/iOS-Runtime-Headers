/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKContainerProxying.h>

@class NSArray, NSMutableDictionary;

@interface SCKStubContainer : NSObject <SCKContainerProxying> {

	BOOL _accountInfoSupportsDeviceToDeviceEncryption;
	long long _modifyZonesErrorMode;
	unsigned long long _modifyZonesOperationCount;
	NSArray* _modifyZonesSavedZones;
	long long _zoneChangesErrorMode;
	/*^block*/id _willFinishZoneChanges;
	unsigned long long _zoneChangesOperationCount;
	long long _modifyRecordsErrorMode;
	/*^block*/id _willModifyRecords;
	unsigned long long _modifyRecordsOperationCount;
	NSArray* _modifyRecordsSavedRecords;
	unsigned long long _modifySubscriptionsOperationCount;
	NSArray* _modifySubscriptionsSavedSubscriptions;
	unsigned long long _databaseChangesOperationCount;
	NSArray* _databaseChangesOperationChangedZoneIDs;
	long long _accountInfoErrorMode;
	NSMutableDictionary* _zoneContentsByZoneID;

}

@property (nonatomic,retain) NSMutableDictionary * zoneContentsByZoneID;                          //@synthesize zoneContentsByZoneID=_zoneContentsByZoneID - In the implementation block
@property (assign,nonatomic) long long modifyZonesErrorMode;                                      //@synthesize modifyZonesErrorMode=_modifyZonesErrorMode - In the implementation block
@property (nonatomic,readonly) unsigned long long modifyZonesOperationCount;                      //@synthesize modifyZonesOperationCount=_modifyZonesOperationCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * modifyZonesSavedZones;                              //@synthesize modifyZonesSavedZones=_modifyZonesSavedZones - In the implementation block
@property (assign,nonatomic) long long zoneChangesErrorMode;                                      //@synthesize zoneChangesErrorMode=_zoneChangesErrorMode - In the implementation block
@property (nonatomic,copy) id willFinishZoneChanges;                                              //@synthesize willFinishZoneChanges=_willFinishZoneChanges - In the implementation block
@property (nonatomic,readonly) unsigned long long zoneChangesOperationCount;                      //@synthesize zoneChangesOperationCount=_zoneChangesOperationCount - In the implementation block
@property (assign,nonatomic) long long modifyRecordsErrorMode;                                    //@synthesize modifyRecordsErrorMode=_modifyRecordsErrorMode - In the implementation block
@property (nonatomic,copy) id willModifyRecords;                                                  //@synthesize willModifyRecords=_willModifyRecords - In the implementation block
@property (nonatomic,readonly) unsigned long long modifyRecordsOperationCount;                    //@synthesize modifyRecordsOperationCount=_modifyRecordsOperationCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * modifyRecordsSavedRecords;                          //@synthesize modifyRecordsSavedRecords=_modifyRecordsSavedRecords - In the implementation block
@property (nonatomic,readonly) unsigned long long modifySubscriptionsOperationCount;              //@synthesize modifySubscriptionsOperationCount=_modifySubscriptionsOperationCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * modifySubscriptionsSavedSubscriptions;              //@synthesize modifySubscriptionsSavedSubscriptions=_modifySubscriptionsSavedSubscriptions - In the implementation block
@property (nonatomic,readonly) unsigned long long databaseChangesOperationCount;                  //@synthesize databaseChangesOperationCount=_databaseChangesOperationCount - In the implementation block
@property (nonatomic,copy) NSArray * databaseChangesOperationChangedZoneIDs;                      //@synthesize databaseChangesOperationChangedZoneIDs=_databaseChangesOperationChangedZoneIDs - In the implementation block
@property (assign,nonatomic) BOOL accountInfoSupportsDeviceToDeviceEncryption;                    //@synthesize accountInfoSupportsDeviceToDeviceEncryption=_accountInfoSupportsDeviceToDeviceEncryption - In the implementation block
@property (assign,nonatomic) long long accountInfoErrorMode;                                      //@synthesize accountInfoErrorMode=_accountInfoErrorMode - In the implementation block
-(id)init;
-(void)accountInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addDatabaseOperation:(id)arg1 ;
-(NSMutableDictionary *)zoneContentsByZoneID;
-(id)contentsOfZone:(id)arg1 ;
-(long long)modifyZonesErrorMode;
-(id)_errorForErrorMode:(long long)arg1 ;
-(NSArray *)modifyZonesSavedZones;
-(long long)zoneChangesErrorMode;
-(id)_errorForErrorMode:(long long)arg1 itemIDs:(id)arg2 ;
-(id)willFinishZoneChanges;
-(id)willModifyRecords;
-(long long)modifyRecordsErrorMode;
-(NSArray *)modifyRecordsSavedRecords;
-(NSArray *)modifySubscriptionsSavedSubscriptions;
-(NSArray *)databaseChangesOperationChangedZoneIDs;
-(long long)accountInfoErrorMode;
-(BOOL)accountInfoSupportsDeviceToDeviceEncryption;
-(long long)_ckErrorCodeForErrorMode:(long long)arg1 ;
-(void)setContentsOfZone:(id)arg1 toRecords:(id)arg2 ;
-(id)contentsOfZone:(id)arg1 withType:(id)arg2 ;
-(id)recordWithName:(id)arg1 inZone:(id)arg2 ;
-(void)setModifyZonesErrorMode:(long long)arg1 ;
-(unsigned long long)modifyZonesOperationCount;
-(void)setZoneChangesErrorMode:(long long)arg1 ;
-(void)setWillFinishZoneChanges:(id)arg1 ;
-(unsigned long long)zoneChangesOperationCount;
-(void)setModifyRecordsErrorMode:(long long)arg1 ;
-(void)setWillModifyRecords:(id)arg1 ;
-(unsigned long long)modifyRecordsOperationCount;
-(unsigned long long)modifySubscriptionsOperationCount;
-(unsigned long long)databaseChangesOperationCount;
-(void)setDatabaseChangesOperationChangedZoneIDs:(NSArray *)arg1 ;
-(void)setAccountInfoSupportsDeviceToDeviceEncryption:(BOOL)arg1 ;
-(void)setAccountInfoErrorMode:(long long)arg1 ;
-(void)setZoneContentsByZoneID:(NSMutableDictionary *)arg1 ;
@end

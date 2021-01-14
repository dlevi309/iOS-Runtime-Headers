/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCKRecordZoneDelegate.h>

@class FCCKPrivateDatabase, NSArray, NSDictionary, FCAsyncSerialQueue, NSString;

@interface FCCKRecordZoneManager : NSObject <FCCKRecordZoneDelegate> {

	FCCKPrivateDatabase* _database;
	NSArray* _recordZoneIDs;
	NSDictionary* _fcRecordZonesByName;
	NSDictionary* _ckRecordZonesByID;
	FCAsyncSerialQueue* _serialQueue;

}

@property (nonatomic,retain) FCCKPrivateDatabase * database;                  //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDs;                         //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * fcRecordZonesByName;              //@synthesize fcRecordZonesByName=_fcRecordZonesByName - In the implementation block
@property (nonatomic,retain) NSDictionary * ckRecordZonesByID;                //@synthesize ckRecordZonesByID=_ckRecordZonesByID - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * serialQueue;                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)recordZoneIDs;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(id)recordZoneWithName:(id)arg1 ;
-(FCAsyncSerialQueue *)serialQueue;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(NSDictionary *)ckRecordZonesByID;
-(void)setSerialQueue:(FCAsyncSerialQueue *)arg1 ;
-(void)prepareRecordZonesForUseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)ensureRecordZoneExistsWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFcRecordZonesByName:(NSDictionary *)arg1 ;
-(id)initWithDatabase:(id)arg1 recordZoneNames:(id)arg2 ;
-(NSDictionary *)fcRecordZonesByName;
-(FCCKPrivateDatabase *)database;
-(void)setCkRecordZonesByID:(NSDictionary *)arg1 ;
@end


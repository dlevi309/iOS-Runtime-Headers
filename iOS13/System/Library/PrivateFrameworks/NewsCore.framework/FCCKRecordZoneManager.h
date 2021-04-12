/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCAsyncSerialQueue *)serialQueue;
-(FCCKPrivateDatabase *)database;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setSerialQueue:(FCAsyncSerialQueue *)arg1 ;
-(void)ensureRecordZoneExistsWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDatabase:(id)arg1 recordZoneNames:(id)arg2 ;
-(id)recordZoneWithName:(id)arg1 ;
-(void)prepareRecordZonesForUseWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)fcRecordZonesByName;
-(NSDictionary *)ckRecordZonesByID;
-(void)setCkRecordZonesByID:(NSDictionary *)arg1 ;
-(void)setFcRecordZonesByName:(NSDictionary *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HMBCloudStateModel.h>

@class CKDatabase, NSData, HMBCloudID, NSDate, NSSet;

@interface HMBCloudDatabaseStateModel : HMBCloudStateModel {

	CKDatabase* _database;

}

@property (nonatomic,retain) NSData * subscriptionsData; 
@property (assign,nonatomic,__weak) CKDatabase * database;                  //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) HMBCloudID * cloudID; 
@property (nonatomic,retain) NSDate * lastAdministrativeFetch; 
@property (nonatomic,copy) NSSet * subscriptions; 
+(id)hmbProperties;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(CKDatabase *)database;
-(NSSet *)subscriptions;
-(void)setSubscriptions:(NSSet *)arg1 ;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSubscriptions:(NSSet *)arg1 ;
-(NSSet *)subscriptions;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(CKDatabase *)database;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 ;
@end


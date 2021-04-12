/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class NSString, NSMutableDictionary;

@interface DABabysitter : NSObject {

	NSString* _buildVersion;
	NSMutableDictionary* _refreshingWaiters;
	NSMutableDictionary* _failedWaiters;
	NSMutableDictionary* _restrictedWaiters;

}

@property (nonatomic,retain) NSString * buildVersion;                              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * refreshingWaiters;              //@synthesize refreshingWaiters=_refreshingWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * failedWaiters;                  //@synthesize failedWaiters=_failedWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * restrictedWaiters;              //@synthesize restrictedWaiters=_restrictedWaiters - In the implementation block
+(id)sharedBabysitter;
-(id)init;
-(void)_reloadBabysitterProperties;
-(void)giveAccountWithIDAnotherChance:(id)arg1 ;
-(BOOL)accountWithIDShouldContinue:(id)arg1 ;
-(void)_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2 ;
-(BOOL)accountShouldContinue:(id)arg1 ;
-(void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(void)_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(BOOL)registerAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(NSMutableDictionary *)refreshingWaiters;
-(void)setRefreshingWaiters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)failedWaiters;
-(void)setFailedWaiters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)restrictedWaiters;
-(void)setRestrictedWaiters:(NSMutableDictionary *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(NSString *)buildVersion;
-(id)_init;
-(void)dealloc;
@end


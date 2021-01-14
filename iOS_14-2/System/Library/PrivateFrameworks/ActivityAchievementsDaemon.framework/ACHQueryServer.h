/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/ACHAchievementStoreObserving.h>

@class ACHAchievementStore, NSString;

@interface ACHQueryServer : HDQueryServer <ACHAchievementStoreObserving> {

	ACHAchievementStore* _achievementStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)queryClass;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_stop;
-(id)_clientProxy;
-(void)achievementStore:(id)arg1 didAddAchievements:(id)arg2 ;
-(void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2 ;
-(void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2 ;
-(void)achievementStoreDidFinishInitialFetch:(id)arg1 ;
@end


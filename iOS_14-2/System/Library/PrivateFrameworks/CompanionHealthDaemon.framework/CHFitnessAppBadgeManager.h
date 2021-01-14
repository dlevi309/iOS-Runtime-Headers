/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface CHFitnessAppBadgeManager : NSObject {

	NSHashTable* _providers;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)init;
-(long long)_badgeCount;
-(long long)_loadBadgeCount;
-(void)unregisterProvider:(id)arg1 ;
-(void)_storeBadgeCount:(long long)arg1 ;
-(void)_launchFitnessApp;
-(void)requestBadgeUpdate;
-(void)registerProvider:(id)arg1 ;
@end


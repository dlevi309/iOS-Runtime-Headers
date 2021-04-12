/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface CHFitnessAppBadgeManager : NSObject {

	NSHashTable* _providers;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)init;
-(void)registerProvider:(id)arg1 ;
-(void)unregisterProvider:(id)arg1 ;
-(void)requestBadgeUpdate;
@end


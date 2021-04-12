/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/


@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject {

	NSMapTable* _concernedRemindersPartyToBlockMap;

}
+(id)sharedDBWatcher;
-(id)init;
-(void)registerConcernedRemindersParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedRemindersParty:(id)arg1 ;
-(void)remindersDatabaseDidChange;
@end


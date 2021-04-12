/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/


@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject {

	NSMapTable* _concernedRemindersPartyToBlockMap;

}
+(id)sharedDBWatcher;
-(void)remindersDatabaseDidChange;
-(id)init;
-(void)registerConcernedRemindersParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedRemindersParty:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <HearingCore/HCDatabaseManager.h>

@class CHManager;

@interface RTTDatabaseManager : HCDatabaseManager {

	CHManager* _callHistoryManager;

}
+(id)sharedManager;
-(void)logMessage:(id)arg1 ;
-(id)init;
-(BOOL)deleteConversationWithCallUID:(id)arg1 ;
-(id)containerIdentifier;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(id)cloudKitContainer;
-(id)conversationForCallUID:(id)arg1 ;
-(BOOL)saveConversation:(id)arg1 ;
-(BOOL)contactIDIsTTYContact:(id)arg1 ;
-(BOOL)contactPathWasUsedForTTY:(id)arg1 ;
-(void)callHistoryDBDidChange:(id)arg1 ;
-(void)_callHistoryDBDidChange:(id)arg1 ;
-(BOOL)deleteConversationsWithCallUIDs:(id)arg1 ;
-(id)managedObjectModelName;
@end


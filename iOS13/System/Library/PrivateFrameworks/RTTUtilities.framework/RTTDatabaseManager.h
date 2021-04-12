/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <HearingCore/HCDatabaseManager.h>

@class CHManager;

@interface RTTDatabaseManager : HCDatabaseManager {

	CHManager* _callHistoryManager;

}
+(id)sharedManager;
-(id)init;
-(id)containerIdentifier;
-(void)logMessage:(id)arg1 ;
-(id)cloudKitContainer;
-(id)conversationForCallUID:(id)arg1 ;
-(BOOL)saveConversation:(id)arg1 ;
-(BOOL)deleteConversationWithCallUID:(id)arg1 ;
-(BOOL)contactIDIsTTYContact:(id)arg1 ;
-(BOOL)contactPathWasUsedForTTY:(id)arg1 ;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(void)callHistoryDBDidChange:(id)arg1 ;
-(BOOL)deleteConversationsWithCallUIDs:(id)arg1 ;
-(id)managedObjectModelName;
@end


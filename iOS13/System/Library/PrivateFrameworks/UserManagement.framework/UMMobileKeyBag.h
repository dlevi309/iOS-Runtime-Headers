/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


#import <UserManagement/UserManagement-Structs.h>
@interface UMMobileKeyBag : NSObject
+(void)initialize;
+(BOOL)inSyncBubble;
+(BOOL)isMultiUser;
+(id)currentPersona;
+(id)currentUser;
+(int)_foregroundUID;
+(id)_userAttributesForUID:(unsigned)arg1 outError:(id*)arg2 ;
+(double)passcodeBackOffIntervalForUser:(id)arg1 ;
+(void)_setPasscodeTypeOnUser:(id)arg1 withPasscodeData:(id)arg2 ;
+(id)personaSpecForUser:(id)arg1 ;
+(void)_setAttributes:(id)arg1 onUser:(id)arg2 ;
+(void)_handleAttributeAccessCFError:(CFErrorRef)arg1 outError:(id*)arg2 ;
+(id)_mutablePersonaSpecBase;
+(id)_uidDictForUser:(id)arg1 ;
+(id)currentSyncBubbleUser;
+(id)allSyncBubbleUsers;
+(BOOL)_start:(BOOL)arg1 syncBubbleForUser:(id)arg2 outError:(id*)arg3 ;
+(unsigned long long)userType;
+(unsigned long long)maxNumberOfUsers;
+(unsigned long long)userQuotaSize;
+(unsigned)lastLoggedInUID;
+(id)loginUser;
+(id)lastLoggedInUser;
+(id)allUsers;
+(BOOL)adoptPersonaVoucherForAccoutID:(id)arg1 outError:(id*)arg2 ;
+(id)currentUserSwitchContext;
+(void)currentUserSwitchContextHasBeenUsed;
+(id)loadUser:(id)arg1 withPasscodeData:(id)arg2 ;
+(id)deleteUser:(id)arg1 ;
+(id)userFromAttributes:(id)arg1 ;
+(BOOL)fetchAttributesForUser:(id)arg1 outError:(id*)arg2 ;
+(BOOL)isLoginSession;
+(void)updateLoginSessionType;
+(BOOL)writeAttributesToDiskForUser:(id)arg1 outError:(id*)arg2 ;
+(id)taskFromDictionaryRepresentation:(id)arg1 ;
+(id)dictionaryRepresentationOfTask:(id)arg1 ;
+(id)queuedSyncBubbleUsers;
+(id)syncBubbleMachServiceNamesForUser:(id)arg1 ;
+(BOOL)startSyncBubbleForUser:(id)arg1 outError:(id*)arg2 ;
+(BOOL)stopSyncBubbleForUser:(id)arg1 outError:(id*)arg2 ;
+(BOOL)clearSyncBubblesWithOutError:(id*)arg1 ;
@end


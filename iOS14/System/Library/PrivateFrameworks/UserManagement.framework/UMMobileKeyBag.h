/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


#import <UserManagement/UserManagement-Structs.h>
@interface UMMobileKeyBag : NSObject
+(void)initialize;
+(id)currentUserSwitchContext;
+(id)syncBubbleMachServiceNamesForUser:(id)arg1 ;
+(void)_setPasscodeTypeOnUser:(id)arg1 withPasscodeData:(id)arg2 ;
+(id)loginUser;
+(id)currentUser;
+(id)dictionaryRepresentationOfTask:(id)arg1 ;
+(BOOL)inSyncBubble;
+(id)userFromAttributes:(id)arg1 ;
+(id)deleteUser:(id)arg1 ;
+(void)currentUserSwitchContextHasBeenUsed;
+(id)lastLoggedInUser;
+(BOOL)startSyncBubbleForUser:(id)arg1 outError:(id*)arg2 ;
+(BOOL)writeAttributesToDiskForUser:(id)arg1 outError:(id*)arg2 ;
+(BOOL)stopSyncBubbleForUser:(id)arg1 outError:(id*)arg2 ;
+(id)loadUser:(id)arg1 withPasscodeData:(id)arg2 ;
+(BOOL)adoptPersonaVoucherForAccoutID:(id)arg1 outError:(id*)arg2 ;
+(id)_userAttributesForUID:(unsigned)arg1 outError:(id*)arg2 ;
+(unsigned long long)maxNumberOfUsers;
+(void)_handleAttributeAccessCFError:(CFErrorRef)arg1 outError:(id*)arg2 ;
+(unsigned)lastLoggedInUID;
+(int)_foregroundUID;
+(id)queuedSyncBubbleUsers;
+(id)currentSyncBubbleUser;
+(BOOL)clearSyncBubblesWithOutError:(id*)arg1 ;
+(BOOL)isMultiUser;
+(id)allUsers;
+(double)passcodeBackOffIntervalForUser:(id)arg1 ;
+(id)_mutablePersonaSpecBase;
+(id)personaSpecForUser:(id)arg1 ;
+(id)allSyncBubbleUsers;
+(id)_uidDictForUser:(id)arg1 ;
+(BOOL)_start:(BOOL)arg1 syncBubbleForUser:(id)arg2 outError:(id*)arg3 ;
+(BOOL)fetchAttributesForUser:(id)arg1 outError:(id*)arg2 ;
+(unsigned long long)userType;
+(void)updateLoginSessionType;
+(id)taskFromDictionaryRepresentation:(id)arg1 ;
+(id)currentPersona;
+(void)_setAttributes:(id)arg1 onUser:(id)arg2 ;
+(unsigned long long)userQuotaSize;
+(BOOL)isLoginSession;
@end


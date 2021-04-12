/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class WBSSavedPasswordStore, WBSAutoFillQuirksManager;

@interface WBSSavedPasswordAuditor : NSObject {

	WBSSavedPasswordStore* _savedPasswordStore;
	WBSAutoFillQuirksManager* _autoFillQuirksManager;

}

@property (nonatomic,readonly) WBSSavedPasswordStore * savedPasswordStore;                    //@synthesize savedPasswordStore=_savedPasswordStore - In the implementation block
@property (nonatomic,readonly) WBSAutoFillQuirksManager * autoFillQuirksManager;              //@synthesize autoFillQuirksManager=_autoFillQuirksManager - In the implementation block
@property (nonatomic,readonly) BOOL passwordStoreHasDuplicatedPasswords; 
-(id)init;
-(id)initWithSavedPasswordStore:(id)arg1 autoFillQuirksManager:(id)arg2 ;
-(BOOL)savedPasswordIsReused:(id)arg1 ;
-(id)savedPasswordsWithDuplicatedPassword:(id)arg1 ;
-(WBSAutoFillQuirksManager *)autoFillQuirksManager;
-(BOOL)_savedPasswordQualifiesForReuseAuditing:(id)arg1 ;
-(BOOL)_passwordIsReused:(id)arg1 byOtherSavedPassword:(id)arg2 ;
-(BOOL)passwordStoreHasDuplicatedPasswords;
-(id)duplicatePasswordsInPasswords:(id)arg1 ;
-(WBSSavedPasswordStore *)savedPasswordStore;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)savedPasswordIsReused:(id)arg1 ;
-(id)savedPasswordsWithDuplicatedPassword:(id)arg1 ;
-(id)duplicatePasswordsInPasswords:(id)arg1 ;
-(WBSSavedPasswordStore *)savedPasswordStore;
-(WBSAutoFillQuirksManager *)autoFillQuirksManager;
-(id)init;
-(BOOL)_savedPasswordQualifiesForReuseAuditing:(id)arg1 ;
-(BOOL)_passwordIsReused:(id)arg1 byOtherSavedPassword:(id)arg2 ;
-(id)initWithSavedPasswordStore:(id)arg1 autoFillQuirksManager:(id)arg2 ;
-(BOOL)passwordStoreHasDuplicatedPasswords;
@end


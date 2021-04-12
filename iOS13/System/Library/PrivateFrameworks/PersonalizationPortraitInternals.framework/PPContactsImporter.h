/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@interface PPContactsImporter : NSObject
+(id)defaultInstance;
-(id)init;
-(void)_registerForNotifications;
-(void)importContactsDataWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(BOOL)importScoredContact:(id)arg1 contactsIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_entitiesForScoredContact:(id)arg1 ;
-(void)_stashImportedContactsIdentifiers:(id)arg1 ;
-(void)_removeStashedImportedContacts;
-(id)_loadContactIdentifiersAlreadyImportedInPastDay;
@end


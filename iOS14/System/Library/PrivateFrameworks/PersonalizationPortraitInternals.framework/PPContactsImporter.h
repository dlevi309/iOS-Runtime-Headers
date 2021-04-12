/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class PPSQLDatabase, PPLocalContactStore, PPLocalNamedEntityStore, NSString;

@interface PPContactsImporter : NSObject <CNChangeHistoryEventVisitor> {

	PPSQLDatabase* _db;
	PPLocalContactStore* _contactStore;
	PPLocalNamedEntityStore* _namedEntityStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldImport;
+(id)defaultInstance;
-(void)_registerForNotifications;
-(void)_updateContactWithIdentifier:(id)arg1 ;
-(id)_loadContactIdentifiersAlreadyImportedInPastDay;
-(BOOL)_deleteAndReAddWholeContact:(id)arg1 contactIdentifier:(id)arg2 ;
-(void)_stashImportedContactsIdentifiers:(id)arg1 ;
-(id)init;
-(void)importContactsDataWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(id)_entitiesForScoredContact:(id)arg1 ;
-(void)_addContactWithIdentifier:(id)arg1 ;
-(void)_deleteContactWithIdentifier:(id)arg1 ;
-(BOOL)_handleNotificationWithError:(id*)arg1 ;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(id)_sourceForContactWithContactIdentifier:(id)arg1 ;
-(id)_scoredContactWithContactIdentifier:(id)arg1 ;
-(BOOL)_donateScoredNamedEntities:(id)arg1 source:(id)arg2 error:(id*)arg3 ;
-(BOOL)importScoredContact:(id)arg1 contactsIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)_removeStashedImportedContacts;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
@end


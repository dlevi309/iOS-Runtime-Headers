/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Phone.assistantBundle/Phone
*/

#import <SAObjects/SAPhoneSearch.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSSet, VMVoicemailManager, CHManager, NSMutableDictionary, NSArray, NSString;

@interface PHSearchRequest : SAPhoneSearch <AFServiceCommand> {

	NSSet* _specifiedContactIdentifiers;
	VMVoicemailManager* _voicemailManager;
	CHManager* _recentsManager;
	NSMutableDictionary* _contactsByVoicemailIdentifier;

}

@property (nonatomic,retain) VMVoicemailManager * voicemailManager;                              //@synthesize voicemailManager=_voicemailManager - In the implementation block
@property (nonatomic,retain) CHManager * recentsManager;                                         //@synthesize recentsManager=_recentsManager - In the implementation block
@property (nonatomic,copy,readonly) NSArray * voicemails; 
@property (nonatomic,copy,readonly) NSArray * recentCalls; 
@property (nonatomic,readonly) BOOL didSpecifyContacts; 
@property (nonatomic,copy,readonly) NSSet * specifiedContactIdentifiers;                         //@synthesize specifiedContactIdentifiers=_specifiedContactIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * contactsByVoicemailIdentifier;              //@synthesize contactsByVoicemailIdentifier=_contactsByVoicemailIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CHManager *)recentsManager;
-(id)initWithDictionary:(id)arg1 ;
-(void)setRecentsManager:(CHManager *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)recentCalls;
-(NSArray *)voicemails;
-(VMVoicemailManager *)voicemailManager;
-(id)labelForPhoneNumber:(id)arg1 ;
-(id)labelForEmailAddress:(id)arg1 ;
-(NSMutableDictionary *)contactsByVoicemailIdentifier;
-(id)personFromRawAddress:(id)arg1 ;
-(id)typedDataForRawAddress:(id)arg1 ;
-(BOOL)didSpecifyContacts;
-(NSSet *)specifiedContactIdentifiers;
-(id)voicemailFilterPredicate;
-(void)cacheContactsForVoicemails:(id)arg1 ;
-(id)phoneVoiceMailFromVMVoicemail:(id)arg1 ;
-(id)recentCallsFilterPredicate;
-(id)phoneCallHistoryFromRecentCall:(id)arg1 ;
-(void)setVoicemailManager:(VMVoicemailManager *)arg1 ;
@end


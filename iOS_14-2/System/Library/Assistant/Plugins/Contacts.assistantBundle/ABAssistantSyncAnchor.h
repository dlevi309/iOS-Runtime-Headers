/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
*/


@class NSString;

@interface ABAssistantSyncAnchor : NSObject {

	int _contactLegacyIdentifier;
	long long _sequenceNumber;

}

@property (nonatomic,readonly) long long sequenceNumber;                                              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) int contactLegacyIdentifier;                                           //@synthesize contactLegacyIdentifier=_contactLegacyIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL shouldResetSync; 
@property (nonatomic,readonly) BOOL shouldFullSync; 
@property (nonatomic,readonly) BOOL shouldResumePreviousFullSync; 
@property (nonatomic,readonly) BOOL shouldClearChangeHistoryForPreviouslySyncedContacts; 
+(id)anchorWithString:(id)arg1 forContactStore:(id)arg2 ;
+(id)stringValueWithSequenceNumber:(long long)arg1 contactLegacyIdentifier:(int)arg2 ;
+(id)stringValueForFullSyncWithContactLegacyIdentifier:(int)arg1 ;
-(id)init;
-(id)shortDescription;
-(long long)sequenceNumber;
-(NSString *)stringValue;
-(id)description;
-(id)initWithSequenceNumber:(long long)arg1 contactLegacyIdentifier:(int)arg2 ;
-(BOOL)shouldFullSync;
-(BOOL)isOlderThanAnchor:(id)arg1 ;
-(void)resetSync;
-(BOOL)shouldResetSync;
-(BOOL)shouldClearChangeHistoryForPreviouslySyncedContacts;
-(BOOL)shouldResumePreviousFullSync;
-(int)contactLegacyIdentifier;
@end


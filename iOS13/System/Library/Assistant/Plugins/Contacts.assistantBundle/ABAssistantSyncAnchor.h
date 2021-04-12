/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)stringValue;
-(long long)sequenceNumber;
-(id)shortDescription;
-(void)resetSync;
-(id)initWithSequenceNumber:(long long)arg1 contactLegacyIdentifier:(int)arg2 ;
-(BOOL)shouldFullSync;
-(BOOL)isOlderThanAnchor:(id)arg1 ;
-(BOOL)shouldResetSync;
-(BOOL)shouldClearChangeHistoryForPreviouslySyncedContacts;
-(BOOL)shouldResumePreviousFullSync;
-(int)contactLegacyIdentifier;
@end


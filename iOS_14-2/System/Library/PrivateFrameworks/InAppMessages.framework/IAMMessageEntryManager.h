/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/


@class NSDictionary, NSArray, NSString;

@interface IAMMessageEntryManager : NSObject {

	NSDictionary* _messageEntryByIdentifier;
	NSDictionary* _priorityMessageEntryByIdentifier;
	NSDictionary* _messageEntriesByEventTriggers;
	NSDictionary* _messageEntriesByContextPropertyTriggers;
	NSDictionary* _messageEntriesByUnknownKindTriggers;
	NSDictionary* _messageEntriesByTargetIdentifier;
	NSArray* _messageEntries;
	NSString* _modalTargetIdentifier;

}

@property (nonatomic,copy) NSArray * messageEntries;                      //@synthesize messageEntries=_messageEntries - In the implementation block
@property (nonatomic,copy) NSString * modalTargetIdentifier;              //@synthesize modalTargetIdentifier=_modalTargetIdentifier - In the implementation block
+(id)targetIdentifiersForMessageEntries:(id)arg1 ;
+(void)_addMessageEntry:(id)arg1 toTriggerKeyDictionary:(id)arg2 atKey:(id)arg3 ;
+(id)messageEntries:(id)arg1 withSatisfiedPresentationTriggerForTriggerContext:(id)arg2 ;
+(id)uniqueMessageEntriesInMessageEntriesByTrigger:(id)arg1 ;
-(id)messageEntriesByTriggerForEventContext:(id)arg1 ;
-(void)addPriorityMessageEntry:(id)arg1 ;
-(NSString *)modalTargetIdentifier;
-(void)setModalTargetIdentifier:(NSString *)arg1 ;
-(void)_updateMessageIndexes;
-(id)initWithModalTargetIdentifier:(id)arg1 ;
-(void)setMessageEntries:(NSArray *)arg1 ;
-(id)messageEntryForIdentifier:(id)arg1 ;
-(id)priorityMessageEntryForIdentifier:(id)arg1 ;
-(id)messageEntriesForTargetIdentifier:(id)arg1 ;
-(id)messageEntriesForContextPropertiesContext:(id)arg1 ;
-(NSArray *)messageEntries;
@end


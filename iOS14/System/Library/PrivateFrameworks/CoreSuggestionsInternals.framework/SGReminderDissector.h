/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>
#import <libobjc.A.dylib/SGTextMessageProcessing.h>

@class NSMutableDictionary, RTRoutineManager, NSString;

@interface SGReminderDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {

	NSMutableDictionary* _conversations;
	RTRoutineManager* _rtRoutineManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isReminderDueDateComponentsInPast:(id)arg1 givenReferenceDate:(id)arg2 allDay:(BOOL)arg3 ;
+(id)enrichedTaggedCharacterRangesFromTaggedCharacterRanges:(id)arg1 messageIsSent:(BOOL)arg2 ;
+(id)getContactIdentifierForName:(id)arg1 andEmail:(id)arg2 ifMatchingPredicate:(/*^block*/id)arg3 ;
+(id)enrichedTaggedCharacterRangesFromEntity:(id)arg1 forMessage:(id)arg2 ;
-(id)init;
-(void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)_reminderMessageForTextMessage:(id)arg1 withEntity:(id)arg2 extractionModel:(id)arg3 processingLanguage:(id)arg4 preprocessing:(BOOL)arg5 ;
-(BOOL)isValidTextMessageForProcessing:(id)arg1 ;
-(id)extractReminderFromMailMessage:(id)arg1 entity:(id)arg2 ;
-(id)extractReminderFromOwnedMailMessage:(id)arg1 entity:(id)arg2 ;
-(id)initWithConversations:(id)arg1 rtRoutineManager:(id)arg2 ;
-(BOOL)mailAddressIsAccountOwner:(id)arg1 ;
-(id)_testReminder:(id)arg1 entity:(id)arg2 ;
-(id)_detectedReminderEnrichmentFromReminderMessage:(id)arg1 parentEntity:(id)arg2 language:(id)arg3 parentMessage:(id)arg4 startTimeProcessing:(unsigned long long)arg5 ;
-(id)extractReminderFromTextMessage:(id)arg1 entity:(id)arg2 store:(id)arg3 ;
-(BOOL)isAllDay:(id)arg1 ;
-(id)dueDateComponentsFromMessages:(id)arg1 ;
-(id)dueLocationFromMessages:(id)arg1 ;
-(id)reminderTitleFromMessages:(id)arg1 forLanguage:(id)arg2 ;
-(id)reminderTitleForContent:(id)arg1 ;
-(id)_validateDueDateComponents:(id)arg1 dueLocation:(id)arg2 forReminderMessages:(id)arg3 ;
-(id)processingLanguageForContent:(id)arg1 ;
-(id)fetchLocationOfInterestByType:(long long)arg1 name:(id)arg2 ;
-(id)storageLocationFromDueLocation:(id)arg1 ;
-(id)_reminderEnrichmentWithTitle:(id)arg1 dueDateComponents:(id)arg2 dueLocationType:(unsigned char)arg3 dueLocation:(id)arg4 dueLocationTrigger:(unsigned char)arg5 sourceURL:(id)arg6 reminderStatus:(unsigned char)arg7 parentEntity:(id)arg8 parentMessage:(id)arg9 allDay:(BOOL)arg10 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)defaultDueDateComponentsFromMessages:(id)arg1 ;
-(BOOL)_isTestMessage:(id)arg1 ;
-(id)conversations;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGExtractionDocument.h>

@class SGMessage, SGPipelineEntity, NSArray, SGDuplicateKey;

@interface SGReminderMessage : SGExtractionDocument {

	SGMessage* _message;
	SGPipelineEntity* _entity;
	NSArray* _plainTextDetectedData;
	SGDuplicateKey* _extractedReminderDuplicateKey;

}

@property (nonatomic,retain) SGMessage * message;                                         //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) SGPipelineEntity * entity;                                   //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSArray * plainTextDetectedData;                             //@synthesize plainTextDetectedData=_plainTextDetectedData - In the implementation block
@property (nonatomic,retain) SGDuplicateKey * extractedReminderDuplicateKey;              //@synthesize extractedReminderDuplicateKey=_extractedReminderDuplicateKey - In the implementation block
+(BOOL)excludedContent:(id)arg1 ;
+(id)detectedTitleInModelOutput:(id)arg1 enrichedTaggedCharacterRanges:(id)arg2 textContent:(id)arg3 language:(id)arg4 ;
+(BOOL)tokensMatchedInContent:(id)arg1 content:(id)arg2 ;
+(id)triggerOptionalTokens;
+(BOOL)isConfirmationOptionalForContent:(id)arg1 ;
+(BOOL)shouldAddTitlePrefixForContent:(id)arg1 ;
+(id)titlePrependForActionVerbIndexRange:(NSRange)arg1 enrichedTaggedCharacterRanges:(id)arg2 language:(id)arg3 content:(id)arg4 ;
+(id)frenchPrependForEnrichedTaggedCharacterRanges:(id)arg1 actionVerbIndexRange:(NSRange)arg2 ;
+(BOOL)validActionVerbIndexRange:(NSRange)arg1 enrichedTaggedCharacterRanges:(id)arg2 ;
+(BOOL)validObjectCoreIndexRange:(NSRange)arg1 enrichedTaggedCharacterRanges:(id)arg2 ;
+(id)posTaggerNouns;
+(BOOL)validModelOutput:(id)arg1 error:(id*)arg2 ;
+(BOOL)enrichedTaggedCharacterRangesContainsProfanity:(id)arg1 ;
+(id)confirmationOptionalTokens;
+(id)excludeList;
+(id)titlePrefixTokens;
+(id)regexFromJoinedArray:(id)arg1 wordBoundary:(id)arg2 ;
+(id)searchTokensForReminderTitle:(id)arg1 ;
-(void)setMessage:(SGMessage *)arg1 ;
-(void)setEntity:(SGPipelineEntity *)arg1 ;
-(SGMessage *)message;
-(SGPipelineEntity *)entity;
-(id)dueLocation;
-(BOOL)hasTrigger;
-(id)initWithMessage:(id)arg1 entity:(id)arg2 enrichedTaggedCharacterRanges:(id)arg3 modelOutput:(id)arg4 ;
-(id)initWithMessage:(id)arg1 plainTextDetectedData:(id)arg2 enrichedTaggedCharacterRanges:(id)arg3 modelOutput:(id)arg4 ;
-(BOOL)isConfirmation;
-(BOOL)isRejection;
-(BOOL)isProposal;
-(BOOL)isTriggerOptional;
-(id)detectedTitleForLanguage:(id)arg1 ;
-(id)dueDateDataDetectorMatches;
-(id)detectedDueDateComponents;
-(id)_labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2 ;
-(NSArray *)plainTextDetectedData;
-(void)setPlainTextDetectedData:(NSArray *)arg1 ;
-(SGDuplicateKey *)extractedReminderDuplicateKey;
-(void)setExtractedReminderDuplicateKey:(SGDuplicateKey *)arg1 ;
@end


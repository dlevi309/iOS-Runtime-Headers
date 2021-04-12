/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <libobjc.A.dylib/EDSearchableCriterion.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, EFMutableInt64Set;

@interface MFMessageCriterion : NSObject <EDSearchableCriterion, NSCopying> {

	NSString* _criterionIdentifier;
	int _qualifier;
	long long _type;
	NSString* _name;
	NSString* _uniqueId;
	NSString* _expression;
	NSArray* _criteria;
	int _dateUnitType;
	unsigned _allCriteriaMustBeSatisfied : 1;
	unsigned _dateIsRelative : 1;
	unsigned _includeRelatedMessages : 1;
	NSArray* _requiredHeaders;
	BOOL _preferFullTextSearch;
	BOOL _useFlaggedForUnreadCount;
	BOOL _expressionIsSanitized;
	BOOL _includeRemoteBodyContent;
	NSArray* _expressionLanguages;
	EFMutableInt64Set* _libraryIdentifiers;

}

@property (getter=isFullTextSearchableCriterion,nonatomic,readonly) BOOL fullTextSearchableCriterion; 
@property (nonatomic,readonly) NSString * spotlightQueryString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long criterionType; 
@property (nonatomic,retain) NSString * criterionIdentifier; 
@property (assign,nonatomic) int qualifier;                                                                        //@synthesize qualifier=_qualifier - In the implementation block
@property (nonatomic,copy) NSString * expression; 
@property (nonatomic,copy) NSArray * expressionLanguages;                                                          //@synthesize expressionLanguages=_expressionLanguages - In the implementation block
@property (nonatomic,retain) EFMutableInt64Set * libraryIdentifiers;                                               //@synthesize libraryIdentifiers=_libraryIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL preferFullTextSearch;                                                            //@synthesize preferFullTextSearch=_preferFullTextSearch - In the implementation block
@property (assign,nonatomic) BOOL useFlaggedForUnreadCount;                                                        //@synthesize useFlaggedForUnreadCount=_useFlaggedForUnreadCount - In the implementation block
@property (assign,nonatomic) BOOL includeRelatedMessages;                                                          //@synthesize includeRelatedMessages=_includeRelatedMessages - In the implementation block
@property (assign,nonatomic) BOOL expressionIsSanitized;                                                           //@synthesize expressionIsSanitized=_expressionIsSanitized - In the implementation block
@property (assign,nonatomic) BOOL includeRemoteBodyContent;                                                        //@synthesize includeRemoteBodyContent=_includeRemoteBodyContent - In the implementation block
@property (nonatomic,retain) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * criteria; 
+(id)criterionForMailboxURL:(id)arg1 ;
+(id)criterionForNotDeletedConversationID:(long long)arg1 ;
+(id)criterionForMailboxPredictionMessageQuery:(unsigned long long)arg1 variable:(id)arg2 ;
+(id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2 ;
+(id)stringForCriterionType:(long long)arg1 ;
+(id)criterionForMailbox:(id)arg1 ;
+(id)notCriterionWithCriterion:(id)arg1 ;
+(id)criterionForConversationID:(long long)arg1 ;
+(id)_criterionForDateReceivedBetweenDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
+(id)_criterionForDateReceivedBetween:(id)arg1 endDate:(id)arg2 ;
+(id)toMeCriterion;
+(id)criterionForDateReceivedNewerThanDate:(id)arg1 ;
+(id)criterionForDateReceivedOlderThanDate:(id)arg1 ;
+(id)expressionForDate:(id)arg1 ;
+(id)criteriaFromDefaultsArray:(id)arg1 ;
+(id)defaultsArrayFromCriteria:(id)arg1 ;
+(id)criterionFromDefaultsDictionary:(id)arg1 ;
+(id)defaultsDictionaryFromCriterion:(id)arg1 ;
+(void)_updateAddressComments:(id)arg1 ;
+(id)criterionForAccount:(id)arg1 ;
+(id)criterionExcludingMailboxes:(id)arg1 ;
+(id)messageIsJournaledCriterion:(BOOL)arg1 ;
+(id)criterionForLibraryID:(id)arg1 ;
+(id)criterionForDocumentID:(id)arg1 ;
+(id)VIPSenderMessageCriterion;
+(id)threadNotifyMessageCriterion;
+(id)criterionForFlagColor:(unsigned long long)arg1 ;
+(id)threadMuteMessageCriterion;
+(id)flaggedMessageCriterion;
+(id)readMessageCriterion;
+(id)includesMeCriterion;
+(id)ccMeCriterion;
+(id)hasAttachmentsCriterion;
+(id)todayMessageCriterion;
+(id)yesterdayMessageCriterion;
+(id)lastWeekMessageCriterion;
+(id)matchEverythingCriterion;
+(id)matchNothingCriterion;
+(id)_todayDateComponents;
+(id)orCompoundCriterionWithCriteria:(id)arg1 ;
+(id)unreadMessageCriterion;
+(long long)criterionTypeForString:(id)arg1 ;
+(id)andCompoundCriterionWithCriteria:(id)arg1 ;
+(id)messageIsDeletedCriterion:(BOOL)arg1 ;
+(id)messageIsServerSearchResultCriterion:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCriteria:(NSArray *)arg1 ;
-(id)init;
-(EFMutableInt64Set *)libraryIdentifiers;
-(BOOL)useFlaggedForUnreadCount;
-(id)unreadCountCriterion;
-(void)setExpressionIsSanitized:(BOOL)arg1 ;
-(BOOL)includeRelatedMessages;
-(id)initWithType:(long long)arg1 qualifier:(int)arg2 expression:(id)arg3 ;
-(void)setExpression:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(int)qualifier;
-(void)setQualifier:(int)arg1 ;
-(id)fixOnce;
-(NSString *)description;
-(id)initWithCriterion:(id)arg1 expression:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2 ;
-(int)messageRuleQualifierForString:(id)arg1 ;
-(BOOL)includeRemoteBodyContent;
-(id)descriptionWithDepth:(unsigned)arg1 ;
-(id)_qualifierString;
-(id)stringForMessageRuleQualifier:(int)arg1 ;
-(BOOL)doesMessageSatisfyCriterion:(id)arg1 ;
-(id)_headersRequiredForEvaluation;
-(BOOL)_evaluatePartOfStructure:(id)arg1 ;
-(BOOL)_evaluateCompoundCriterion:(id)arg1 ;
-(BOOL)_evaluateFlagCriterion:(id)arg1 ;
-(BOOL)_evaluateAddressBookCriterion:(id)arg1 ;
-(BOOL)_evaluateHeaderCriterion:(id)arg1 ;
-(BOOL)_evaluateSenderHeaderCriterion:(id)arg1 ;
-(BOOL)_evaluateAccountCriterion:(id)arg1 ;
-(BOOL)_evaluateDateCriterion:(id)arg1 ;
-(BOOL)_evaluateAddressHistoryCriterion:(id)arg1 ;
-(BOOL)_evaluateFullNameCriterion:(id)arg1 ;
-(BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1 ;
-(id)simplifyOnce;
-(BOOL)_evaluateIsEncryptedCriterion:(id)arg1 ;
-(BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1 ;
-(BOOL)_evaluatePriorityIsHighCriterion:(id)arg1 ;
-(BOOL)_evaluatePriorityIsLowCriterion:(id)arg1 ;
-(BOOL)_evaluateAttachmentCriterion:(id)arg1 ;
-(BOOL)_evaluateConversationIDCriterion:(id)arg1 ;
-(BOOL)_evaluateMailboxCriterion:(id)arg1 ;
-(void)setUseFlaggedForUnreadCount:(BOOL)arg1 ;
-(id)dateFromExpression;
-(BOOL)isVIPCriterion;
-(void)setExpressionLanguages:(NSArray *)arg1 ;
-(void)setPreferFullTextSearch:(BOOL)arg1 ;
-(void)setIncludeRelatedMessages:(BOOL)arg1 ;
-(void)setIncludeRemoteBodyContent:(BOOL)arg1 ;
-(NSString *)expression;
-(NSArray *)criteria;
-(unsigned long long)hash;
-(id)simplifiedCriterion;
-(id)_criterionForSQL;
-(void)setLibraryIdentifiers:(EFMutableInt64Set *)arg1 ;
-(long long)criterionType;
-(BOOL)isFullTextSearchableCriterion;
-(id)_evaluateFTSCriterionWithIndex:(id)arg1 mailboxIDs:(id)arg2 ;
-(BOOL)allCriteriaMustBeSatisfied;
-(id)_resolveWithIndex:(id)arg1 mailboxIDs:(id)arg2 ;
-(void)setCriterionType:(long long)arg1 ;
-(void)setAllCriteriaMustBeSatisfied:(BOOL)arg1 ;
-(int)dateUnits;
-(id)_collapsedMessageNumberCriterion:(id)arg1 allMustBeSatisfied:(BOOL)arg2 collapsedIndexes:(id*)arg3 ;
-(BOOL)hasLibraryIDCriterion;
-(id)SQLExpressionWithContext:(id)arg1 depth:(unsigned)arg2 ;
-(unsigned)bestBaseTable;
-(void)_addCriteriaSatisfyingPredicate:(/*function pointer*/void*)arg1 toCollector:(id)arg2 ;
-(id)criterionByApplyingTransform:(/*^block*/id)arg1 ;
-(void)setDateUnits:(int)arg1 ;
-(BOOL)includesCriterionSatisfyingPredicate:(/*function pointer*/void*)arg1 restrictive:(BOOL)arg2 ;
-(id)criteriaSatisfyingPredicate:(/*function pointer*/void*)arg1 ;
-(id)criterionForSQL;
-(id)extractedDateCriterion;
-(id)extractedUnreadCriterion;
-(id)SQLExpressionWithTables:(unsigned*)arg1 baseTable:(unsigned)arg2 protectedDataAvailable:(BOOL)arg3 searchableIndex:(id)arg4 mailboxIDs:(id)arg5 propertyMapper:(id)arg6 ;
-(BOOL)dateIsRelative;
-(void)setDateIsRelative:(BOOL)arg1 ;
-(NSString *)criterionIdentifier;
-(id)_SQLExpressionForMailboxCriterion;
-(BOOL)expressionIsSanitized;
-(id)daBasicSearchString;
-(id)daSearchPredicate;
-(void)setName:(NSString *)arg1 ;
-(BOOL)hasNonFullTextSearchableCriterion;
-(id)_spotlightQueryString;
-(NSArray *)expressionLanguages;
-(id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3 ;
-(id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2 ;
-(id)_comparisonOperationMatchingValue:(id)arg1 qualifier:(int)arg2 ;
-(id)criteriaForSpotlightCriteria:(id)arg1 ;
-(id)_attributesForHeaderCriterion;
-(id)_wordQueryWithAttributes:(id)arg1 languages:(id)arg2 expression:(id)arg3 ;
-(NSString *)spotlightQueryString;
-(BOOL)preferFullTextSearch;
-(void)setCriterionIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFullTextSearchableCriterion,nonatomic,readonly) BOOL fullTextSearchableCriterion; 
@property (nonatomic,readonly) NSString * spotlightQueryString; 
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
+(id)_todayDateComponents;
+(id)orCompoundCriterionWithCriteria:(id)arg1 ;
+(id)unreadMessageCriterion;
+(long long)criterionTypeForString:(id)arg1 ;
+(id)andCompoundCriterionWithCriteria:(id)arg1 ;
+(id)messageIsDeletedCriterion:(BOOL)arg1 ;
+(id)messageIsServerSearchResultCriterion:(BOOL)arg1 ;
+(id)criterionForMailboxURL:(id)arg1 ;
+(id)criterionForNotDeletedConversationID:(long long)arg1 ;
+(id)criterionForMailboxPredictionMessageQuery:(unsigned long long)arg1 variable:(id)arg2 ;
+(id)messageIsJournaledCriterion:(BOOL)arg1 ;
+(id)criterionExcludingMailboxes:(id)arg1 ;
+(id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2 ;
+(id)stringForCriterionType:(long long)arg1 ;
+(id)criterionForMailbox:(id)arg1 ;
+(id)notCriterionWithCriterion:(id)arg1 ;
+(id)criterionForConversationID:(long long)arg1 ;
+(id)_criterionForDateReceivedBetweenDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
+(id)_criterionForDateReceivedBetween:(id)arg1 endDate:(id)arg2 ;
+(id)criterionForDateReceivedNewerThanDate:(id)arg1 ;
+(id)criterionForDateReceivedOlderThanDate:(id)arg1 ;
+(id)expressionForDate:(id)arg1 ;
+(id)criteriaFromDefaultsArray:(id)arg1 ;
+(id)defaultsArrayFromCriteria:(id)arg1 ;
+(id)criterionFromDefaultsDictionary:(id)arg1 ;
+(id)defaultsDictionaryFromCriterion:(id)arg1 ;
+(void)_updateAddressComments:(id)arg1 ;
+(id)criterionForAccount:(id)arg1 ;
+(id)criterionForLibraryID:(id)arg1 ;
+(id)criterionForDocumentID:(id)arg1 ;
+(id)VIPSenderMessageCriterion;
+(id)threadNotifyMessageCriterion;
+(id)threadMuteMessageCriterion;
+(id)flaggedMessageCriterion;
+(id)readMessageCriterion;
+(id)includesMeCriterion;
+(id)toMeCriterion;
+(id)ccMeCriterion;
+(id)hasAttachmentsCriterion;
+(id)todayMessageCriterion;
+(id)yesterdayMessageCriterion;
+(id)lastWeekMessageCriterion;
+(id)matchEverythingCriterion;
+(id)matchNothingCriterion;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setExpression:(NSString *)arg1 ;
-(NSString *)expression;
-(id)initWithType:(long long)arg1 qualifier:(int)arg2 expression:(id)arg3 ;
-(int)qualifier;
-(void)setQualifier:(int)arg1 ;
-(EFMutableInt64Set *)libraryIdentifiers;
-(NSArray *)criteria;
-(void)setCriteria:(NSArray *)arg1 ;
-(id)simplifiedCriterion;
-(id)fixOnce;
-(id)_criterionForSQL;
-(void)setLibraryIdentifiers:(EFMutableInt64Set *)arg1 ;
-(long long)criterionType;
-(BOOL)isFullTextSearchableCriterion;
-(id)_evaluateFTSCriterionWithIndex:(id)arg1 mailboxIDs:(id)arg2 ;
-(BOOL)allCriteriaMustBeSatisfied;
-(id)_resolveWithIndex:(id)arg1 mailboxIDs:(id)arg2 ;
-(void)setCriterionType:(long long)arg1 ;
-(void)setAllCriteriaMustBeSatisfied:(BOOL)arg1 ;
-(id)_collapsedMessageNumberCriterion:(id)arg1 allMustBeSatisfied:(BOOL)arg2 collapsedIndexes:(id*)arg3 ;
-(BOOL)hasLibraryIDCriterion;
-(id)SQLExpressionWithContext:(id)arg1 depth:(unsigned)arg2 ;
-(unsigned)bestBaseTable;
-(void)_addCriteriaSatisfyingPredicate:(/*function pointer*/void*)arg1 toCollector:(id)arg2 ;
-(BOOL)includesCriterionSatisfyingPredicate:(/*function pointer*/void*)arg1 restrictive:(BOOL)arg2 ;
-(id)criterionByApplyingTransform:(/*^block*/id)arg1 ;
-(id)criteriaSatisfyingPredicate:(/*function pointer*/void*)arg1 ;
-(id)criterionForSQL;
-(id)SQLExpressionWithTables:(unsigned*)arg1 baseTable:(unsigned)arg2 protectedDataAvailable:(BOOL)arg3 searchableIndex:(id)arg4 mailboxIDs:(id)arg5 propertyMapper:(id)arg6 ;
-(id)extractedDateCriterion;
-(id)extractedUnreadCriterion;
-(BOOL)dateIsRelative;
-(int)dateUnits;
-(void)setDateUnits:(int)arg1 ;
-(void)setDateIsRelative:(BOOL)arg1 ;
-(NSString *)criterionIdentifier;
-(id)_SQLExpressionForMailboxCriterion;
-(BOOL)expressionIsSanitized;
-(BOOL)hasNonFullTextSearchableCriterion;
-(id)_spotlightQueryString;
-(id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3 ;
-(id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2 ;
-(id)_comparisonOperationMatchingValue:(id)arg1 qualifier:(int)arg2 ;
-(id)criteriaForSpotlightCriteria:(id)arg1 ;
-(id)_attributesForHeaderCriterion;
-(NSArray *)expressionLanguages;
-(id)_wordQueryWithAttributes:(id)arg1 languages:(id)arg2 expression:(id)arg3 ;
-(NSString *)spotlightQueryString;
-(BOOL)preferFullTextSearch;
-(void)setCriterionIdentifier:(NSString *)arg1 ;
-(BOOL)useFlaggedForUnreadCount;
-(id)unreadCountCriterion;
-(void)setExpressionIsSanitized:(BOOL)arg1 ;
-(BOOL)includeRelatedMessages;
-(id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2 ;
-(id)initWithCriterion:(id)arg1 expression:(id)arg2 ;
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
-(BOOL)_evaluateIsEncryptedCriterion:(id)arg1 ;
-(BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1 ;
-(BOOL)_evaluatePriorityIsHighCriterion:(id)arg1 ;
-(BOOL)_evaluatePriorityIsLowCriterion:(id)arg1 ;
-(BOOL)_evaluateAttachmentCriterion:(id)arg1 ;
-(BOOL)_evaluateConversationIDCriterion:(id)arg1 ;
-(BOOL)_evaluateMailboxCriterion:(id)arg1 ;
-(id)simplifyOnce;
-(void)setUseFlaggedForUnreadCount:(BOOL)arg1 ;
-(id)dateFromExpression;
-(BOOL)isVIPCriterion;
-(void)setExpressionLanguages:(NSArray *)arg1 ;
-(void)setPreferFullTextSearch:(BOOL)arg1 ;
-(void)setIncludeRelatedMessages:(BOOL)arg1 ;
-(void)setIncludeRemoteBodyContent:(BOOL)arg1 ;
-(id)daBasicSearchString;
-(id)daSearchPredicate;
@end


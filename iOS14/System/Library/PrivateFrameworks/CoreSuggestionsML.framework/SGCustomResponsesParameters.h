/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@interface SGCustomResponsesParameters : NSObject {

	BOOL _isCustomResponsesEnabled;
	BOOL _allowProfanity;
	BOOL _useNonNegativeClassesOnly;
	unsigned long long _filterBatchSize;
	double _minimumTimeIntervalSecs;
	unsigned long long _minimumDistinctRecipients;
	unsigned long long _minimumReplyOccurences;
	double _timeDecayFactor;
	double _countExponent;
	double _distanceThreshold;
	double _minDecayedCountForPruning;
	double _minDecayedCountForPrediction;
	unsigned long long _maxStoredMessages;
	unsigned long long _maxStoredCustomResponses;
	unsigned long long _maxRowsInPerRecipientTable;
	unsigned long long _knowledgeStoreQueryLimit;
	unsigned long long _maxReplyLength;
	double _maxReplyGapSecs;
	double _usageSpreadExponent;
	unsigned long long _compatibilityVersion;

}

@property (nonatomic,readonly) BOOL isCustomResponsesEnabled;                              //@synthesize isCustomResponsesEnabled=_isCustomResponsesEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long filterBatchSize;                         //@synthesize filterBatchSize=_filterBatchSize - In the implementation block
@property (nonatomic,readonly) double minimumTimeIntervalSecs;                             //@synthesize minimumTimeIntervalSecs=_minimumTimeIntervalSecs - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumDistinctRecipients;               //@synthesize minimumDistinctRecipients=_minimumDistinctRecipients - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumReplyOccurences;                  //@synthesize minimumReplyOccurences=_minimumReplyOccurences - In the implementation block
@property (nonatomic,readonly) double timeDecayFactor;                                     //@synthesize timeDecayFactor=_timeDecayFactor - In the implementation block
@property (nonatomic,readonly) double countExponent;                                       //@synthesize countExponent=_countExponent - In the implementation block
@property (nonatomic,readonly) double distanceThreshold;                                   //@synthesize distanceThreshold=_distanceThreshold - In the implementation block
@property (nonatomic,readonly) double minDecayedCountForPruning;                           //@synthesize minDecayedCountForPruning=_minDecayedCountForPruning - In the implementation block
@property (nonatomic,readonly) double minDecayedCountForPrediction;                        //@synthesize minDecayedCountForPrediction=_minDecayedCountForPrediction - In the implementation block
@property (nonatomic,readonly) unsigned long long maxStoredMessages;                       //@synthesize maxStoredMessages=_maxStoredMessages - In the implementation block
@property (nonatomic,readonly) unsigned long long maxStoredCustomResponses;                //@synthesize maxStoredCustomResponses=_maxStoredCustomResponses - In the implementation block
@property (nonatomic,readonly) unsigned long long maxRowsInPerRecipientTable;              //@synthesize maxRowsInPerRecipientTable=_maxRowsInPerRecipientTable - In the implementation block
@property (nonatomic,readonly) unsigned long long knowledgeStoreQueryLimit;                //@synthesize knowledgeStoreQueryLimit=_knowledgeStoreQueryLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long maxReplyLength;                          //@synthesize maxReplyLength=_maxReplyLength - In the implementation block
@property (nonatomic,readonly) double maxReplyGapSecs;                                     //@synthesize maxReplyGapSecs=_maxReplyGapSecs - In the implementation block
@property (nonatomic,readonly) double usageSpreadExponent;                                 //@synthesize usageSpreadExponent=_usageSpreadExponent - In the implementation block
@property (nonatomic,readonly) BOOL allowProfanity;                                        //@synthesize allowProfanity=_allowProfanity - In the implementation block
@property (nonatomic,readonly) unsigned long long compatibilityVersion;                    //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) BOOL useNonNegativeClassesOnly;                             //@synthesize useNonNegativeClassesOnly=_useNonNegativeClassesOnly - In the implementation block
-(unsigned long long)compatibilityVersion;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)maxReplyLength;
-(double)minDecayedCountForPruning;
-(unsigned long long)minimumReplyOccurences;
-(unsigned long long)minimumDistinctRecipients;
-(unsigned long long)filterBatchSize;
-(double)timeDecayFactor;
-(unsigned long long)maxStoredCustomResponses;
-(unsigned long long)maxRowsInPerRecipientTable;
-(BOOL)useNonNegativeClassesOnly;
-(unsigned long long)maxStoredMessages;
-(double)maxReplyGapSecs;
-(unsigned long long)knowledgeStoreQueryLimit;
-(BOOL)isCustomResponsesEnabled;
-(double)distanceThreshold;
-(double)minimumTimeIntervalSecs;
-(double)countExponent;
-(double)minDecayedCountForPrediction;
-(double)usageSpreadExponent;
-(BOOL)allowProfanity;
@end

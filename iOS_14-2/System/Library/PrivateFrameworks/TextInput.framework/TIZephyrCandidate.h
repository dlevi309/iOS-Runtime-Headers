/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@class TIProactiveTrigger, NSString, _ICPredictedItem;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {

	BOOL _isFromPhraseDictionary;
	BOOL _isFromTextChecker;
	BOOL _isSecureContentCandidate;
	BOOL _continuousPathConversion;
	BOOL _shouldAccept;
	BOOL _shouldInsertSpaceAfterSelection;
	unsigned _usageTrackingMask;
	unsigned _sourceMask;
	int _confidence;
	int _dynamicUsageCount;
	int _dynamicPenaltyCount;
	unsigned long long _wordOriginFeedbackID;
	TIProactiveTrigger* _proactiveTrigger;
	NSString* _responseKitCategory;
	NSString* _fromBundleId;
	unsigned long long _ageForConnectionsMetrics;
	double _excessPathRatio;
	_ICPredictedItem* _proactivePredictedItem;
	NSString* _label;
	double _geometryScore;
	double _wordScore;
	NSString* _lexiconLocale;

}

@property (assign,nonatomic) BOOL isFromPhraseDictionary;                                                              //@synthesize isFromPhraseDictionary=_isFromPhraseDictionary - In the implementation block
@property (assign,nonatomic) BOOL isFromTextChecker;                                                                   //@synthesize isFromTextChecker=_isFromTextChecker - In the implementation block
@property (assign,getter=isContinuousPathConversion,nonatomic) BOOL continuousPathConversion;                          //@synthesize continuousPathConversion=_continuousPathConversion - In the implementation block
@property (assign,getter=shouldAccept,nonatomic) BOOL shouldAccept;                                                    //@synthesize shouldAccept=_shouldAccept - In the implementation block
@property (assign,getter=shouldInsertSpaceAfterSelection,nonatomic) BOOL shouldInsertSpaceAfterSelection;              //@synthesize shouldInsertSpaceAfterSelection=_shouldInsertSpaceAfterSelection - In the implementation block
@property (assign,getter=confidence,nonatomic) int confidence;                                                         //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,copy) NSString * label;                                                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * fromBundleId;                                                                    //@synthesize fromBundleId=_fromBundleId - In the implementation block
@property (assign,nonatomic) unsigned long long ageForConnectionsMetrics;                                              //@synthesize ageForConnectionsMetrics=_ageForConnectionsMetrics - In the implementation block
@property (assign,nonatomic) double excessPathRatio;                                                                   //@synthesize excessPathRatio=_excessPathRatio - In the implementation block
@property (nonatomic,copy) _ICPredictedItem * proactivePredictedItem;                                                  //@synthesize proactivePredictedItem=_proactivePredictedItem - In the implementation block
@property (assign,nonatomic) double geometryScore;                                                                     //@synthesize geometryScore=_geometryScore - In the implementation block
@property (assign,nonatomic) double wordScore;                                                                         //@synthesize wordScore=_wordScore - In the implementation block
@property (assign,nonatomic) NSString * lexiconLocale;                                                                 //@synthesize lexiconLocale=_lexiconLocale - In the implementation block
@property (assign,nonatomic) int dynamicUsageCount;                                                                    //@synthesize dynamicUsageCount=_dynamicUsageCount - In the implementation block
@property (assign,nonatomic) int dynamicPenaltyCount;                                                                  //@synthesize dynamicPenaltyCount=_dynamicPenaltyCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)type;
-(int)confidence;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned)arg4 sourceMask:(unsigned)arg5 secureContentCandidate:(BOOL)arg6 proactiveTrigger:(id)arg7 proactivePredictedItem:(id)arg8 responseKitCategory:(id)arg9 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned)arg4 sourceMask:(unsigned)arg5 secureContentCandidate:(BOOL)arg6 proactiveTrigger:(id)arg7 proactivePredictedItem:(id)arg8 ;
-(unsigned)sourceMask;
-(id)proactiveTrigger;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(BOOL)isAutocorrection;
-(double)wordScore;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)shouldAccept;
-(void)setContinuousPathConversion:(BOOL)arg1 ;
-(BOOL)shouldInsertSpaceAfterSelection;
-(id)responseKitCategory;
-(unsigned long long)wordOriginFeedbackID;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned)arg4 sourceMask:(unsigned)arg5 ;
-(id)initWithCandidate:(id)arg1 responseKitCategory:(id)arg2 ;
-(void)setIsFromPhraseDictionary:(BOOL)arg1 ;
-(NSString *)fromBundleId;
-(id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2 label:(id)arg3 ;
-(BOOL)isFromPhraseDictionary;
-(BOOL)isFromTextChecker;
-(void)setIsFromTextChecker:(BOOL)arg1 ;
-(void)setFromBundleId:(NSString *)arg1 ;
-(double)excessPathRatio;
-(unsigned long long)ageForConnectionsMetrics;
-(void)setAgeForConnectionsMetrics:(unsigned long long)arg1 ;
-(void)setExcessPathRatio:(double)arg1 ;
-(unsigned)usageTrackingMask;
-(_ICPredictedItem *)proactivePredictedItem;
-(void)setProactivePredictedItem:(_ICPredictedItem *)arg1 ;
-(void)setShouldAccept:(BOOL)arg1 ;
-(void)setShouldInsertSpaceAfterSelection:(BOOL)arg1 ;
-(double)geometryScore;
-(void)setGeometryScore:(double)arg1 ;
-(void)setWordScore:(double)arg1 ;
-(NSString *)lexiconLocale;
-(void)setLexiconLocale:(NSString *)arg1 ;
-(int)dynamicUsageCount;
-(void)setDynamicUsageCount:(int)arg1 ;
-(int)dynamicPenaltyCount;
-(void)setDynamicPenaltyCount:(int)arg1 ;
-(id)description;
-(void)setConfidence:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)isContinuousPathConversion;
-(BOOL)isSecureContentCandidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
@end


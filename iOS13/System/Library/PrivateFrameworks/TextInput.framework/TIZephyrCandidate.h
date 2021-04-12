/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	int _confidence;
	unsigned long long _wordOriginFeedbackID;
	TIProactiveTrigger* _proactiveTrigger;
	NSString* _responseKitCategory;
	NSString* _fromBundleId;
	unsigned long long _ageForConnectionsMetrics;
	double _excessPathRatio;
	_ICPredictedItem* _proactivePredictedItem;
	NSString* _label;

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
+(int)type;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)confidence;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setConfidence:(int)arg1 ;
-(BOOL)isContinuousPathConversion;
-(BOOL)isSecureContentCandidate;
-(unsigned)usageTrackingMask;
-(BOOL)shouldAccept;
-(BOOL)shouldInsertSpaceAfterSelection;
-(id)responseKitCategory;
-(unsigned long long)wordOriginFeedbackID;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)proactiveTrigger;
-(BOOL)isAutocorrection;
-(void)setContinuousPathConversion:(BOOL)arg1 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned)arg4 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned)arg4 secureContentCandidate:(BOOL)arg5 proactiveTrigger:(id)arg6 proactivePredictedItem:(id)arg7 responseKitCategory:(id)arg8 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned)arg4 secureContentCandidate:(BOOL)arg5 proactiveTrigger:(id)arg6 proactivePredictedItem:(id)arg7 ;
-(id)initWithCandidate:(id)arg1 responseKitCategory:(id)arg2 ;
-(id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2 label:(id)arg3 ;
-(BOOL)isFromPhraseDictionary;
-(void)setIsFromPhraseDictionary:(BOOL)arg1 ;
-(BOOL)isFromTextChecker;
-(void)setIsFromTextChecker:(BOOL)arg1 ;
-(NSString *)fromBundleId;
-(void)setFromBundleId:(NSString *)arg1 ;
-(unsigned long long)ageForConnectionsMetrics;
-(void)setAgeForConnectionsMetrics:(unsigned long long)arg1 ;
-(double)excessPathRatio;
-(void)setExcessPathRatio:(double)arg1 ;
-(_ICPredictedItem *)proactivePredictedItem;
-(void)setProactivePredictedItem:(_ICPredictedItem *)arg1 ;
-(void)setShouldAccept:(BOOL)arg1 ;
-(void)setShouldInsertSpaceAfterSelection:(BOOL)arg1 ;
@end


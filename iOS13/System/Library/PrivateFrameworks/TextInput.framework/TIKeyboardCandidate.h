/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/TIKeyboardCandidateCoding.h>

@class NSString, TIProactiveTrigger;

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding> {

	BOOL _responseKitCandidate;
	BOOL _isSendCurrentLocation;
	BOOL _asIsCandidate;
	unsigned _slotID;
	int _confidence;
	NSString* _alternativeText;
	NSString* _annotationText;
	unsigned long long _customInfoType;
	unsigned long long _indexForMetrics;
	NSString* _responseKitCategory;

}

@property (nonatomic,readonly) BOOL isSlottedCandidate; 
@property (nonatomic,readonly) BOOL isAutofillCandidate; 
@property (nonatomic,readonly) NSString * candidate; 
@property (nonatomic,readonly) NSString * input; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * alternativeText;                                                                   //@synthesize alternativeText=_alternativeText - In the implementation block
@property (nonatomic,copy) NSString * annotationText;                                                                    //@synthesize annotationText=_annotationText - In the implementation block
@property (nonatomic,readonly) unsigned long long wordOriginFeedbackID; 
@property (nonatomic,readonly) unsigned long long deleteCount; 
@property (nonatomic,readonly) long long cursorMovement; 
@property (nonatomic,readonly) BOOL isForShortcutConversion; 
@property (nonatomic,readonly) BOOL isAutocorrection; 
@property (getter=isContinuousPathConversion,nonatomic,readonly) BOOL continuousPathConversion; 
@property (nonatomic,readonly) BOOL shouldAccept; 
@property (nonatomic,readonly) BOOL shouldInsertSpaceAfterSelection; 
@property (assign,nonatomic) unsigned slotID;                                                                            //@synthesize slotID=_slotID - In the implementation block
@property (assign,nonatomic) unsigned long long customInfoType;                                                          //@synthesize customInfoType=_customInfoType - In the implementation block
@property (assign,nonatomic) BOOL isSendCurrentLocation;                                                                 //@synthesize isSendCurrentLocation=_isSendCurrentLocation - In the implementation block
@property (getter=isExtensionCandidate,nonatomic,readonly) BOOL extensionCandidate; 
@property (getter=isEmojiCandidate,nonatomic,readonly) BOOL emojiCandidate; 
@property (getter=isCompletionCandidate,nonatomic,readonly) BOOL completionCandidate; 
@property (getter=isInlineCompletionCandidate,nonatomic,readonly) BOOL inlineCompletionCandidate; 
@property (getter=isFullwidthCandidate,nonatomic,readonly) BOOL fullwidthCandidate; 
@property (getter=isFacemarkCandidate,nonatomic,readonly) BOOL facemarkCandidate; 
@property (getter=isPunctuationCompletionCandidate,nonatomic,readonly) BOOL punctuationCompletionCandidate; 
@property (getter=isPunctuationKeyCandidate,nonatomic,readonly) BOOL punctuationKeyCandidate; 
@property (getter=isOTAWordListCandidate,nonatomic,readonly) BOOL OTAWordListCandidate; 
@property (getter=isRegionalCandidate,nonatomic,readonly) BOOL regionalCandidate; 
@property (getter=isResponseKitCandidate,nonatomic,readonly) BOOL responseKitCandidate;                                  //@synthesize responseKitCandidate=_responseKitCandidate - In the implementation block
@property (getter=isBilingualCandidate,nonatomic,readonly) BOOL bilingualCandidate; 
@property (getter=isAsIsCandidate,nonatomic,readonly) BOOL asIsCandidate;                                                //@synthesize asIsCandidate=_asIsCandidate - In the implementation block
@property (getter=isTransliterationCandidate,nonatomic,readonly) BOOL transliterationCandidate; 
@property (getter=isPartialCandidate,nonatomic,readonly) BOOL partialCandidate; 
@property (getter=isInlineCandidate,nonatomic,readonly) BOOL inlineCandidate; 
@property (nonatomic,copy,readonly) NSString * responseKitCategory;                                                      //@synthesize responseKitCategory=_responseKitCategory - In the implementation block
@property (getter=isSecureContentCandidate,nonatomic,readonly) BOOL secureContentCandidate; 
@property (nonatomic,readonly) TIProactiveTrigger * proactiveTrigger; 
@property (assign,nonatomic) unsigned long long indexForMetrics;                                                         //@synthesize indexForMetrics=_indexForMetrics - In the implementation block
@property (nonatomic,readonly) BOOL isAddress; 
@property (nonatomic,readonly) unsigned usageTrackingMask; 
@property (getter=confidence,nonatomic,readonly) int confidence;                                                         //@synthesize confidence=_confidence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)type;
+(BOOL)supportsSecureCoding;
-(BOOL)isAutofillCandidate;
-(BOOL)isSlottedCandidate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)confidence;
-(NSString *)input;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(unsigned)slotID;
-(void)setSlotID:(unsigned)arg1 ;
-(BOOL)isContinuousPathConversion;
-(BOOL)isSecureContentCandidate;
-(unsigned long long)customInfoType;
-(BOOL)isCompletionCandidate;
-(unsigned)usageTrackingMask;
-(NSString *)candidate;
-(BOOL)isForShortcutConversion;
-(BOOL)shouldAccept;
-(long long)cursorMovement;
-(BOOL)isEmojiCandidate;
-(BOOL)isPunctuationKeyCandidate;
-(id)candidateByReplacingWithCandidate:(id)arg1 ;
-(BOOL)shouldInsertSpaceAfterSelection;
-(BOOL)isExtensionCandidate;
-(BOOL)isInlineCompletionCandidate;
-(BOOL)isFacemarkCandidate;
-(BOOL)isOTAWordListCandidate;
-(BOOL)isRegionalCandidate;
-(BOOL)isFullwidthCandidate;
-(BOOL)isPunctuationCompletionCandidate;
-(unsigned long long)deleteCount;
-(BOOL)isResponseKitCandidate;
-(NSString *)responseKitCategory;
-(unsigned long long)wordOriginFeedbackID;
-(NSString *)annotationText;
-(void)setAnnotationText:(NSString *)arg1 ;
-(BOOL)isBilingualCandidate;
-(BOOL)isPartialCandidate;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(TIProactiveTrigger *)proactiveTrigger;
-(BOOL)isAddress;
-(BOOL)isAutocorrection;
-(BOOL)isPunctuation;
-(BOOL)isTransliterationCandidate;
-(BOOL)isInlineCandidate;
-(id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2 ;
-(NSString *)alternativeText;
-(void)setAlternativeText:(NSString *)arg1 ;
-(void)setCustomInfoType:(unsigned long long)arg1 ;
-(unsigned long long)indexForMetrics;
-(void)setIndexForMetrics:(unsigned long long)arg1 ;
-(BOOL)isSendCurrentLocation;
-(void)setIsSendCurrentLocation:(BOOL)arg1 ;
-(BOOL)isAsIsCandidate;
@end


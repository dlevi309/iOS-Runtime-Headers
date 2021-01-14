/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardCandidate, NSArray;

@interface TIAutocorrectionList : NSObject <NSSecureCoding> {

	BOOL _containsProactiveTriggers;
	BOOL _proactiveSuggestionsEmpty;
	BOOL _empty;
	TIKeyboardCandidate* _autocorrection;
	NSArray* _predictions;
	NSArray* _emojiList;
	NSArray* _proactiveTriggers;

}

@property (nonatomic,readonly) BOOL containsAutofillCandidates; 
@property (nonatomic,readonly) BOOL containsContinuousPathConversions; 
@property (nonatomic,readonly) BOOL notEmpty; 
@property (assign,nonatomic) BOOL containsProactiveTriggers;                        //@synthesize containsProactiveTriggers=_containsProactiveTriggers - In the implementation block
@property (assign,nonatomic) BOOL proactiveSuggestionsEmpty;                        //@synthesize proactiveSuggestionsEmpty=_proactiveSuggestionsEmpty - In the implementation block
@property (assign,nonatomic) BOOL empty;                                            //@synthesize empty=_empty - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidate * autocorrection;                //@synthesize autocorrection=_autocorrection - In the implementation block
@property (nonatomic,readonly) NSArray * predictions;                               //@synthesize predictions=_predictions - In the implementation block
@property (nonatomic,readonly) NSArray * emojiList;                                 //@synthesize emojiList=_emojiList - In the implementation block
@property (nonatomic,readonly) NSArray * proactiveTriggers;                         //@synthesize proactiveTriggers=_proactiveTriggers - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,readonly) BOOL shouldAcceptTopCandidate; 
+(BOOL)supportsSecureCoding;
+(id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 ;
+(id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(BOOL)arg2 ;
+(id)listWithPredictions:(id)arg1 proactiveTriggers:(id)arg2 ;
+(id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 ;
+(id)listWithPredictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3 ;
+(id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 ;
+(id)listWithAutocorrection:(id)arg1 ;
-(BOOL)notEmpty;
-(void)updateLabelsWithSmartPunctuation:(id)arg1 ;
-(long long)sourceForAutocorrection;
-(BOOL)containsAutofillCandidates;
-(BOOL)containsContinuousPathConversions;
-(id)initWithAutocorrectionAlternativeProactiveTrigger:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 ;
-(id)initWithCandidates:(id)arg1 ;
-(void)setProactiveSuggestionsEmpty:(BOOL)arg1 ;
-(id)initWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 ;
-(id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(BOOL)arg2 ;
-(void)setContainsProactiveTriggers:(BOOL)arg1 ;
-(BOOL)shouldAcceptTopCandidate;
-(BOOL)containsProactiveTriggers;
-(NSArray *)predictions;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)proactiveSuggestionsEmpty;
-(id)description;
-(NSArray *)emojiList;
-(TIKeyboardCandidate *)autocorrection;
-(BOOL)empty;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)candidates;
-(NSArray *)proactiveTriggers;
-(void)setEmpty:(BOOL)arg1 ;
@end


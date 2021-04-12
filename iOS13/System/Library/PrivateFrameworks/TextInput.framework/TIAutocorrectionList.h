/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardCandidate, NSArray;

@interface TIAutocorrectionList : NSObject <NSSecureCoding> {

	BOOL _containsProactiveTriggers;
	TIKeyboardCandidate* _autocorrection;
	NSArray* _predictions;
	NSArray* _emojiList;
	NSArray* _proactiveTriggers;

}

@property (nonatomic,readonly) BOOL containsAutofillCandidates; 
@property (nonatomic,readonly) BOOL containsContinuousPathConversions; 
@property (assign,nonatomic) BOOL containsProactiveTriggers;                        //@synthesize containsProactiveTriggers=_containsProactiveTriggers - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidate * autocorrection;                //@synthesize autocorrection=_autocorrection - In the implementation block
@property (nonatomic,readonly) NSArray * predictions;                               //@synthesize predictions=_predictions - In the implementation block
@property (nonatomic,readonly) NSArray * emojiList;                                 //@synthesize emojiList=_emojiList - In the implementation block
@property (nonatomic,readonly) NSArray * proactiveTriggers;                         //@synthesize proactiveTriggers=_proactiveTriggers - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,readonly) BOOL shouldAcceptTopCandidate; 
+(BOOL)supportsSecureCoding;
+(id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 ;
+(id)listWithPredictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3 ;
+(id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 ;
+(id)listWithAutocorrection:(id)arg1 ;
+(id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 ;
+(id)listWithPredictions:(id)arg1 proactiveTriggers:(id)arg2 ;
+(id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(BOOL)arg2 ;
-(BOOL)containsAutofillCandidates;
-(BOOL)containsContinuousPathConversions;
-(void)updateLabelsWithSmartPunctuation:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)candidates;
-(TIKeyboardCandidate *)autocorrection;
-(NSArray *)predictions;
-(BOOL)shouldAcceptTopCandidate;
-(BOOL)containsProactiveTriggers;
-(NSArray *)emojiList;
-(id)initWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 ;
-(id)initWithAutocorrectionAlternativeProactiveTrigger:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 ;
-(id)initWithCandidates:(id)arg1 ;
-(id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(BOOL)arg2 ;
-(NSArray *)proactiveTriggers;
-(void)setContainsProactiveTriggers:(BOOL)arg1 ;
@end


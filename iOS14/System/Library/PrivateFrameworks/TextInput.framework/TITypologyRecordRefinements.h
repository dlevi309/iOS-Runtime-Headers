/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardCandidate, TIKeyboardState, TIAutocorrectionList;

@interface TITypologyRecordRefinements : TITypologyRecord {

	TIKeyboardCandidate* _candidate;
	TIKeyboardState* _keyboardState;
	TIAutocorrectionList* _refinements;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;                 //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                 //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIAutocorrectionList * refinements;              //@synthesize refinements=_refinements - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)setRefinements:(TIAutocorrectionList *)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)currentKeyboardState;
-(void)applyToStatistic:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(void)removeContextFromKeyboardState;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardCandidate *)candidate;
-(TIAutocorrectionList *)refinements;
@end


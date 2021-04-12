/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardCandidate, TIKeyboardState, TIKeyboardConfiguration, NSString;

@interface TITypologyRecordAcceptedCandidate : TITypologyRecord {

	TIKeyboardCandidate* _candidate;
	TIKeyboardState* _keyboardState;
	TIKeyboardConfiguration* _keyboardConfig;
	NSString* _textToCommit;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;                       //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                       //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardConfiguration * keyboardConfig;              //@synthesize keyboardConfig=_keyboardConfig - In the implementation block
@property (nonatomic,copy) NSString * textToCommit;                                 //@synthesize textToCommit=_textToCommit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(id)changedText;
-(void)setKeyboardConfig:(TIKeyboardConfiguration *)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSString *)textToCommit;
-(void)setTextToCommit:(NSString *)arg1 ;
-(id)currentKeyboardState;
-(void)applyToStatistic:(id)arg1 ;
-(id)textSummary;
-(TIKeyboardState *)keyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardConfiguration *)keyboardConfig;
-(void)removeContextFromKeyboardState;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardCandidate *)candidate;
@end


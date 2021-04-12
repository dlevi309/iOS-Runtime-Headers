/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSString *)textToCommit;
-(void)setTextToCommit:(NSString *)arg1 ;
-(TIKeyboardCandidate *)candidate;
-(id)textSummary;
-(id)changedText;
-(id)currentKeyboardState;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardConfiguration *)keyboardConfig;
-(void)setKeyboardConfig:(TIKeyboardConfiguration *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end


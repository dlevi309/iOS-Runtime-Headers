/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardInput, TIKeyboardState, TIKeyboardOutput, TIKeyboardConfiguration;

@interface TITypologyRecordKeyboardInput : TITypologyRecord {

	TIKeyboardInput* _input;
	TIKeyboardState* _keyboardState;
	TIKeyboardOutput* _output;
	TIKeyboardConfiguration* _keyboardConfig;

}

@property (nonatomic,retain) TIKeyboardInput * input;                               //@synthesize input=_input - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                       //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardOutput * output;                             //@synthesize output=_output - In the implementation block
@property (nonatomic,retain) TIKeyboardConfiguration * keyboardConfig;              //@synthesize keyboardConfig=_keyboardConfig - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(id)changedText;
-(TIKeyboardInput *)input;
-(void)setKeyboardConfig:(TIKeyboardConfiguration *)arg1 ;
-(TIKeyboardOutput *)output;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(void)setInput:(TIKeyboardInput *)arg1 ;
-(id)currentKeyboardState;
-(void)applyToStatistic:(id)arg1 ;
-(id)textSummary;
-(TIKeyboardState *)keyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardConfiguration *)keyboardConfig;
-(void)setOutput:(TIKeyboardOutput *)arg1 ;
-(void)removeContextFromKeyboardState;
-(id)initWithCoder:(id)arg1 ;
@end


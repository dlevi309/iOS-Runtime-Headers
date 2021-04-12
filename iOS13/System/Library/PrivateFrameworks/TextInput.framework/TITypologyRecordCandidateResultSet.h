/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardState, TIKeyboardCandidateResultSet;

@interface TITypologyRecordCandidateResultSet : TITypologyRecord {

	TIKeyboardState* _keyboardState;
	TIKeyboardCandidateResultSet* _resultSet;

}

@property (nonatomic,retain) TIKeyboardState * keyboardState;                       //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * resultSet;              //@synthesize resultSet=_resultSet - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)currentKeyboardState;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TIKeyboardCandidateResultSet *)resultSet;
-(void)setResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end


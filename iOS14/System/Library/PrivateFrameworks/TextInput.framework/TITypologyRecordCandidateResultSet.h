/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)currentKeyboardState;
-(void)applyToStatistic:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardCandidateResultSet *)resultSet;
-(void)removeContextFromKeyboardState;
-(id)initWithCoder:(id)arg1 ;
@end


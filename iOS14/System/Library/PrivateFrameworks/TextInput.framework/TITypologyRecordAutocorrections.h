/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardState, TICandidateRequestToken, TIAutocorrectionList;

@interface TITypologyRecordAutocorrections : TITypologyRecord {

	BOOL _listUIDisplayed;
	TIKeyboardState* _keyboardState;
	TICandidateRequestToken* _requestToken;
	TIAutocorrectionList* _autocorrections;

}

@property (nonatomic,retain) TIKeyboardState * keyboardState;                     //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TICandidateRequestToken * requestToken;              //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,retain) TIAutocorrectionList * autocorrections;              //@synthesize autocorrections=_autocorrections - In the implementation block
@property (assign,nonatomic) BOOL listUIDisplayed;                                //@synthesize listUIDisplayed=_listUIDisplayed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TICandidateRequestToken *)requestToken;
-(void)setRequestToken:(TICandidateRequestToken *)arg1 ;
-(TIAutocorrectionList *)autocorrections;
-(void)setAutocorrections:(TIAutocorrectionList *)arg1 ;
-(BOOL)listUIDisplayed;
-(void)setListUIDisplayed:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)currentKeyboardState;
-(void)applyToStatistic:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(void)removeContextFromKeyboardState;
-(id)initWithCoder:(id)arg1 ;
@end


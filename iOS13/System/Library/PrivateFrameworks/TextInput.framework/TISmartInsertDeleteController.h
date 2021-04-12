/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class TITextInputTraits;

@interface TISmartInsertDeleteController : NSObject {

	BOOL _enabled;
	TITextInputTraits* _textInputTraits;

}

@property (nonatomic,readonly) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(TITextInputTraits *)textInputTraits;
-(id)initWithTextInputTraits:(id)arg1 ;
-(void)smartDeleteForDocumentState:(id)arg1 outBeforeLength:(unsigned long long*)arg2 outAfterLength:(unsigned long long*)arg3 ;
-(void)smartInsertForDocumentState:(id)arg1 stringToInsert:(id)arg2 outBeforeString:(id*)arg3 outAfterString:(id*)arg4 ;
-(unsigned long long)_numberOfCharactersInSet:(id)arg1 atBeginningOfString:(id)arg2 ;
-(unsigned long long)_numberOfCharactersInSet:(id)arg1 atEndOfString:(id)arg2 ;
@end


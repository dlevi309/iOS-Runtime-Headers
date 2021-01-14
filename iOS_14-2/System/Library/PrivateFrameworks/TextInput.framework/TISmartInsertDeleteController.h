/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class TITextInputTraits;

@interface TISmartInsertDeleteController : NSObject {

	BOOL _enabled;
	TITextInputTraits* _textInputTraits;

}

@property (nonatomic,readonly) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
-(TITextInputTraits *)textInputTraits;
-(void)smartInsertForDocumentState:(id)arg1 stringToInsert:(id)arg2 outBeforeString:(id*)arg3 outAfterString:(id*)arg4 ;
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned long long)_numberOfCharactersInSet:(id)arg1 atBeginningOfString:(id)arg2 ;
-(unsigned long long)_numberOfCharactersInSet:(id)arg1 atEndOfString:(id)arg2 ;
-(id)initWithTextInputTraits:(id)arg1 ;
-(void)smartDeleteForDocumentState:(id)arg1 outBeforeLength:(unsigned long long*)arg2 outAfterLength:(unsigned long long*)arg3 ;
-(BOOL)isEnabled;
@end


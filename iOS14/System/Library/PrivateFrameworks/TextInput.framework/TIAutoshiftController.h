/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class TITextInputTraits;

@interface TIAutoshiftController : NSObject {

	BOOL _enabled;
	TITextInputTraits* _textInputTraits;

}

@property (nonatomic,readonly) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
-(TITextInputTraits *)textInputTraits;
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned long long)actionForDocumentState:(id)arg1 inputMangerState:(id)arg2 ;
-(BOOL)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)arg1 inputManagerState:(id)arg2 ;
-(id)initWithTextInputTraits:(id)arg1 ;
-(BOOL)isEnabled;
@end


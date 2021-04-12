/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class TITextInputTraits;

@interface TIAutoshiftController : NSObject {

	BOOL _enabled;
	TITextInputTraits* _textInputTraits;

}

@property (nonatomic,readonly) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(TITextInputTraits *)textInputTraits;
-(id)initWithTextInputTraits:(id)arg1 ;
-(unsigned long long)actionForDocumentState:(id)arg1 inputMangerState:(id)arg2 ;
-(BOOL)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)arg1 inputManagerState:(id)arg2 ;
@end


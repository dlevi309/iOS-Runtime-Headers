/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class UITextInputAssistantItem;

@interface PKTextInputWindowFirstResponder : NSObject {

	BOOL _isVisible;
	BOOL _editableTextInput;
	BOOL _disableInputAssistant;
	BOOL _notesHandwritingResponder;
	long long _textInputSource;
	UITextInputAssistantItem* _inputAssistantItem;

}

@property (getter=isVisible,nonatomic,readonly) BOOL isVisible;                                                                                  //@synthesize isVisible=_isVisible - In the implementation block
@property (getter=isPencilTextInputSource,nonatomic,readonly) BOOL pencilTextInputSource; 
@property (nonatomic,readonly) long long textInputSource;                                                                                        //@synthesize textInputSource=_textInputSource - In the implementation block
@property (getter=isEditableTextInput,nonatomic,readonly) BOOL editableTextInput;                                                                //@synthesize editableTextInput=_editableTextInput - In the implementation block
@property (getter=isEditableTextInputWithPencilTextInputSource,nonatomic,readonly) BOOL editableTextInputWithPencilTextInputSource; 
@property (nonatomic,readonly) UITextInputAssistantItem * inputAssistantItem;                                                                    //@synthesize inputAssistantItem=_inputAssistantItem - In the implementation block
@property (assign,nonatomic) BOOL disableInputAssistant;                                                                                         //@synthesize disableInputAssistant=_disableInputAssistant - In the implementation block
@property (assign,getter=isNotesHandwritingResponder,nonatomic) BOOL notesHandwritingResponder;                                                  //@synthesize notesHandwritingResponder=_notesHandwritingResponder - In the implementation block
-(UITextInputAssistantItem *)inputAssistantItem;
-(BOOL)isVisible;
-(BOOL)isPencilTextInputSource;
-(BOOL)isEditableTextInput;
-(id)initWithIsVisible:(BOOL)arg1 isEditableTextInput:(BOOL)arg2 textInputSource:(long long)arg3 inputAssistantItem:(id)arg4 ;
-(BOOL)isEditableTextInputWithPencilTextInputSource;
-(long long)textInputSource;
-(BOOL)disableInputAssistant;
-(void)setDisableInputAssistant:(BOOL)arg1 ;
-(BOOL)isNotesHandwritingResponder;
-(void)setNotesHandwritingResponder:(BOOL)arg1 ;
@end


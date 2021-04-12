/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/

#import <RemoteTextInput/RemoteTextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardOutput, TIKeyboardIntermediateText, RTIStyledIntermediateText, NSDictionary, NSAttributedString, NSString, NSMutableDictionary;

@interface RTITextOperations : NSObject <NSSecureCoding> {

	TIKeyboardOutput* _keyboardOutput;
	TIKeyboardIntermediateText* _intermediateText;
	RTIStyledIntermediateText* _styledIntermediateText;
	NSDictionary* _attributedPlaceholders;
	NSAttributedString* _textCheckingAnnotatedString;
	NSString* _textToAssert;
	SEL _editingActionSelector;
	NSString* _textCheckingAnnotationToRemove;
	NSRange _selectionRangeToAssert;
	NSRange _textCheckingAnnotationRange;
	NSRange _textCheckingReplacementRange;
	NSRange _textCheckingAnnotationRemovalRange;

}

@property (nonatomic,retain) NSDictionary * attributedPlaceholders;                              //@synthesize attributedPlaceholders=_attributedPlaceholders - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutableAttributedPlaceholders; 
@property (nonatomic,readonly) TIKeyboardOutput * keyboardOutput;                                //@synthesize keyboardOutput=_keyboardOutput - In the implementation block
@property (nonatomic,retain) TIKeyboardIntermediateText * intermediateText;                      //@synthesize intermediateText=_intermediateText - In the implementation block
@property (nonatomic,retain) RTIStyledIntermediateText * styledIntermediateText;                 //@synthesize styledIntermediateText=_styledIntermediateText - In the implementation block
@property (nonatomic,copy) NSString * textToAssert;                                              //@synthesize textToAssert=_textToAssert - In the implementation block
@property (assign,nonatomic) NSRange selectionRangeToAssert;                                     //@synthesize selectionRangeToAssert=_selectionRangeToAssert - In the implementation block
@property (assign,nonatomic) SEL editingActionSelector;                                          //@synthesize editingActionSelector=_editingActionSelector - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedInsertionText; 
@property (assign,nonatomic) NSRange textCheckingAnnotationRange;                                //@synthesize textCheckingAnnotationRange=_textCheckingAnnotationRange - In the implementation block
@property (assign,nonatomic) NSRange textCheckingReplacementRange;                               //@synthesize textCheckingReplacementRange=_textCheckingReplacementRange - In the implementation block
@property (nonatomic,copy) NSAttributedString * textCheckingAnnotatedString;                     //@synthesize textCheckingAnnotatedString=_textCheckingAnnotatedString - In the implementation block
@property (assign,nonatomic) NSRange textCheckingAnnotationRemovalRange;                         //@synthesize textCheckingAnnotationRemovalRange=_textCheckingAnnotationRemovalRange - In the implementation block
@property (nonatomic,copy) NSString * textCheckingAnnotationToRemove;                            //@synthesize textCheckingAnnotationToRemove=_textCheckingAnnotationToRemove - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)insertAttributedText:(id)arg1 ;
-(NSString *)textToAssert;
-(NSRange)selectionRangeToAssert;
-(SEL)editingActionSelector;
-(TIKeyboardIntermediateText *)intermediateText;
-(TIKeyboardOutput *)keyboardOutput;
-(void)setTextToAssert:(NSString *)arg1 ;
-(void)setSelectionRangeToAssert:(NSRange)arg1 ;
-(void)setIntermediateText:(TIKeyboardIntermediateText *)arg1 ;
-(NSAttributedString *)textCheckingAnnotatedString;
-(void)setTextCheckingAnnotatedString:(NSAttributedString *)arg1 ;
-(RTIStyledIntermediateText *)styledIntermediateText;
-(NSRange)textCheckingAnnotationRange;
-(NSRange)textCheckingReplacementRange;
-(NSRange)textCheckingAnnotationRemovalRange;
-(NSString *)textCheckingAnnotationToRemove;
-(void)_createAttributedPlaceholdersIfNecessary;
-(NSMutableDictionary *)mutableAttributedPlaceholders;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(void)insertAttributedText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(NSAttributedString *)attributedInsertionText;
-(void)setStyledIntermediateText:(RTIStyledIntermediateText *)arg1 ;
-(NSDictionary *)attributedPlaceholders;
-(void)setAttributedPlaceholders:(NSDictionary *)arg1 ;
-(void)setEditingActionSelector:(SEL)arg1 ;
-(void)setTextCheckingAnnotationRange:(NSRange)arg1 ;
-(void)setTextCheckingReplacementRange:(NSRange)arg1 ;
-(void)setTextCheckingAnnotationRemovalRange:(NSRange)arg1 ;
-(void)setTextCheckingAnnotationToRemove:(NSString *)arg1 ;
@end


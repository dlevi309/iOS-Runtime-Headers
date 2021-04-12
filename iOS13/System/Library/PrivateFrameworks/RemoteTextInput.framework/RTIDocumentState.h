/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/

#import <RemoteTextInput/RemoteTextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIDocumentState, NSAttributedString, NSMutableDictionary;

@interface RTIDocumentState : NSObject <NSSecureCoding> {

	TIDocumentState* _documentState;
	NSAttributedString* _textCheckingAnnotatedString;
	NSMutableDictionary* __selectionRects;
	CGRect _caretRectInWindow;
	CGRect _firstSelectionRectInWindow;

}

@property (nonatomic,retain) NSMutableDictionary * _selectionRects;                       //@synthesize _selectionRects=__selectionRects - In the implementation block
@property (nonatomic,retain) TIDocumentState * documentState;                             //@synthesize documentState=_documentState - In the implementation block
@property (assign,nonatomic) CGRect caretRectInWindow;                                    //@synthesize caretRectInWindow=_caretRectInWindow - In the implementation block
@property (assign,nonatomic) CGRect firstSelectionRectInWindow;                           //@synthesize firstSelectionRectInWindow=_firstSelectionRectInWindow - In the implementation block
@property (assign,nonatomic) NSRange selectedTextRange; 
@property (nonatomic,readonly) NSRange markedTextRange; 
@property (nonatomic,copy) NSAttributedString * textCheckingAnnotatedString;              //@synthesize textCheckingAnnotatedString=_textCheckingAnnotatedString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)selectedTextRange;
-(void)setSelectedTextRange:(NSRange)arg1 ;
-(NSRange)markedTextRange;
-(TIDocumentState *)documentState;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(NSRange)deltaForSelectionRange:(NSRange)arg1 ;
-(void)set_selectionRects:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)_selectionRects;
-(void)resetTextRects;
-(void)addTextRect:(CGRect)arg1 forCharacterRange:(NSRange)arg2 ;
-(unsigned long long)characterIndexForPoint:(CGPoint)arg1 ;
-(CGRect)firstRectForCharacterRange:(NSRange)arg1 ;
-(CGRect)caretRectInWindow;
-(CGRect)firstSelectionRectInWindow;
-(NSAttributedString *)textCheckingAnnotatedString;
-(void)setCaretRectInWindow:(CGRect)arg1 ;
-(void)setFirstSelectionRectInWindow:(CGRect)arg1 ;
-(void)setTextCheckingAnnotatedString:(NSAttributedString *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/

#import <RemoteTextInput/RemoteTextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TIDocumentState, NSAttributedString, NSMutableDictionary;

@interface RTIDocumentState : NSObject <NSSecureCoding, NSCopying> {

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
-(void)setSelectedTextRange:(NSRange)arg1 ;
-(NSRange)markedTextRange;
-(NSRange)selectedTextRange;
-(TIDocumentState *)documentState;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(id)init;
-(void)resetTextRects;
-(NSMutableDictionary *)_selectionRects;
-(void)set_selectionRects:(NSMutableDictionary *)arg1 ;
-(void)addTextRect:(CGRect)arg1 forCharacterRange:(NSRange)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSRange)deltaForSelectionRange:(NSRange)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)characterIndexForPoint:(CGPoint)arg1 ;
-(CGRect)firstRectForCharacterRange:(NSRange)arg1 ;
-(CGRect)caretRectInWindow;
-(CGRect)firstSelectionRectInWindow;
-(NSAttributedString *)textCheckingAnnotatedString;
-(void)setCaretRectInWindow:(CGRect)arg1 ;
-(void)setFirstSelectionRectInWindow:(CGRect)arg1 ;
-(void)setTextCheckingAnnotatedString:(NSAttributedString *)arg1 ;
@end


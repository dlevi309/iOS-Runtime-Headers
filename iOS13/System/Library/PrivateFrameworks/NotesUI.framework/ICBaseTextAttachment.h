/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>
#import <libobjc.A.dylib/TTAttachment.h>

@class ICAttachment, NSString;

@interface ICBaseTextAttachment : NSTextAttachment <TTAttachment> {

	ICAttachment* _attachment;

}

@property (nonatomic,retain) ICAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)usesTextAttachmentView;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(ICAttachment *)attachment;
-(id)initWithData:(id)arg1 ofType:(id)arg2 ;
-(BOOL)allowsTextAttachmentView;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(void)detachView:(id)arg1 fromParentView:(id)arg2 ;
-(id)initWithAttachment:(id)arg1 ;
-(BOOL)isEqualToModelComparable:(id)arg1 ;
-(id)attachmentIdentifier;
-(id)attachmentUTI;
-(id)attachmentInContext:(id)arg1 ;
-(double)viewCornerRadius;
-(id)attachmentAttributesForAttributedString;
-(BOOL)canDragWithoutSelecting;
-(void)fixAttachmentForAttributedString:(id)arg1 range:(NSRange)arg2 forPlainText:(BOOL)arg3 forStandardizedText:(BOOL)arg4 ;
-(id)printableTextContentForAppearanceType:(unsigned long long)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICTextAttachment.h>

@interface ICTableTextAttachment : ICTextAttachment {

	double _lastAvailableWidth;
	CGSize _lastAttachmentSize;

}

@property (assign,nonatomic) double lastAvailableWidth;              //@synthesize lastAvailableWidth=_lastAvailableWidth - In the implementation block
@property (assign,nonatomic) CGSize lastAttachmentSize;              //@synthesize lastAttachmentSize=_lastAttachmentSize - In the implementation block
-(SCD_Struct_IC0)attachmentBoundsMargins;
-(BOOL)canDragWithoutSelecting;
-(void)fixAttachmentForAttributedString:(id)arg1 range:(NSRange)arg2 forPlainText:(BOOL)arg3 forStandardizedText:(BOOL)arg4 ;
-(id)printableTextContentForAppearanceType:(unsigned long long)arg1 ;
-(double)lastAvailableWidth;
-(void)setLastAvailableWidth:(double)arg1 ;
-(CGSize)lastAttachmentSize;
-(void)setLastAttachmentSize:(CGSize)arg1 ;
@end


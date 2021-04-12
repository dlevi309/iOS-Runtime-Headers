/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class UIFont;

@interface WFSlotTemplateImageAttachment : NSTextAttachment {

	UIFont* _fontForAlignment;

}

@property (nonatomic,retain) UIFont * fontForAlignment;              //@synthesize fontForAlignment=_fontForAlignment - In the implementation block
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(UIFont *)fontForAlignment;
-(void)setFontForAlignment:(UIFont *)arg1 ;
@end


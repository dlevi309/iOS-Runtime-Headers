/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
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


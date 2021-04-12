/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class UIFont;

@interface TLKImageAttachment : NSTextAttachment {

	UIFont* _font;

}

@property (nonatomic,retain) UIFont * font;              //@synthesize font=_font - In the implementation block
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
@end


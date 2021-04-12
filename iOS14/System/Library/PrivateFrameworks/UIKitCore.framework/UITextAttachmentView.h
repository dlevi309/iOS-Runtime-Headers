/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSTextAttachmentCell.h>

@class NSTextAttachment, NSString;

@interface UITextAttachmentView : UIView <NSTextAttachmentCell> {

	NSTextAttachment* _attachment;

}

@property (assign,nonatomic,__weak) NSTextAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(CGSize)cellSize;
-(id)initWithContentView:(id)arg1 ;
-(NSTextAttachment *)attachment;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(CGPoint)cellBaselineOffset;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(id)initWithTextAttachment:(id)arg1 image:(id)arg2 ;
-(void)setAttachment:(NSTextAttachment *)arg1 ;
-(id)contentView;
@end


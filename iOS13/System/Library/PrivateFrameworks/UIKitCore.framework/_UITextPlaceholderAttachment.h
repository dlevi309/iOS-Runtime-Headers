/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class NSDictionary;

@interface _UITextPlaceholderAttachment : NSTextAttachment {

	NSDictionary* _typingAttributesBeforeInsertion;
	NSRange _attachmentRange;

}

@property (assign,nonatomic) NSRange attachmentRange;                                   //@synthesize attachmentRange=_attachmentRange - In the implementation block
@property (nonatomic,copy) NSDictionary * typingAttributesBeforeInsertion;              //@synthesize typingAttributesBeforeInsertion=_typingAttributesBeforeInsertion - In the implementation block
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)setAttachmentRange:(NSRange)arg1 ;
-(NSRange)attachmentRange;
-(NSDictionary *)typingAttributesBeforeInsertion;
-(void)setTypingAttributesBeforeInsertion:(NSDictionary *)arg1 ;
@end


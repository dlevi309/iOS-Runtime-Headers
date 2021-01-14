/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTextMessagePartChatItem.h>

@class NSArray, NSString;

@interface CKAggregateMessagePartChatItem : CKTextMessagePartChatItem {

	NSArray* _subparts;

}

@property (nonatomic,copy) NSArray * subparts;                     //@synthesize subparts=_subparts - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(NSArray *)subparts;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(Class)balloonViewClass;
-(id)compositionWithContext:(id)arg1 ;
-(id)pasteboardItemProviders;
-(id)loadTranscriptText;
-(void)setSubparts:(NSArray *)arg1 ;
-(NSString *)title;
@end


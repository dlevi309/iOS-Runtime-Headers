/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKTextMessagePartChatItem.h>

@class NSArray, NSString;

@interface CKAggregateMessagePartChatItem : CKTextMessagePartChatItem {

	NSArray* _subparts;

}

@property (nonatomic,copy) NSArray * subparts;                     //@synthesize subparts=_subparts - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
-(NSString *)title;
-(id)composition;
-(NSArray *)subparts;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(Class)balloonViewClass;
-(id)pasteboardItems;
-(id)loadTranscriptText;
-(void)setSubparts:(NSArray *)arg1 ;
@end


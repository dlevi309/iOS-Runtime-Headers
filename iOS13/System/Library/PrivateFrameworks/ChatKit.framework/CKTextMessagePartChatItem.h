/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKMessagePartChatItem.h>

@class UIItemProvider, NSAttributedString;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem {

	UIItemProvider* _dragItemProvider;

}

@property (nonatomic,copy,readonly) NSAttributedString * text; 
@property (nonatomic,copy,readonly) NSAttributedString * fallbackCorruptText; 
@property (nonatomic,copy,readonly) NSAttributedString * subject; 
@property (nonatomic,readonly) BOOL containsHyperlink; 
@property (nonatomic,readonly) BOOL containsExcessiveLineHeightCharacters; 
-(id)_time;
-(NSAttributedString *)text;
-(NSAttributedString *)subject;
-(id)composition;
-(Class)balloonViewClass;
-(id)pasteboardItems;
-(id)loadTranscriptText;
-(id)dragItemProvider;
-(id)_attributedTextWithTextColor:(id)arg1 ;
-(BOOL)shouldUseBigEmoji;
-(id)_fallbackCorruptMessageTextWithTextColor:(id)arg1 ;
-(BOOL)containsHyperlink;
-(BOOL)showMoneyResults;
-(Class)impactBalloonViewClass;
-(NSAttributedString *)fallbackCorruptText;
-(id)sendAnimationTextWithColor:(id)arg1 ;
-(BOOL)containsExcessiveLineHeightCharacters;
@end


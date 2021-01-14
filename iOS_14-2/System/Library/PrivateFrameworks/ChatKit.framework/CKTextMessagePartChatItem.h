/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessagePartChatItem.h>

@class NSItemProvider, NSAttributedString;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem {

	NSItemProvider* _dragItemProvider;
	BOOL _shouldUseBigEmoji;
	BOOL _hasCachedBigEmoji;

}

@property (nonatomic,copy,readonly) NSAttributedString * text; 
@property (nonatomic,copy,readonly) NSAttributedString * fallbackCorruptText; 
@property (nonatomic,copy,readonly) NSAttributedString * subject; 
@property (nonatomic,readonly) BOOL containsHyperlink; 
@property (nonatomic,readonly) BOOL containsExcessiveLineHeightCharacters; 
@property (nonatomic,readonly) BOOL shouldUseBigEmoji; 
-(id)_time;
-(NSAttributedString *)subject;
-(id)bodyTextFont;
-(id)meMentionsTextColor;
-(BOOL)shouldUseBigEmoji;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(Class)balloonViewClass;
-(id)_attributedTextWithTextColor:(id)arg1 ;
-(BOOL)containsHyperlink;
-(id)_fallbackCorruptMessageTextWithTextColor:(id)arg1 ;
-(BOOL)showMoneyResults;
-(BOOL)mentionsMe:(id)arg1 ;
-(Class)impactBalloonViewClass;
-(NSAttributedString *)fallbackCorruptText;
-(id)sendAnimationTextWithColor:(id)arg1 ;
-(BOOL)containsExcessiveLineHeightCharacters;
-(id)compositionWithContext:(id)arg1 ;
-(NSAttributedString *)text;
-(BOOL)allowsMentions;
-(id)dragItemProvider;
-(id)loadTranscriptText;
@end


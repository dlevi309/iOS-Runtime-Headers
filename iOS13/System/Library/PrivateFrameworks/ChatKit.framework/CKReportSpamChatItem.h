/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKStampChatItem.h>

@class NSAttributedString;

@interface CKReportSpamChatItem : CKStampChatItem {

	NSAttributedString* _transcriptButtonText;

}

@property (nonatomic,copy) NSAttributedString * transcriptButtonText;                          //@synthesize transcriptButtonText=_transcriptButtonText - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * internalPhishingWarning; 
-(Class)cellClass;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(BOOL)isGroupChat;
-(NSAttributedString *)transcriptButtonText;
-(void)setTranscriptButtonText:(NSAttributedString *)arg1 ;
-(BOOL)showReportSMSSpam;
-(NSAttributedString *)internalPhishingWarning;
-(BOOL)hasMultipleMessages;
-(id)transcriptTextForSpam:(BOOL)arg1 ;
@end


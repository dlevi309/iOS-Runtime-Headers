/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isGroupChat;
-(Class)cellClass;
-(NSAttributedString *)internalPhishingWarning;
-(BOOL)hasMultipleMessages;
-(id)transcriptTextForSpam:(BOOL)arg1 ;
-(NSAttributedString *)transcriptButtonText;
-(void)setTranscriptButtonText:(NSAttributedString *)arg1 ;
-(id)loadTranscriptText;
-(BOOL)showReportSMSSpam;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@class NSAttributedString;

@interface CKMessageStatusChatItem : CKChatItem {

	BOOL _buttonSizeLoaded;
	BOOL _labelSizeLoaded;
	NSAttributedString* _transcriptButtonText;
	CGSize _buttonSize;
	CGSize _labelSize;
	UIEdgeInsets _buttonTextAlignmentInsets;
	UIEdgeInsets _labelTextAlignmentInsets;

}

@property (nonatomic,copy) NSAttributedString * transcriptButtonText;                      //@synthesize transcriptButtonText=_transcriptButtonText - In the implementation block
@property (assign,getter=isButtonSizeLoaded,nonatomic) BOOL buttonSizeLoaded;              //@synthesize buttonSizeLoaded=_buttonSizeLoaded - In the implementation block
@property (assign,getter=isLabelSizeLoaded,nonatomic) BOOL labelSizeLoaded;                //@synthesize labelSizeLoaded=_labelSizeLoaded - In the implementation block
@property (nonatomic,readonly) CGSize buttonSize;                                          //@synthesize buttonSize=_buttonSize - In the implementation block
@property (nonatomic,readonly) CGSize labelSize;                                           //@synthesize labelSize=_labelSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets buttonTextAlignmentInsets;                     //@synthesize buttonTextAlignmentInsets=_buttonTextAlignmentInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets labelTextAlignmentInsets;                      //@synthesize labelTextAlignmentInsets=_labelTextAlignmentInsets - In the implementation block
@property (nonatomic,readonly) long long buttonType; 
@property (nonatomic,readonly) char statusAlignment; 
@property (nonatomic,readonly) BOOL allowsEffectAutoPlayback; 
+(id)thePastDateFormatter;
+(id)thisWeekRelativeDateFormatter;
+(id)todayDateFormatter;
+(id)createImageAsTextAttachment;
-(unsigned long long)count;
-(id)now;
-(CGSize)size;
-(id)time;
-(CGSize)labelSize;
-(UIEdgeInsets)contentInsets;
-(long long)buttonType;
-(BOOL)isFromMe;
-(Class)cellClass;
-(long long)statusType;
-(CGSize)buttonSize;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(char)transcriptOrientation;
-(UIEdgeInsets)transcriptTextAlignmentInsets;
-(void)unloadTranscriptText;
-(void)unloadSize;
-(UIEdgeInsets)buttonTextAlignmentInsets;
-(BOOL)wantsDrawerLayout;
-(long long)expireStatusType;
-(CGSize)loadLabelSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(CGSize)loadButtonSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(id)loadTranscriptButtonText;
-(BOOL)allowsEffectAutoPlayback;
-(id)effectsControlStatusTextForEffectStyleID:(id)arg1 ;
-(NSAttributedString *)transcriptButtonText;
-(UIEdgeInsets)labelTextAlignmentInsets;
-(char)statusAlignment;
-(void)setTranscriptButtonText:(NSAttributedString *)arg1 ;
-(BOOL)isButtonSizeLoaded;
-(void)setButtonSizeLoaded:(BOOL)arg1 ;
-(BOOL)isLabelSizeLoaded;
-(void)setLabelSizeLoaded:(BOOL)arg1 ;
@end


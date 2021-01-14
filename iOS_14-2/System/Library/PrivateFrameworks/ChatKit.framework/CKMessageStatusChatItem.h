/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL shouldHideDuringDarkFSM; 
+(id)thePastDateFormatter;
+(id)thisWeekRelativeDateFormatter;
+(id)todayDateFormatter;
+(id)createImageAsTextAttachment;
-(id)now;
-(unsigned long long)layoutType;
-(id)time;
-(char)transcriptOrientation;
-(UIEdgeInsets)contentInsets;
-(CGSize)size;
-(void)unloadSize;
-(long long)statusType;
-(CGSize)buttonSize;
-(unsigned long long)count;
-(Class)cellClass;
-(CGSize)labelSize;
-(UIEdgeInsets)transcriptTextAlignmentInsets;
-(void)unloadTranscriptText;
-(UIEdgeInsets)buttonTextAlignmentInsets;
-(BOOL)wantsDrawerLayout;
-(long long)expireStatusType;
-(id)loadTranscriptButtonText;
-(CGSize)loadLabelSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(CGSize)loadButtonSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(BOOL)allowsEffectAutoPlayback;
-(id)effectsControlStatusTextForEffectStyleID:(id)arg1 ;
-(NSAttributedString *)transcriptButtonText;
-(char)statusAlignment;
-(UIEdgeInsets)labelTextAlignmentInsets;
-(BOOL)shouldHideDuringDarkFSM;
-(void)setTranscriptButtonText:(NSAttributedString *)arg1 ;
-(BOOL)isButtonSizeLoaded;
-(void)setButtonSizeLoaded:(BOOL)arg1 ;
-(BOOL)isLabelSizeLoaded;
-(void)setLabelSizeLoaded:(BOOL)arg1 ;
-(BOOL)isFromMe;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(id)layoutGroupSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
-(long long)buttonType;
@end


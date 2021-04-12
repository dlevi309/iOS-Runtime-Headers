/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessagePartChatItem.h>

@class IMTranscriptPluginChatItem, NSString, NSArray;

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem {

	BOOL _wantsTranscriptGroupMonograms;
	BOOL _wantsOutline;
	BOOL _isAppearing;
	BOOL _isHandwriting;
	BOOL _isBusiness;
	IMTranscriptPluginChatItem* _imTranscriptPluginChatItem;
	NSString* _conversationID;
	NSArray* _recipients;

}

@property (nonatomic,retain) IMTranscriptPluginChatItem * imTranscriptPluginChatItem;              //@synthesize imTranscriptPluginChatItem=_imTranscriptPluginChatItem - In the implementation block
@property (nonatomic,readonly) BOOL isHandwriting;                                                 //@synthesize isHandwriting=_isHandwriting - In the implementation block
@property (nonatomic,retain) NSString * conversationID;                                            //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                                 //@synthesize recipients=_recipients - In the implementation block
@property (assign,nonatomic) BOOL isBusiness;                                                      //@synthesize isBusiness=_isBusiness - In the implementation block
@property (nonatomic,readonly) BOOL wantsTranscriptGroupMonograms;                                 //@synthesize wantsTranscriptGroupMonograms=_wantsTranscriptGroupMonograms - In the implementation block
@property (nonatomic,readonly) BOOL wantsBalloonGradient; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL wantsOutline;                                                  //@synthesize wantsOutline=_wantsOutline - In the implementation block
@property (nonatomic,readonly) IMTranscriptPluginChatItem * IMChatItem; 
@property (nonatomic,readonly) BOOL isPlayed; 
@property (nonatomic,readonly) BOOL isSaved; 
@property (assign,nonatomic) BOOL isAppearing;                                                     //@synthesize isAppearing=_isAppearing - In the implementation block
-(NSArray *)recipients;
-(unsigned long long)layoutType;
-(id)sender;
-(id)contact;
-(id)message;
-(UIEdgeInsets)textAlignmentInsets;
-(char)transcriptOrientation;
-(void)setIsAppearing:(BOOL)arg1 ;
-(BOOL)wantsOutline;
-(id)loadTranscriptDrawerText;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)contentViewControllerForContext:(id)arg1 ;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(UIEdgeInsets)contentInsets;
-(id)cellIdentifier;
-(BOOL)isPlayed;
-(NSString *)bundleIdentifier;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(Class)cellClass;
-(BOOL)isBusiness;
-(id)menuTitle;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(BOOL)canForward;
-(Class)balloonViewClass;
-(BOOL)isAppearing;
-(id)compositionWithContext:(id)arg1 ;
-(void)setIsBusiness:(BOOL)arg1 ;
-(IMTranscriptPluginChatItem *)imTranscriptPluginChatItem;
-(void)setImTranscriptPluginChatItem:(IMTranscriptPluginChatItem *)arg1 ;
-(void)_configureBalloonController:(id)arg1 conversationID:(id)arg2 recipients:(id)arg3 isBusiness:(BOOL)arg4 ;
-(void)_cacheConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(BOOL)arg3 ;
-(id)snapshotGUIDForPluginPayload:(id)arg1 ;
-(BOOL)isHandwriting;
-(BOOL)shouldSnapshot;
-(id)balloonControllerForContext:(id)arg1 ;
-(BOOL)canInlineReply;
-(id)dragItemProvider;
-(void)performHostAppResumeWithContext:(id)arg1 ;
-(id)extensibleViewForContext:(id)arg1 ;
-(id)extensibleViewControllerForContext:(id)arg1 ;
-(void)relinquishBalloonControllerForContext:(id)arg1 ;
-(BOOL)canCopy;
-(BOOL)wantsTranscriptGroupMonograms;
-(void)configureWithConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(BOOL)arg3 context:(id)arg4 ;
-(void)releaseBalloonControllerIfNeededForContext:(id)arg1 ;
-(id)pluginDisplayContainerForContext:(id)arg1 ;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(id)layoutGroupSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
-(BOOL)isSaved;
-(BOOL)wantsBalloonGradient;
-(id)layoutItemSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
@end


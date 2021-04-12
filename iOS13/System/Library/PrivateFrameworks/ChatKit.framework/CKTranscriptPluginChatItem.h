/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessagePartChatItem.h>

@protocol CKTranscriptBalloonPluginController;
@class IMTranscriptPluginChatItem, NSString, NSArray, UIViewController;

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem {

	BOOL _isAppearing;
	BOOL _isHandwriting;
	BOOL _isBusiness;
	id<CKTranscriptBalloonPluginController> _balloonController;
	IMTranscriptPluginChatItem* _imTranscriptPluginChatItem;
	NSString* _conversationID;
	NSArray* _recipients;

}

@property (assign,nonatomic,__weak) id<CKTranscriptBalloonPluginController> balloonController;              //@synthesize balloonController=_balloonController - In the implementation block
@property (nonatomic,retain) IMTranscriptPluginChatItem * imTranscriptPluginChatItem;                       //@synthesize imTranscriptPluginChatItem=_imTranscriptPluginChatItem - In the implementation block
@property (nonatomic,readonly) BOOL isHandwriting;                                                          //@synthesize isHandwriting=_isHandwriting - In the implementation block
@property (nonatomic,retain) NSString * conversationID;                                                     //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                                          //@synthesize recipients=_recipients - In the implementation block
@property (assign,nonatomic) BOOL isBusiness;                                                               //@synthesize isBusiness=_isBusiness - In the implementation block
@property (nonatomic,readonly) UIView*<CKTranscriptPluginView> extensableView; 
@property (nonatomic,readonly) UIViewController * extensibleViewController; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (nonatomic,readonly) BOOL wantsTranscriptGroupMonograms; 
@property (nonatomic,readonly) BOOL wantsBalloonGradient; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL wantsOutline; 
@property (nonatomic,readonly) IMTranscriptPluginChatItem * IMChatItem; 
@property (nonatomic,readonly) UIViewController * contentViewController; 
@property (nonatomic,readonly) BOOL isPlayed; 
@property (nonatomic,readonly) BOOL isSaved; 
@property (assign,nonatomic) BOOL isAppearing;                                                              //@synthesize isAppearing=_isAppearing - In the implementation block
-(NSString *)bundleIdentifier;
-(id)message;
-(id)contact;
-(id)sender;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(BOOL)isInteractive;
-(UIViewController *)contentViewController;
-(id)menuTitle;
-(BOOL)canCopy;
-(BOOL)isAppearing;
-(void)setIsAppearing:(BOOL)arg1 ;
-(BOOL)isPlayed;
-(id)composition;
-(id)cellIdentifier;
-(Class)cellClass;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(BOOL)isBusiness;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(Class)balloonViewClass;
-(BOOL)handlePresentationAction;
-(id)pasteboardItems;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(UIEdgeInsets)textAlignmentInsets;
-(char)transcriptOrientation;
-(void)performHostAppResume;
-(BOOL)canForward;
-(id)dragItemProvider;
-(BOOL)wantsDrawerLayout;
-(BOOL)isSaved;
-(id)loadTranscriptDrawerText;
-(void)pluginContentViewWillDisappear;
-(UIView*<CKTranscriptPluginView>)extensableView;
-(void)pluginContentViewDidDisappear;
-(UIViewController *)extensibleViewController;
-(void)relinquishBalloonController;
-(void)pluginContentViewWillAppear;
-(BOOL)wantsTranscriptGroupMonograms;
-(void)configureWithConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(BOOL)arg3 ;
-(void)releaseBalloonControllerIfNeeded;
-(BOOL)wantsOutline;
-(id)pluginDisplayContainer;
-(void)setImTranscriptPluginChatItem:(IMTranscriptPluginChatItem *)arg1 ;
-(id<CKTranscriptBalloonPluginController>)balloonController;
-(IMTranscriptPluginChatItem *)imTranscriptPluginChatItem;
-(void)_configureBalloonController:(id)arg1 conversationID:(id)arg2 recipients:(id)arg3 isBusiness:(BOOL)arg4 ;
-(void)_cacheConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(BOOL)arg3 ;
-(void)setIsBusiness:(BOOL)arg1 ;
-(id)snapshotGUIDForPluginPayload:(id)arg1 ;
-(BOOL)isHandwriting;
-(BOOL)shouldSnapshot;
-(BOOL)wantsBalloonGradient;
-(void)setBalloonController:(id<CKTranscriptBalloonPluginController>)arg1 ;
@end


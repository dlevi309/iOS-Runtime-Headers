/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


#import <IMCore/IMCore-Structs.h>
@class IMChat, IMPluginPayload, NSURL, DDScannerResult, NSArray, NSMutableSet, NSString, IMMessage, LPLinkMetadata, NSData, NSAttributedString;

@interface IMBalloonPluginDataSource : NSObject {

	BOOL _payloadInShelf;
	BOOL _initialMessageIsFromMe;
	BOOL _allowedByScreenTime;
	BOOL _isLast;
	BOOL _isShowingLatestMessageAsBreadcrumb;
	BOOL _hasInvalidatedSize;
	BOOL _parentChatHasAllUnknownRecipients;
	BOOL _showingLatestMessageAsBreadcrumb;
	IMChat* _chat;
	IMPluginPayload* _pluginPayload;
	NSURL* _url;
	DDScannerResult* _dataDetectedResult;
	NSArray* _attachmentGUIDs;
	NSURL* _URLToOpenOnTapAction;
	NSArray* _pendingAttachmentData;
	NSMutableSet* _temporaryAttachmentURLs;
	NSString* __imMessageGUID;
	NSString* _messageGUID;
	NSString* _sessionGUID;
	NSString* _bundleID;
	NSArray* _consumedPayloads;
	NSString* _guidOfLastMessageInSession;
	long long _messageIDOfLastMessageInSession;

}

@property (nonatomic,readonly) BOOL wantsInteractiveContentView; 
@property (nonatomic,retain) NSURL * url;                                                                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) DDScannerResult * dataDetectedResult;                                                             //@synthesize dataDetectedResult=_dataDetectedResult - In the implementation block
@property (nonatomic,retain) NSArray * attachmentGUIDs;                                                                        //@synthesize attachmentGUIDs=_attachmentGUIDs - In the implementation block
@property (nonatomic,retain) IMPluginPayload * pluginPayload;                                                                  //@synthesize pluginPayload=_pluginPayload - In the implementation block
@property (nonatomic,retain) NSArray * pendingAttachmentData;                                                                  //@synthesize pendingAttachmentData=_pendingAttachmentData - In the implementation block
@property (nonatomic,retain) NSMutableSet * temporaryAttachmentURLs;                                                           //@synthesize temporaryAttachmentURLs=_temporaryAttachmentURLs - In the implementation block
@property (nonatomic,retain) NSString * _imMessageGUID;                                                                        //@synthesize _imMessageGUID=__imMessageGUID - In the implementation block
@property (assign,setter=setShowingLatestMessageAsBreadcrumb:,nonatomic) BOOL isShowingLatestMessageAsBreadcrumb;              //@synthesize isShowingLatestMessageAsBreadcrumb=_isShowingLatestMessageAsBreadcrumb - In the implementation block
@property (assign,nonatomic) BOOL allowedByScreenTime;                                                                         //@synthesize allowedByScreenTime=_allowedByScreenTime - In the implementation block
@property (nonatomic,retain) NSString * messageGUID;                                                                           //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,retain) NSString * sessionGUID;                                                                           //@synthesize sessionGUID=_sessionGUID - In the implementation block
@property (nonatomic,retain,readonly) NSString * bundleID;                                                                     //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidatedSize;                                                                          //@synthesize hasInvalidatedSize=_hasInvalidatedSize - In the implementation block
@property (assign,nonatomic) BOOL payloadInShelf;                                                                              //@synthesize payloadInShelf=_payloadInShelf - In the implementation block
@property (nonatomic,readonly) IMMessage * imMessage; 
@property (nonatomic,retain) IMChat * chat;                                                                                    //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) NSArray * consumedPayloads;                                                                       //@synthesize consumedPayloads=_consumedPayloads - In the implementation block
@property (assign,nonatomic) BOOL initialMessageIsFromMe;                                                                      //@synthesize initialMessageIsFromMe=_initialMessageIsFromMe - In the implementation block
@property (assign,nonatomic) BOOL parentChatHasAllUnknownRecipients;                                                           //@synthesize parentChatHasAllUnknownRecipients=_parentChatHasAllUnknownRecipients - In the implementation block
@property (nonatomic,readonly) LPLinkMetadata * richLinkMetadata; 
@property (nonatomic,retain,readonly) NSData * messagePayloadDataForSending; 
@property (assign,setter=setLast:,nonatomic) BOOL isLast;                                                                      //@synthesize isLast=_isLast - In the implementation block
@property (getter=isShowingLatestMessageAsBreadcrumb,nonatomic,readonly) BOOL showingLatestMessageAsBreadcrumb;                //@synthesize showingLatestMessageAsBreadcrumb=_showingLatestMessageAsBreadcrumb - In the implementation block
@property (nonatomic,retain,readonly) NSString * guidOfLastMessageInSession;                                                   //@synthesize guidOfLastMessageInSession=_guidOfLastMessageInSession - In the implementation block
@property (nonatomic,readonly) long long messageIDOfLastMessageInSession;                                                      //@synthesize messageIDOfLastMessageInSession=_messageIDOfLastMessageInSession - In the implementation block
@property (nonatomic,readonly) BOOL supportsDynamicSize; 
@property (nonatomic,retain) NSData * payload; 
@property (nonatomic,readonly) BOOL wantsStatusItem; 
@property (nonatomic,retain,readonly) NSString * statusString; 
@property (nonatomic,retain,readonly) NSAttributedString * statusAttributedString; 
@property (nonatomic,readonly) BOOL wantsReplyFromContentView; 
@property (nonatomic,readonly) NSURL * URLToOpenOnTapAction;                                                                   //@synthesize URLToOpenOnTapAction=_URLToOpenOnTapAction - In the implementation block
@property (nonatomic,readonly) NSArray * allPayloads; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL isPlayed; 
+(id)previewSummaryForPluginBundle:(id)arg1 ;
+(id)previewSummary;
+(BOOL)supportsURL:(id)arg1 ;
+(id)individualPreviewSummaryForPluginPayload:(id)arg1 ;
+(BOOL)supportsIndividualPreviewSummaries;
+(id)previewSummaryForPluginPayload:(id)arg1 withBundleID:(id)arg2 previewAttachmentURL:(id*)arg3 previewAttachmentUTI:(id*)arg4 ;
+(id)replaceHandleWithContactNameInString:(id)arg1 forAccount:(id)arg2 additionalHandles:(id)arg3 ;
+(id)unlocalizedPreviewSummaryForPluginBundle:(id)arg1 pluginDisplayName:(id)arg2 ;
-(BOOL)wantsInteractiveContentView;
-(void)setPayload:(NSData *)arg1 ;
-(IMChat *)chat;
-(BOOL)isLast;
-(void)stopPlayback;
-(void)setMessageGUID:(NSString *)arg1 ;
-(NSURL *)URLToOpenOnTapAction;
-(IMPluginPayload *)pluginPayload;
-(id)initWithPluginPayload:(id)arg1 ;
-(NSString *)messageGUID;
-(void)sendPayload:(id)arg1 ;
-(BOOL)wantsStatusItem;
-(BOOL)allowedByScreenTime;
-(BOOL)isPlayed;
-(LPLinkMetadata *)richLinkMetadata;
-(void)didTapStatusItem;
-(BOOL)wantsReplyFromContentView;
-(void)payloadWillSendFromShelf;
-(void)setChat:(IMChat *)arg1 ;
-(NSData *)payload;
-(NSURL *)url;
-(void)payloadWillEnterShelf;
-(void)beginShowingLastConsumedBreadcrumbForOutgoingPayload:(id)arg1 ;
-(BOOL)supportsDynamicSize;
-(void)setPayloadInShelf:(BOOL)arg1 ;
-(id)description;
-(void)setAllowedByScreenTime:(BOOL)arg1 ;
-(DDScannerResult *)dataDetectedResult;
-(void)setDataDetectedResult:(DDScannerResult *)arg1 ;
-(void)datasourceWasMovedToNewGuid:(id)arg1 ;
-(BOOL)parentChatHasAllUnknownRecipients;
-(NSString *)sessionGUID;
-(void)setSessionGUID:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLast:(BOOL)arg1 ;
-(NSAttributedString *)statusAttributedString;
-(NSString *)bundleID;
-(void)markAsPlayed;
-(void)playbackWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isFromMe;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)statusString;
-(id)_replaceHandleWithContactNameInString:(id)arg1 ;
-(id)individualPreviewSummary;
-(void)setPluginPayload:(IMPluginPayload *)arg1 ;
-(unsigned long long)playbackType;
-(void)endShowingLastConsumedBreadcrumb;
-(id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4 ;
-(void)_updateTemporaryAttachmentURLsForPluginPayload;
-(void)checkForAllowedByScreenTime;
-(NSArray *)consumedPayloads;
-(void)setPendingAttachmentData:(NSArray *)arg1 ;
-(NSArray *)pendingAttachmentData;
-(NSString *)_imMessageGUID;
-(void)sendPayload:(id)arg1 attachments:(id)arg2 ;
-(void)updatePayload:(id)arg1 attachments:(id)arg2 ;
-(unsigned long long)_updateWithPluginPayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3 ;
-(void)pluginPayloadDidChange:(unsigned long long)arg1 ;
-(void)payloadDidChange;
-(NSMutableSet *)temporaryAttachmentURLs;
-(void)setTemporaryAttachmentURLs:(NSMutableSet *)arg1 ;
-(long long)messageIDOfLastMessageInSession;
-(BOOL)_senderIsSameBetweenPayload:(id)arg1 andOtherPayload:(id)arg2 ;
-(void)_removeTemporaryAttachmentURLs;
-(void)setHasInvalidatedSize:(BOOL)arg1 ;
-(NSString *)guidOfLastMessageInSession;
-(id)individualPreviewAttachmentFileAndUTI:(id*)arg1 ;
-(id)_summaryText;
-(BOOL)isShowingLatestMessageAsBreadcrumb;
-(BOOL)isShowingLatestMessageAsBreadcrumb;
-(void)setShowingLatestMessageAsBreadcrumb:(BOOL)arg1 ;
-(void)_reloadLatestUnconsumedBreadcrumb;
-(NSArray *)allPayloads;
-(void)setPayload:(id)arg1 attachments:(id)arg2 ;
-(NSData *)messagePayloadDataForSending;
-(IMMessage *)imMessage;
-(void)updatePayload:(id)arg1 ;
-(void)_updatePayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3 ;
-(void)thumbnailURLWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)statusStringNeedsUpdate;
-(void)needsResize;
-(BOOL)payloadInShelf;
-(NSArray *)attachmentGUIDs;
-(void)setAttachmentGUIDs:(NSArray *)arg1 ;
-(BOOL)initialMessageIsFromMe;
-(void)setInitialMessageIsFromMe:(BOOL)arg1 ;
-(void)set_imMessageGUID:(NSString *)arg1 ;
-(BOOL)hasInvalidatedSize;
-(void)setConsumedPayloads:(NSArray *)arg1 ;
-(void)setParentChatHasAllUnknownRecipients:(BOOL)arg1 ;
@end


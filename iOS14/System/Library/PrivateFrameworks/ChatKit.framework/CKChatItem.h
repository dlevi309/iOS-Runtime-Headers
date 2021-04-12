/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@class IMTranscriptChatItem, UNNotification, UITraitCollection, NSAttributedString, NSString, CNContact;

@interface CKChatItem : NSObject {

	BOOL _zOrder;
	BOOL _wantsOverlayLayout;
	BOOL _sizeLoaded;
	IMTranscriptChatItem* _imChatItem;
	UNNotification* _notification;
	double _maxWidth;
	UITraitCollection* _transcriptTraitCollection;
	NSAttributedString* _transcriptText;
	NSAttributedString* _transcriptDrawerText;
	NSString* _transcriptIdentifier;
	CGSize _size;
	UIEdgeInsets _textAlignmentInsets;

}

@property (nonatomic,retain) IMTranscriptChatItem * IMChatItem;                          //@synthesize imChatItem=_imChatItem - In the implementation block
@property (nonatomic,retain) UITraitCollection * transcriptTraitCollection;              //@synthesize transcriptTraitCollection=_transcriptTraitCollection - In the implementation block
@property (assign,nonatomic) BOOL wantsOverlayLayout;                                    //@synthesize wantsOverlayLayout=_wantsOverlayLayout - In the implementation block
@property (nonatomic,retain) UNNotification * notification;                              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,copy) NSAttributedString * transcriptText;                          //@synthesize transcriptText=_transcriptText - In the implementation block
@property (nonatomic,copy) NSAttributedString * transcriptDrawerText;                    //@synthesize transcriptDrawerText=_transcriptDrawerText - In the implementation block
@property (assign,getter=isSizeLoaded,nonatomic) BOOL sizeLoaded;                        //@synthesize sizeLoaded=_sizeLoaded - In the implementation block
@property (nonatomic,retain) NSString * transcriptIdentifier;                            //@synthesize transcriptIdentifier=_transcriptIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned char contiguousType; 
@property (nonatomic,readonly) unsigned char attachmentContiguousType; 
@property (nonatomic,readonly) BOOL hasTail; 
@property (nonatomic,readonly) BOOL zOrder;                                              //@synthesize zOrder=_zOrder - In the implementation block
@property (assign,nonatomic) double maxWidth;                                            //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,readonly) CGSize size;                                              //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets textAlignmentInsets;                         //@synthesize textAlignmentInsets=_textAlignmentInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets transcriptTextAlignmentInsets; 
@property (nonatomic,readonly) UIEdgeInsets contentInsets; 
@property (nonatomic,readonly) char transcriptOrientation; 
@property (nonatomic,readonly) Class cellClass; 
@property (nonatomic,copy,readonly) NSString * cellIdentifier; 
@property (nonatomic,readonly) CNContact * contact; 
@property (nonatomic,readonly) BOOL displayDuringSend; 
@property (nonatomic,readonly) BOOL wantsDrawerLayout; 
@property (nonatomic,readonly) BOOL isEditable; 
@property (nonatomic,readonly) BOOL canCopy; 
@property (nonatomic,readonly) BOOL canDelete; 
@property (nonatomic,readonly) BOOL canForward; 
@property (nonatomic,readonly) BOOL canExport; 
@property (nonatomic,readonly) BOOL canSendAsTextMessage; 
@property (nonatomic,readonly) BOOL canInlineReply; 
@property (nonatomic,copy,readonly) NSString * menuTitle; 
@property (nonatomic,readonly) BOOL canAttachStickers; 
@property (nonatomic,readonly) BOOL stickersSnapToPoint; 
@property (nonatomic,readonly) CKBalloonDescriptor_t balloonDescriptor; 
+(id)chatItemWithIMChatItem:(id)arg1 balloonMaxWidth:(double)arg2 otherMaxWidth:(double)arg3 transcriptTraitCollection:(id)arg4 overlayLayout:(BOOL)arg5 ;
+(id)chatItemWithNotification:(id)arg1 balloonMaxWidth:(double)arg2 otherMaxWidth:(double)arg3 ;
-(BOOL)isEditable;
-(unsigned long long)layoutType;
-(CNContact *)contact;
-(UIEdgeInsets)textAlignmentInsets;
-(NSAttributedString *)transcriptText;
-(char)transcriptOrientation;
-(BOOL)displayDuringSend;
-(id)supplementaryItemsWithLayoutEnvironment:(id)arg1 ;
-(BOOL)canSave;
-(BOOL)zOrder;
-(id)loadTranscriptDrawerText;
-(void)setNotification:(UNNotification *)arg1 ;
-(UNNotification *)notification;
-(id)layoutGroupForEnvironment:(id)arg1 ;
-(void)setTranscriptTraitCollection:(UITraitCollection *)arg1 ;
-(BOOL)itemIsFromMe;
-(double)maxWidth;
-(UIEdgeInsets)contentInsets;
-(NSString *)cellIdentifier;
-(CGSize)size;
-(BOOL)itemIsReplyFromMe;
-(void)unloadSize;
-(BOOL)itemIsReply;
-(BOOL)canDelete;
-(BOOL)itemIsReplyContextPreview;
-(Class)cellClass;
-(BOOL)wantsOverlayLayout;
-(BOOL)itemIsThreadOriginator;
-(unsigned char)attachmentContiguousType;
-(NSAttributedString *)transcriptDrawerText;
-(BOOL)canAttachStickers;
-(BOOL)stickersSnapToPoint;
-(id)initWithNotification:(id)arg1 maxWidth:(double)arg2 ;
-(void)_setSizeForTesting:(CGSize)arg1 ;
-(void)setIMChatItem:(IMTranscriptChatItem *)arg1 ;
-(void)setWantsOverlayLayout:(BOOL)arg1 ;
-(void)setTranscriptText:(NSAttributedString *)arg1 ;
-(void)setTranscriptDrawerText:(NSAttributedString *)arg1 ;
-(BOOL)isSizeLoaded;
-(void)setSizeLoaded:(BOOL)arg1 ;
-(void)setTranscriptIdentifier:(NSString *)arg1 ;
-(NSString *)menuTitle;
-(BOOL)hasTail;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(IMTranscriptChatItem *)IMChatItem;
-(BOOL)canForward;
-(UITraitCollection *)transcriptTraitCollection;
-(BOOL)canExport;
-(id)description;
-(UIEdgeInsets)transcriptTextAlignmentInsets;
-(void)unloadTranscriptText;
-(BOOL)wantsDrawerLayout;
-(unsigned char)contiguousType;
-(Class)collectionViewCellClass;
-(NSString *)transcriptIdentifier;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(BOOL)canInlineReply;
-(id)visibleAssociatedMessageChatItems;
-(BOOL)canSendAsTextMessage;
-(BOOL)wantsAvatarViewForLayoutEnvironment:(id)arg1 ;
-(BOOL)itemIsReplyCount;
-(BOOL)canCopy;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(id)layoutGroupSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
-(void)setMaxWidth:(double)arg1 ;
-(id)layoutItemSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end


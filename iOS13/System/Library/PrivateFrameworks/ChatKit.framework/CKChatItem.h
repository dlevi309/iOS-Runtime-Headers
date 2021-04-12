/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@class IMTranscriptChatItem, UNNotification, UITraitCollection, NSAttributedString, NSString, CNContact;

@interface CKChatItem : NSObject {

	BOOL _zOrder;
	BOOL _sizeLoaded;
	IMTranscriptChatItem* _imChatItem;
	UNNotification* _notification;
	double _maxWidth;
	UITraitCollection* _transcriptTraitCollection;
	NSAttributedString* _transcriptText;
	NSAttributedString* _transcriptDrawerText;
	CGSize _size;
	UIEdgeInsets _textAlignmentInsets;

}

@property (nonatomic,retain) IMTranscriptChatItem * IMChatItem;                          //@synthesize imChatItem=_imChatItem - In the implementation block
@property (nonatomic,retain) UITraitCollection * transcriptTraitCollection;              //@synthesize transcriptTraitCollection=_transcriptTraitCollection - In the implementation block
@property (nonatomic,retain) UNNotification * notification;                              //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic) double maxWidth;                                            //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,copy) NSAttributedString * transcriptText;                          //@synthesize transcriptText=_transcriptText - In the implementation block
@property (nonatomic,copy) NSAttributedString * transcriptDrawerText;                    //@synthesize transcriptDrawerText=_transcriptDrawerText - In the implementation block
@property (assign,getter=isSizeLoaded,nonatomic) BOOL sizeLoaded;                        //@synthesize sizeLoaded=_sizeLoaded - In the implementation block
@property (nonatomic,readonly) unsigned char contiguousType; 
@property (nonatomic,readonly) unsigned char attachmentContiguousType; 
@property (nonatomic,readonly) BOOL hasTail; 
@property (nonatomic,readonly) BOOL zOrder;                                              //@synthesize zOrder=_zOrder - In the implementation block
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
@property (nonatomic,copy,readonly) NSString * menuTitle; 
@property (nonatomic,readonly) BOOL canAttachStickers; 
@property (nonatomic,readonly) BOOL stickersSnapToPoint; 
@property (nonatomic,readonly) CKBalloonDescriptor_t balloonDescriptor; 
+(id)chatItemWithIMChatItem:(id)arg1 balloonMaxWidth:(double)arg2 otherMaxWidth:(double)arg3 transcriptTraitCollection:(id)arg4 ;
+(id)chatItemWithNotification:(id)arg1 balloonMaxWidth:(double)arg2 otherMaxWidth:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(CGSize)size;
-(UNNotification *)notification;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(CNContact *)contact;
-(void)setNotification:(UNNotification *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(NSString *)menuTitle;
-(BOOL)isEditable;
-(BOOL)canCopy;
-(NSString *)cellIdentifier;
-(Class)cellClass;
-(BOOL)canDelete;
-(BOOL)zOrder;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(IMTranscriptChatItem *)IMChatItem;
-(UITraitCollection *)transcriptTraitCollection;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(BOOL)canExport;
-(BOOL)canSendAsTextMessage;
-(id)visibleAssociatedMessageChatItems;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(BOOL)hasTail;
-(UIEdgeInsets)textAlignmentInsets;
-(NSAttributedString *)transcriptText;
-(char)transcriptOrientation;
-(BOOL)displayDuringSend;
-(BOOL)canForward;
-(UIEdgeInsets)transcriptTextAlignmentInsets;
-(void)unloadTranscriptText;
-(void)unloadSize;
-(BOOL)wantsDrawerLayout;
-(void)setTranscriptTraitCollection:(UITraitCollection *)arg1 ;
-(unsigned char)contiguousType;
-(unsigned char)attachmentContiguousType;
-(id)loadTranscriptDrawerText;
-(NSAttributedString *)transcriptDrawerText;
-(BOOL)canSave;
-(BOOL)canAttachStickers;
-(BOOL)stickersSnapToPoint;
-(id)initWithNotification:(id)arg1 maxWidth:(double)arg2 ;
-(void)_setSizeForTesting:(CGSize)arg1 ;
-(void)setIMChatItem:(IMTranscriptChatItem *)arg1 ;
-(void)setTranscriptText:(NSAttributedString *)arg1 ;
-(void)setTranscriptDrawerText:(NSAttributedString *)arg1 ;
-(BOOL)isSizeLoaded;
-(void)setSizeLoaded:(BOOL)arg1 ;
@end


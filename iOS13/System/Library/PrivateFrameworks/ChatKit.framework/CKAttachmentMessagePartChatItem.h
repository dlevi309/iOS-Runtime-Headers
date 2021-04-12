/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessagePartChatItem.h>

@class UIItemProvider, UITraitCollection, CKMediaObject, NSString;

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {

	UIItemProvider* _dragItemProvider;
	UITraitCollection* _transcriptTraitCollection;
	CKMediaObject* _mediaObject;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;                 //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferGUID; 
-(id)description;
-(BOOL)canCopy;
-(id)composition;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(id)transcriptTraitCollection;
-(Class)balloonViewClass;
-(CKMediaObject *)mediaObject;
-(id)pasteboardItems;
-(BOOL)canExport;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(unsigned long long)balloonCorners;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(BOOL)canForward;
-(id)dragItemProvider;
-(NSString *)transferGUID;
-(void)setTranscriptTraitCollection:(id)arg1 ;
-(BOOL)stickersSnapToPoint;
-(BOOL)shouldCacheSize;
-(CGSize)_transcoderGeneratedSizeFittingSize:(CGSize)arg1 sizeExists:(BOOL*)arg2 ;
@end


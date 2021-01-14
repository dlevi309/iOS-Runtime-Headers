/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessagePartChatItem.h>

@class NSItemProvider, UITraitCollection, CKMediaObject, NSString;

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {

	NSItemProvider* _dragItemProvider;
	UITraitCollection* _transcriptTraitCollection;
	CKMediaObject* _mediaObject;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;                 //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferGUID; 
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(void)setTranscriptTraitCollection:(id)arg1 ;
-(BOOL)stickersSnapToPoint;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(BOOL)canForward;
-(id)transcriptTraitCollection;
-(BOOL)canExport;
-(Class)balloonViewClass;
-(BOOL)shouldCacheSize;
-(id)description;
-(id)compositionWithContext:(id)arg1 ;
-(NSString *)transferGUID;
-(CKMediaObject *)mediaObject;
-(CGSize)_transcoderGeneratedSizeFittingSize:(CGSize)arg1 sizeExists:(BOOL*)arg2 ;
-(id)fileURLForAttachment;
-(id)dragItemProvider;
-(BOOL)canCopy;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(unsigned long long)balloonCorners;
@end


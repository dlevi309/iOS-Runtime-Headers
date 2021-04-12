/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAttachmentMessagePartChatItem.h>

@class CKLocationMediaObject, NSURL;

@interface CKTranscriptLocationChatItem : CKAttachmentMessagePartChatItem {

	CKLocationMediaObject* _locationMediaObject;
	NSURL* _locationURL;

}

@property (nonatomic,retain) CKLocationMediaObject * locationMediaObject;              //@synthesize locationMediaObject=_locationMediaObject - In the implementation block
@property (nonatomic,retain) NSURL * locationURL;                                      //@synthesize locationURL=_locationURL - In the implementation block
-(NSURL *)locationURL;
-(CKLocationMediaObject *)locationMediaObject;
-(void)setLocationMediaObject:(CKLocationMediaObject *)arg1 ;
-(void)setLocationURL:(NSURL *)arg1 ;
-(Class)balloonViewClass;
-(id)transferGUID;
-(id)mediaObject;
-(id)dragItemProvider;
-(BOOL)canCopy;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
@end


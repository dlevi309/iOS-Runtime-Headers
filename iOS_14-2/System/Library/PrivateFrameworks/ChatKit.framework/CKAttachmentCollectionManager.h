/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKAttachmentCollectionManagerDelegate;
@class NSArray, IMChat, NSSet;

@interface CKAttachmentCollectionManager : NSObject {

	id<CKAttachmentCollectionManagerDelegate> _delegate;
	NSArray* _photosVideosItems;
	NSArray* _webLinksItems;
	NSArray* _otherContentsItems;
	IMChat* _chat;
	NSSet* _photoTransferGUIDs;

}

@property (nonatomic,retain) NSArray * photosVideosItems;                                            //@synthesize photosVideosItems=_photosVideosItems - In the implementation block
@property (nonatomic,retain) NSArray * webLinksItems;                                                //@synthesize webLinksItems=_webLinksItems - In the implementation block
@property (nonatomic,retain) NSArray * otherContentsItems;                                           //@synthesize otherContentsItems=_otherContentsItems - In the implementation block
@property (nonatomic,retain) IMChat * chat;                                                          //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) NSSet * photoTransferGUIDs;                                             //@synthesize photoTransferGUIDs=_photoTransferGUIDs - In the implementation block
@property (assign,nonatomic,__weak) id<CKAttachmentCollectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(IMChat *)chat;
-(id<CKAttachmentCollectionManagerDelegate>)delegate;
-(id)initWithChat:(id)arg1 ;
-(void)setChat:(IMChat *)arg1 ;
-(void)setDelegate:(id<CKAttachmentCollectionManagerDelegate>)arg1 ;
-(void)chatItemsChanged:(id)arg1 ;
-(void)updateCollections;
-(id)initWithChat:(id)arg1 photoTransferGUIDs:(id)arg2 ;
-(NSArray *)photosVideosItems;
-(NSArray *)otherContentsItems;
-(id)guidFromChatItem:(id)arg1 ;
-(void)setPhotosVideosItems:(NSArray *)arg1 ;
-(void)setOtherContentsItems:(NSArray *)arg1 ;
-(NSSet *)photoTransferGUIDs;
-(void)deleteAttachmentItems:(id)arg1 ;
-(NSArray *)webLinksItems;
-(void)setWebLinksItems:(NSArray *)arg1 ;
-(void)setPhotoTransferGUIDs:(NSSet *)arg1 ;
-(void)dealloc;
@end


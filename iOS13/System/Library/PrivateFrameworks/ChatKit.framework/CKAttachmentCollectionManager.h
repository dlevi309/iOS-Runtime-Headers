/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<CKAttachmentCollectionManagerDelegate>)delegate;
-(void)setDelegate:(id<CKAttachmentCollectionManagerDelegate>)arg1 ;
-(void)setChat:(IMChat *)arg1 ;
-(IMChat *)chat;
-(id)initWithChat:(id)arg1 ;
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
@end


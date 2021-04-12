/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKitCore/UINavigationController.h>

@protocol MFMessageComposeViewControllerDelegate;
@class NSArray, NSString, MSMessage;

@interface MFMessageComposeViewController : UINavigationController {

	id _internal;
	id<MFMessageComposeViewControllerDelegate> _messageComposeDelegate;
	NSArray* _recipients;
	NSString* _body;
	NSString* _subject;
	MSMessage* _message;
	unsigned long long _currentAttachedVideoCount;
	unsigned long long _currentAttachedAudioCount;
	unsigned long long _currentAttachedImageCount;
	NSArray* _UTITypes;
	NSArray* _photoIDs;
	NSArray* _cloudPhotoIDs;
	NSArray* _contentText;
	NSArray* _contentURLs;
	NSString* _chatGUID;
	NSString* _groupName;
	NSString* _shareSheetSessionID;
	NSArray* _attachments;

}

@property (assign,nonatomic) unsigned long long currentAttachedVideoCount;                                   //@synthesize currentAttachedVideoCount=_currentAttachedVideoCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentAttachedAudioCount;                                   //@synthesize currentAttachedAudioCount=_currentAttachedAudioCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentAttachedImageCount;                                   //@synthesize currentAttachedImageCount=_currentAttachedImageCount - In the implementation block
@property (nonatomic,copy) NSString * chatGUID;                                                              //@synthesize chatGUID=_chatGUID - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                             //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) id<MFMessageComposeViewControllerDelegate> messageComposeDelegate;              //@synthesize messageComposeDelegate=_messageComposeDelegate - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                                                             //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSString * body;                                                                  //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                               //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attachments;                                                   //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy) MSMessage * message;                                                              //@synthesize message=_message - In the implementation block
+(void)initialize;
+(id)log;
+(void)_setupAccountMonitor;
+(BOOL)isiMessageEnabled;
+(BOOL)_canSendText;
+(void)_updateServiceAvailability;
+(BOOL)isMMSEnabled;
+(BOOL)canSendText;
+(BOOL)isSupportedAttachmentUTI:(id)arg1 ;
+(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
+(void)_preloadDependencies;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
+(void)_serviceAvailabilityChanged:(id)arg1 ;
+(id)_chatKitBundle;
+(BOOL)canSendSubject;
+(BOOL)canSendAttachments;
+(void)_startListeningForAvailabilityNotifications;
-(void)dealloc;
-(NSArray *)attachments;
-(MSMessage *)message;
-(void)setMessage:(MSMessage *)arg1 ;
-(NSString *)groupName;
-(NSArray *)recipients;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)contentText;
-(void)setContentText:(id)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)UTITypes;
-(void)setUTITypes:(id)arg1 ;
-(void)setContentURLs:(id)arg1 ;
-(void)setShareSheetSessionID:(id)arg1 ;
-(void)setMessageComposeDelegate:(id<MFMessageComposeViewControllerDelegate>)arg1 ;
-(BOOL)addRichLinkData:(id)arg1 withWebpageURL:(id)arg2 ;
-(BOOL)addAttachmentURL:(id)arg1 withAlternateFilename:(id)arg2 ;
-(BOOL)addAttachmentData:(id)arg1 typeIdentifier:(id)arg2 filename:(id)arg3 ;
-(id)attachmentURLs;
-(NSString *)chatGUID;
-(void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPhotoIDs:(id)arg1 ;
-(void)setCloudPhotoIDs:(id)arg1 ;
-(void)setChatGUID:(NSString *)arg1 ;
-(void)smsComposeControllerCancelled:(id)arg1 ;
-(void)smsComposeControllerSendStarted:(id)arg1 ;
-(void)smsComposeControllerEntryViewContentInserted:(id)arg1 ;
-(id)photoIDs;
-(id)cloudPhotoIDs;
-(id)contentURLs;
-(id)shareSheetSessionID;
-(void)disableUserAttachments;
-(void)setCurrentAttachedVideoCount:(unsigned long long)arg1 ;
-(void)setCurrentAttachedAudioCount:(unsigned long long)arg1 ;
-(void)setCurrentAttachedImageCount:(unsigned long long)arg1 ;
-(id)_MIMETypeForURL:(id)arg1 ;
-(BOOL)_isVideoMIMEType:(id)arg1 ;
-(BOOL)_isAudioMIMEType:(id)arg1 ;
-(BOOL)_isImageMIMEType:(id)arg1 ;
-(id)_contentTypeForMIMEType:(id)arg1 ;
-(void)_updateAttachmentCountForAttachmentURL:(id)arg1 ;
-(BOOL)canAddAttachmentURL:(id)arg1 ;
-(id)mutableAttachmentURLs;
-(BOOL)addAttachmentData:(id)arg1 withAlternateFilename:(id)arg2 ;
-(void)insertSharedItemAndReturnEntryViewFrame:(id)arg1 withAlternateFilename:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showSharedItemInEntryView;
-(void)_setCanEditRecipients:(BOOL)arg1 ;
-(void)_setShouldDisableEntryField:(BOOL)arg1 ;
-(id<MFMessageComposeViewControllerDelegate>)messageComposeDelegate;
-(unsigned long long)currentAttachedVideoCount;
-(unsigned long long)currentAttachedAudioCount;
-(unsigned long long)currentAttachedImageCount;
@end


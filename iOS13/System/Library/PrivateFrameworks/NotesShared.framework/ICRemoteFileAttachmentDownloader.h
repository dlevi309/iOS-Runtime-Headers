/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSMutableDictionary, NSOperationQueue;

@interface ICRemoteFileAttachmentDownloader : NSObject {

	NSMutableDictionary* _operationsByAttachmentIdentifier;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * operationsByAttachmentIdentifier;              //@synthesize operationsByAttachmentIdentifier=_operationsByAttachmentIdentifier - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                   //@synthesize operationQueue=_operationQueue - In the implementation block
+(BOOL)needsToDownloadRemoteFileAttachments;
+(id)sharedDownloader;
+(id)allUndownloadedLegacyAttachmentsInContext:(id)arg1 ;
+(void)releaseSharedDownloaderIfPossible;
+(void)initializeDownloaderAfterDelayIfNecessary;
-(id)init;
-(void)dealloc;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)reachabilityChanged:(id)arg1 ;
-(void)setOperationsByAttachmentIdentifier:(NSMutableDictionary *)arg1 ;
-(void)resumeDownloadsAfterDelay;
-(void)downloadUndownloadedLegacyAttachments;
-(void)downloadRemoteFileForAttachment:(id)arg1 ;
-(void)downloadRemoteFileForAttachmentObjectID:(id)arg1 ;
-(NSMutableDictionary *)operationsByAttachmentIdentifier;
@end


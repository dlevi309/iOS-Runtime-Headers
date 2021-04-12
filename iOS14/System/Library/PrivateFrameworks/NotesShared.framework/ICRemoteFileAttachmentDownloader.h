/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSMutableDictionary, NSOperationQueue;

@interface ICRemoteFileAttachmentDownloader : NSObject {

	NSMutableDictionary* _operationsByAttachmentIdentifier;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * operationsByAttachmentIdentifier;              //@synthesize operationsByAttachmentIdentifier=_operationsByAttachmentIdentifier - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                   //@synthesize operationQueue=_operationQueue - In the implementation block
+(id)allUndownloadedLegacyAttachmentsInContext:(id)arg1 ;
+(void)releaseSharedDownloaderIfPossible;
+(void)initializeDownloaderAfterDelayIfNecessary;
+(BOOL)needsToDownloadRemoteFileAttachments;
+(id)sharedDownloader;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationsByAttachmentIdentifier:(NSMutableDictionary *)arg1 ;
-(void)resumeDownloadsAfterDelay;
-(void)downloadUndownloadedLegacyAttachments;
-(void)downloadRemoteFileForAttachment:(id)arg1 ;
-(void)downloadRemoteFileForAttachmentObjectID:(id)arg1 ;
-(NSMutableDictionary *)operationsByAttachmentIdentifier;
-(id)init;
-(void)reachabilityChanged:(id)arg1 ;
-(void)dealloc;
@end


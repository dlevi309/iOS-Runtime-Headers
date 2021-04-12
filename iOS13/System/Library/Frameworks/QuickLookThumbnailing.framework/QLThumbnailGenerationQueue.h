/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/


@class NSOperationQueue, NSMutableDictionary;

@interface QLThumbnailGenerationQueue : NSObject {

	NSOperationQueue* _queue;
	NSMutableDictionary* _queuedURLs;

}

@property (retain) NSMutableDictionary * queuedURLs;              //@synthesize queuedURLs=_queuedURLs - In the implementation block
@property (retain) NSOperationQueue * queue;                      //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)queue;
-(void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg1 ;
-(void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg1 atBackgroundPriority:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)queuedURLs;
-(void)setQueuedURLs:(NSMutableDictionary *)arg1 ;
@end


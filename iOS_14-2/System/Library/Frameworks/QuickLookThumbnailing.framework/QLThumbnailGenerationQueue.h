/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg1 ;
-(void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg1 atBackgroundPriority:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)queuedURLs;
-(void)setQueuedURLs:(NSMutableDictionary *)arg1 ;
@end


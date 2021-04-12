/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCache;

@interface WFActionDrawerImageLoader : NSObject {

	NSObject*<OS_dispatch_queue> _imageLoadingQueue;
	NSCache* _imageCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> imageLoadingQueue;              //@synthesize imageLoadingQueue=_imageLoadingQueue - In the implementation block
@property (nonatomic,readonly) NSCache * imageCache;                                        //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSCache *)imageCache;
-(NSObject*<OS_dispatch_queue>)imageLoadingQueue;
-(id)loadImagesForInteractionDonation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


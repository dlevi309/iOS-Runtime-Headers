/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)imageLoadingQueue;
-(NSCache *)imageCache;
-(id)loadImagesForInteractionDonation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


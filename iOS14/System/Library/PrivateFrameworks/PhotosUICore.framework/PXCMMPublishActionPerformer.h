/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMActionPerformer.h>

@class NSURL;

@interface PXCMMPublishActionPerformer : PXCMMActionPerformer {

	NSURL* _publishedURL;

}

@property (nonatomic,retain) NSURL * publishedURL;              //@synthesize publishedURL=_publishedURL - In the implementation block
-(BOOL)isCancellable;
-(id)createActionProgress;
-(id)performPublishActionWithSession:(id)arg1 shareOrigin:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_completePublishActionWithSuccess:(BOOL)arg1 error:(id)arg2 shareOrigin:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setPublishedURL:(NSURL *)arg1 ;
-(void)cancelActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)publishedURL;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMActionPerformer.h>

@class NSURL;

@interface PXCMMShowMessageComposeActionPerformer : PXCMMActionPerformer {

	NSURL* _shareURL;

}

@property (nonatomic,readonly) NSURL * shareURL;              //@synthesize shareURL=_shareURL - In the implementation block
-(NSURL *)shareURL;
-(id)performActionWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performMessageComposeActionWithSession:(id)arg1 shareURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end


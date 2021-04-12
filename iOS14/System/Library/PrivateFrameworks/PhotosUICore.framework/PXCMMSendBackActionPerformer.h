/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMActionPerformer.h>

@class PXCMMContext;

@interface PXCMMSendBackActionPerformer : PXCMMActionPerformer {

	PXCMMContext* _sendBackContext;

}

@property (nonatomic,retain) PXCMMContext * sendBackContext;              //@synthesize sendBackContext=_sendBackContext - In the implementation block
-(void)setSendBackContext:(PXCMMContext *)arg1 ;
-(PXCMMContext *)sendBackContext;
-(id)performSendBackActionWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_completeSendBackActionWithSuccess:(BOOL)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end


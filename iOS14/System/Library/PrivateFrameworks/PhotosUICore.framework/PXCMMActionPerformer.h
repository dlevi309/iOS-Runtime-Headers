/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionPerformer.h>

@class PXCMMSession, NSProgress;

@interface PXCMMActionPerformer : PXActionPerformer {

	PXCMMSession* _session;
	NSProgress* _progress;

}

@property (nonatomic,readonly) PXCMMSession * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                         //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMActionPerformerDelegate> delegate; 
-(id)createActionProgress;
-(NSProgress *)progress;
-(BOOL)canPerformActionWithSession:(id)arg1 ;
-(PXCMMSession *)session;
-(id)performActionWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setProgress:(NSProgress *)arg1 ;
@end


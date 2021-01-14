/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXVideoTrimQueueControllerDelegate <NSObject>
@optional
-(void)controller:(id)arg1 willTrimVideoFromSource:(id)arg2;
-(void)controller:(id)arg1 didTrimVideoFromSource:(id)arg2;
-(void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
-(void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;

@required
-(void)controller:(id)arg1 presentViewController:(id)arg2;
-(void)controller:(id)arg1 dismissViewControllerWithCompletion:(/*^block*/id)arg2;

@end


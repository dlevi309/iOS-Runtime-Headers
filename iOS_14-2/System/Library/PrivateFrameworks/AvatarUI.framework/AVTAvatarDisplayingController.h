/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarDisplayingController <AVTObjectViewController>
@property (assign,nonatomic,__weak) id<AVTAvatarDisplayingControllerDelegate> delegate; 
@required
-(id<AVTAvatarDisplayingControllerDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2;
-(void)setDelegate:(id)arg1;
-(void)reloadData;
-(void)prepareViewWithLayout:(id)arg1;
-(void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2;
-(void)stopUsingAVTViewSessionSynchronously:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)prepareToTransitionToVisible:(BOOL)arg1 completionHandler:(/*^block*/id*)arg2;
-(void)displayAvatarForRecord:(id)arg1 animated:(BOOL)arg2;

@end


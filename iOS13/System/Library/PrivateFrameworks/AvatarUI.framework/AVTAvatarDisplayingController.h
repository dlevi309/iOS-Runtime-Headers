/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarDisplayingController <AVTObjectViewController>
@property (assign,nonatomic,__weak) id<AVTAvatarDisplayingControllerDelegate> delegate; 
@required
-(id<AVTAvatarDisplayingControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)reloadData;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2;
-(void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2;
-(void)stopUsingAVTViewSessionSynchronously:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)prepareToTransitionToVisible:(BOOL)arg1 completionHandler:(/*^block*/id*)arg2;
-(void)displayAvatarForRecord:(id)arg1 animated:(BOOL)arg2;

@end


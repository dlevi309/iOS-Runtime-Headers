/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUPhotoBrowserZoomTransitionDelegate <NSObject>
@optional
-(void)zoomTransition:(id)arg1 willBeginAnimationForOperation:(long long)arg2;
-(BOOL)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(/*^block*/id)arg3;
-(void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
-(void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
-(void)zoomTransition:(id)arg1 didFinishAnimationForOperation:(long long)arg2;
-(void)zoomTransition:(id)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3;
-(void)zoomTransition:(id)arg1 shouldHidePhotoTokens:(id)arg2;

@required
-(id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
-(BOOL)zoomTransition:(id)arg1 getFrame:(CGRect*)arg2 contentMode:(long long*)arg3 cropInsets:(UIEdgeInsets*)arg4 forPhotoToken:(id)arg5 operation:(long long)arg6;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUOneUpAssetTransitionViewController <NSObject>
@optional
-(void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(/*^block*/id)arg2;
-(void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(/*^block*/id)arg2 options:(unsigned long long)arg3;
-(void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4;
-(void)oneUpAssetTransitionWillBegin:(id)arg1;
-(void)oneUpAssetTransitionDidEnd:(id)arg1;
-(CGRect*)oneUpAssetTransitionAssetFinalFrame:(id)arg1;
-(id)createAssetTransitionInfo;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBSceneHandle, UIView;


@protocol SBSceneViewControlling <NSObject>
@property (nonatomic,readonly) SBSceneHandle * sceneHandle; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
@required
-(id)newSnapshotView;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setCustomContentView:(id)arg1;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
-(long long)displayMode;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(UIView *)customContentView;
-(id)newSnapshot;
-(void)invalidate;
-(long long)contentInterfaceOrientation;
-(SBSceneHandle *)sceneHandle;
-(void)setPlaceholderContentContext:(id)arg1;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2;
-(CGSize)contentReferenceSize;

@end


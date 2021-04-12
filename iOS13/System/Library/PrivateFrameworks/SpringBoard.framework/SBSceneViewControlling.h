/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)invalidate;
-(UIView *)customContentView;
-(long long)displayMode;
-(id)newSnapshot;
-(SBSceneHandle *)sceneHandle;
-(void)setCustomContentView:(id)arg1;
-(void)setPlaceholderContentContext:(id)arg1;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2;
-(long long)contentInterfaceOrientation;
-(id)newSnapshotView;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
-(CGSize)contentReferenceSize;

@end


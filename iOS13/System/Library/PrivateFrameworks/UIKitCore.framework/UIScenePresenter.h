/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSString, FBScene, UIScenePresentationContext;


@protocol UIScenePresenter <BSInvalidatable>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,__weak,readonly) FBScene * scene; 
@property (nonatomic,copy,readonly) UIScenePresentationContext * presentationContext; 
@property (nonatomic,readonly) UIView*<UIScenePresentation> presentationView; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@required
-(void)invalidate;
-(NSString *)identifier;
-(BOOL)isActive;
-(BOOL)isInvalidated;
-(FBScene *)scene;
-(void)activate;
-(void)deactivate;
-(UIScenePresentationContext *)presentationContext;
-(void)modifyPresentationContext:(/*^block*/id)arg1;
-(UIView*<UIScenePresentation>)presentationView;
-(id)newSnapshotContext;
-(id)newSnapshot;
-(id)newSnapshotPresentationView;

@end


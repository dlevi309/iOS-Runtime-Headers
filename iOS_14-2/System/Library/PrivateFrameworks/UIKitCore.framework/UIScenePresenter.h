/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FBScene *)scene;
-(BOOL)isInvalidated;
-(UIScenePresentationContext *)presentationContext;
-(BOOL)isActive;
-(id)newSnapshotContext;
-(UIView*<UIScenePresentation>)presentationView;
-(void)deactivate;
-(void)activate;
-(id)newSnapshot;
-(void)modifyPresentationContext:(/*^block*/id)arg1;
-(void)invalidate;
-(NSString *)identifier;
-(id)newSnapshotPresentationView;

@end


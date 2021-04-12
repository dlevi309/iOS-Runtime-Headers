/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol UIScenePresenter, UIScenePresentation;
@class UIWindow, UIView, NSString, UIScenePresentationContext;

@interface SBWindowSelfHostWrapper : NSObject {

	UIWindow* _window;
	id<UIScenePresenter> _presenter;
	UIView*<UIScenePresentation> _hostView;

}

@property (nonatomic,copy,readonly) NSString * requester; 
@property (nonatomic,readonly) UIWindow * window;                                                  //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UIView*<UIScenePresentation> hostView;                              //@synthesize hostView=_hostView - In the implementation block
@property (nonatomic,readonly) id<UIScenePresenter> presenter;                                     //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,copy,readonly) UIScenePresentationContext * presentationContext; 
+(id)wrapperForWindow:(id)arg1 orientation:(long long)arg2 hostRequester:(id)arg3 sceneIdentifier:(id)arg4 ;
+(id)wrapperForUseInWindow:(id)arg1 hostRequester:(id)arg2 sceneIdentifier:(id)arg3 ;
-(UIWindow *)window;
-(UIScenePresentationContext *)presentationContext;
-(void)modifyPresentationContext:(/*^block*/id)arg1 ;
-(id<UIScenePresenter>)presenter;
-(UIView*<UIScenePresentation>)hostView;
-(NSString *)requester;
-(void)stopHosting;
@end


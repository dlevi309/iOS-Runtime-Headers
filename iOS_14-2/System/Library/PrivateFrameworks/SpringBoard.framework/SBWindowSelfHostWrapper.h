/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopHosting;
-(NSString *)requester;
-(UIScenePresentationContext *)presentationContext;
-(id<UIScenePresenter>)presenter;
-(UIWindow *)window;
-(void)modifyPresentationContext:(/*^block*/id)arg1 ;
-(UIView*<UIScenePresentation>)hostView;
@end


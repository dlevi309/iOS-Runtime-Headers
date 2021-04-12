/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIScene;

@interface UISceneActivationRequestOptions : NSObject {

	BOOL _preserveLayout;
	BOOL __requestFullscreen;
	UIScene* _requestingScene;

}

@property (assign,nonatomic) BOOL preserveLayout;                                                //@synthesize preserveLayout=_preserveLayout - In the implementation block
@property (assign,setter=_setRequestFullscreen:,nonatomic) BOOL _requestFullscreen;              //@synthesize _requestFullscreen=__requestFullscreen - In the implementation block
@property (nonatomic,retain) UIScene * requestingScene;                                          //@synthesize requestingScene=_requestingScene - In the implementation block
-(UIScene *)requestingScene;
-(BOOL)preserveLayout;
-(void)setPreserveLayout:(BOOL)arg1 ;
-(BOOL)_requestFullscreen;
-(void)setRequestingScene:(UIScene *)arg1 ;
-(void)_setRequestFullscreen:(BOOL)arg1 ;
@end


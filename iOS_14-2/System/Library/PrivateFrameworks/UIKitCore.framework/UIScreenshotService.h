/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@protocol UIScreenshotServiceDelegate;
@class UIScene, UIWindowScene, NSString;

@interface UIScreenshotService : NSObject <_UISceneComponentProviding> {

	UIScene* _scene;
	id<UIScreenshotServiceDelegate> _delegate;
	id<UIScreenshotServiceDelegate> _privateDelegate;

}

@property (assign,nonatomic,__weak) id<UIScreenshotServiceDelegate> privateDelegate;               //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIScreenshotServiceDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIWindowScene * windowScene; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(UIWindowScene *)windowScene;
-(void)_setScene:(id)arg1 ;
-(id<UIScreenshotServiceDelegate>)delegate;
-(id)initWithScene:(id)arg1 ;
-(void)setDelegate:(id<UIScreenshotServiceDelegate>)arg1 ;
-(id<UIScreenshotServiceDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<UIScreenshotServiceDelegate>)arg1 ;
@end


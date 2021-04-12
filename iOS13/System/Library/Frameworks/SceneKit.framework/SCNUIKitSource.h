/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SCNImageSource.h>

@class UIView, UIWindow;

@interface SCNUIKitSource : SCNImageSource {

	id _uiView;
	id _uiWindow;

}

@property (nonatomic,retain) UIView * uiView;                  //@synthesize uiView=_uiView - In the implementation block
@property (nonatomic,retain) UIWindow * uiWindow;              //@synthesize uiWindow=_uiWindow - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isOpaque;
-(id)textureSource;
-(BOOL)supportsMetal;
-(void)setUiView:(UIView *)arg1 ;
-(void)setUiWindow:(UIWindow *)arg1 ;
-(UIView *)uiView;
-(id)prepareWindowIfNeeded;
-(UIWindow *)uiWindow;
@end


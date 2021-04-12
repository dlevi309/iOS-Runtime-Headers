/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SCNImageSource.h>

@class CALayer, UIView, UIWindow;

@interface SCNUIKitSource : SCNImageSource {

	id _uiView;
	id _uiWindow;
	CALayer* _uiWindowLayer;
	BOOL _isOpaque;
	BOOL _windowPreparing;

}

@property (nonatomic,retain) UIView * uiView;                  //@synthesize uiView=_uiView - In the implementation block
@property (nonatomic,retain) UIWindow * uiWindow;              //@synthesize uiWindow=_uiWindow - In the implementation block
-(BOOL)isOpaque;
-(id)init;
-(UIView *)uiView;
-(void)dealloc;
-(id)textureSource;
-(BOOL)supportsMetal;
-(void)setUiView:(UIView *)arg1 ;
-(void)setUiWindow:(UIWindow *)arg1 ;
-(id)prepareWindowIfNeeded;
-(UIWindow *)uiWindow;
@end


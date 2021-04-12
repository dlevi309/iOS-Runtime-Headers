/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>

@class UIApplicationSceneClientSettingsDiffInspector, SBDeviceApplicationSceneHandle, UIView, NSString;

@interface SBNubView : UIView <SBDeviceApplicationSceneHandleObserver> {

	UIApplicationSceneClientSettingsDiffInspector* _applicationSceneClientSettingsDiffInspector;
	BOOL _highlighted;
	SBDeviceApplicationSceneHandle* _deviceApplicationSceneHandle;
	UIView* _nubView;

}

@property (nonatomic,readonly) UIView * nubView;                                                           //@synthesize nubView=_nubView - In the implementation block
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * deviceApplicationSceneHandle;              //@synthesize deviceApplicationSceneHandle=_deviceApplicationSceneHandle - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                        //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)height;
+(double)hitTestWidth;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(id)initWithDeviceApplicationSceneHandle:(id)arg1 ;
-(UIView *)nubView;
-(void)_updateNubViewOverrideUserInterfaceStyleAndBackgroundColor;
-(void)_updateNubViewBackgroundColor;
-(SBDeviceApplicationSceneHandle *)deviceApplicationSceneHandle;
@end


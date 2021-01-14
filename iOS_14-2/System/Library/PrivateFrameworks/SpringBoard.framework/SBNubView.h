/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDeviceApplicationSceneHandle:(id)arg1 ;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)isHighlighted;
-(UIView *)nubView;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateNubViewOverrideUserInterfaceStyleAndBackgroundColor;
-(void)_updateNubViewBackgroundColor;
-(SBDeviceApplicationSceneHandle *)deviceApplicationSceneHandle;
@end


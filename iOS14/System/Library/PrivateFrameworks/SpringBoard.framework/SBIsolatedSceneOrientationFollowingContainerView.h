/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneOverlayView.h>

@class SBIsolatedSceneOrientationFollowingWrapperViewController;

@interface SBIsolatedSceneOrientationFollowingContainerView : UIView <SBDeviceApplicationSceneOverlayView> {

	BOOL _shouldLayoutOverlayImmediatelyForContainerGeometryChange;
	SBIsolatedSceneOrientationFollowingWrapperViewController* _wrapperViewController;
	long long _hostOrientation;

}

@property (nonatomic,__weak,readonly) SBIsolatedSceneOrientationFollowingWrapperViewController * wrapperViewController;              //@synthesize wrapperViewController=_wrapperViewController - In the implementation block
@property (assign,nonatomic) long long hostOrientation;                                                                              //@synthesize hostOrientation=_hostOrientation - In the implementation block
@property (assign,nonatomic) BOOL shouldLayoutOverlayImmediatelyForContainerGeometryChange;                                          //@synthesize shouldLayoutOverlayImmediatelyForContainerGeometryChange=_shouldLayoutOverlayImmediatelyForContainerGeometryChange - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(SBIsolatedSceneOrientationFollowingWrapperViewController *)wrapperViewController;
-(id)initWithFrame:(CGRect)arg1 wrapperViewController:(id)arg2 ;
-(long long)hostOrientation;
-(BOOL)shouldLayoutOverlayImmediatelyForContainerGeometryChange;
-(void)setHostOrientation:(long long)arg1 ;
-(void)setShouldLayoutOverlayImmediatelyForContainerGeometryChange:(BOOL)arg1 ;
@end


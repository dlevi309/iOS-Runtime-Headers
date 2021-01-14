/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/

#import <AccessibilityUIService/AccessibilityUIService-Structs.h>
#import <UIKitCore/UIWindow.h>
#import <libobjc.A.dylib/AXUIWindowProtocol.h>

@interface AXUIWindow : UIWindow <AXUIWindowProtocol> {

	BOOL _isHandlingFullScreenPresentation;
	BOOL _shouldRespondToDarkModeChanges;

}

@property (assign,nonatomic) BOOL shouldRespondToDarkModeChanges;                //@synthesize shouldRespondToDarkModeChanges=_shouldRespondToDarkModeChanges - In the implementation block
@property (assign,nonatomic) BOOL isHandlingFullScreenPresentation;              //@synthesize isHandlingFullScreenPresentation=_isHandlingFullScreenPresentation - In the implementation block
+(BOOL)_isSecure;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)accessibilityLabel;
-(BOOL)_isWindowServerHostingManaged;
-(id)_layerForCoordinateSpaceConversion;
-(BOOL)_wantsSceneAssociation;
-(long long)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(BOOL)arg1 ;
-(BOOL)keepContextInBackground;
-(UIEdgeInsets)_normalizedSafeAreaInsets;
-(BOOL)_accessibilityIsIsolatedWindow;
-(id)description;
-(id)_accessibilityElementCommunityIdentifier;
-(BOOL)shouldRespondToDarkModeChanges;
-(void)setShouldRespondToDarkModeChanges:(BOOL)arg1 ;
-(BOOL)isHandlingFullScreenPresentation;
-(void)setIsHandlingFullScreenPresentation:(BOOL)arg1 ;
@end


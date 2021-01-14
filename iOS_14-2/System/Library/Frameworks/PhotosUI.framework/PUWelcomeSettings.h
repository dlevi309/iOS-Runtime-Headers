/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@class NSString;

@interface PUWelcomeSettings : PXSettings <SBSRemoteAlertHandleObserver> {

	BOOL _alwaysShowWhatsNewWelcome;
	BOOL _alwaysShowCloudPhotoWelcome;

}

@property (assign,nonatomic) BOOL alwaysShowWhatsNewWelcome;                //@synthesize alwaysShowWhatsNewWelcome=_alwaysShowWhatsNewWelcome - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowCloudPhotoWelcome;              //@synthesize alwaysShowCloudPhotoWelcome=_alwaysShowCloudPhotoWelcome - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(BOOL)alwaysShowCloudPhotoWelcome;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)setAlwaysShowWhatsNewWelcome:(BOOL)arg1 ;
-(BOOL)alwaysShowWhatsNewWelcome;
-(void)setAlwaysShowCloudPhotoWelcome:(BOOL)arg1 ;
@end


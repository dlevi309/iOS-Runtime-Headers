/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
*/


@interface GuidedAccessManager : NSObject {

	id _notificationToken;

}

@property (nonatomic,retain) id notificationToken;              //@synthesize notificationToken=_notificationToken - In the implementation block
+(void)initializeMonitoring;
-(id)init;
-(void)dealloc;
-(id)notificationToken;
-(void)setNotificationToken:(id)arg1 ;
-(void)_loadRequiredBundles;
-(BOOL)applicationIsEntitledForUnmanagedASAM;
-(void)loadRequiredBundlesForUnmanagedASAM;
-(BOOL)_isValidClientApp;
-(void)_loadSpringboardServerBundle;
-(void)_loadClientBundle;
@end


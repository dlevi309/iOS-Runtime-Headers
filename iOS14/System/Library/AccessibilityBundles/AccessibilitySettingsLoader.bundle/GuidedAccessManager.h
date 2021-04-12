/*
* Generated on Thursday, January 14, 2021 at 2:29:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
*/


@interface GuidedAccessManager : NSObject {

	id _notificationToken;

}

@property (nonatomic,retain) id notificationToken;              //@synthesize notificationToken=_notificationToken - In the implementation block
+(void)initializeMonitoring;
-(id)init;
-(void)setNotificationToken:(id)arg1 ;
-(id)notificationToken;
-(void)dealloc;
-(void)_loadRequiredBundles;
-(BOOL)applicationIsEntitledForUnmanagedASAM;
-(void)loadRequiredBundlesForUnmanagedASAM;
-(BOOL)_isValidClientApp;
-(void)_loadSpringboardServerBundle;
-(void)_loadClientBundle;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
*/


#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
@interface AssistiveTouchHelper : NSObject
+(void)initializeMonitoring;
-(id)init;
-(void)dealloc;
-(void)enable;
-(id)_astDispatchQueue;
-(void)_sendKeyboardStatusUpdate:(CGRect)arg1 ;
-(void)_sendKeyboardStatusUpdateHidden;
-(void)_sendKeyboardStatusUpdate;
-(void)_sendSafeAreaUpdate;
-(void)installMediaCategoriesAndValidate;
-(void)installiPodUICategoriesAndValidate;
-(void)installKeyboardListener;
-(void)installMediaControlsListener;
-(void)loadBuddyBundles;
-(void)_handleMediaPlaybackEnded;
@end


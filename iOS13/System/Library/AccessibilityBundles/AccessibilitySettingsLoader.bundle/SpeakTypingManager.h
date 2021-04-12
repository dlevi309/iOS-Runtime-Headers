/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
*/


@interface SpeakTypingManager : NSObject {

	BOOL _registeredForAppNotifications;

}

@property (assign,getter=isRegisteredForAppNotifications,nonatomic) BOOL registeredForAppNotifications;              //@synthesize registeredForAppNotifications=_registeredForAppNotifications - In the implementation block
+(id)sharedInstance;
+(void)initializeMonitoring;
-(BOOL)isRegisteredForAppNotifications;
-(void)setRegisteredForAppNotifications:(BOOL)arg1 ;
-(void)_registerForLetterFeedbackAXSettingsUpdate;
-(void)updateForCurrentTypingFeedbackStatus;
-(void)_registerForPhoneticFeedbackAXSettingsUpdate;
-(void)_registerForQuickTypePredictionFeedbackAXSettingsUpdate;
-(void)updateForCurrentQuickTypeFeedbackStatus;
-(void)_registerForWordFeedbackAXSettingsUpdate;
-(void)updateForCurrentWordFeedbackStatus;
-(void)_installSpeakTypingSafeCategoriesIfNeeded;
@end


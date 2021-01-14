/*
* Generated on Thursday, January 14, 2021 at 2:29:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
*/


@interface SpeakTypingManager : NSObject {

	BOOL _registeredForAppNotifications;

}

@property (assign,getter=isRegisteredForAppNotifications,nonatomic) BOOL registeredForAppNotifications;              //@synthesize registeredForAppNotifications=_registeredForAppNotifications - In the implementation block
+(id)sharedInstance;
+(void)initializeMonitoring;
-(void)_registerForLetterFeedbackAXSettingsUpdate;
-(void)setRegisteredForAppNotifications:(BOOL)arg1 ;
-(BOOL)isRegisteredForAppNotifications;
-(void)_registerForWordFeedbackAXSettingsUpdate;
-(void)updateForCurrentWordFeedbackStatus;
-(void)_registerForQuickTypePredictionFeedbackAXSettingsUpdate;
-(void)updateForCurrentTypingFeedbackStatus;
-(void)updateForCurrentQuickTypeFeedbackStatus;
-(void)_installSpeakTypingSafeCategoriesIfNeeded;
-(void)_registerForPhoneticFeedbackAXSettingsUpdate;
@end


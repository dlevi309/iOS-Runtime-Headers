/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
*/

#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@protocol OS_dispatch_queue;
@class AVSpeechSynthesizer, NSDictionary, NSArray, NSObject, NSString;

@interface SpeakCorrections : NSObject <AVSpeechSynthesizerDelegate> {

	AVSpeechSynthesizer* _synthesizer;
	BOOL _correctionCanceled;
	NSDictionary* _keyboardToLanguage;
	NSArray* _availableLanguageCodes;
	NSObject*<OS_dispatch_queue> _speakingQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)disable;
+(void)enable;
+(void)_updateRingerState;
+(void)_safeUpdateRingerState;
+(void)updateStatus;
-(id)init;
-(void)dealloc;
-(void)_correctionDisplayed:(id)arg1 ;
-(void)_ringerChanged:(id)arg1 ;
-(void)_speakCorrection:(id)arg1 ;
-(void)loadUIAccessibilityIfNecessary;
@end


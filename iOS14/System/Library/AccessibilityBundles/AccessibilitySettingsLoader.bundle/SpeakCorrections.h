/*
* Generated on Thursday, January 14, 2021 at 2:29:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)disable;
+(void)enable;
+(void)initialize;
+(void)_safeUpdateRingerState;
+(void)updateStatus;
+(void)_updateRingerState;
-(void)_ringerChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_correctionDisplayed:(id)arg1 ;
-(void)_speakCorrection:(id)arg1 ;
-(void)loadUIAccessibilityIfNecessary;
@end


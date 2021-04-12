/*
* Generated on Monday, March 1, 2021 at 2:30:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSMutableDictionary;

@interface AXAlternativeVoices : NSObject {

	NSMutableDictionary* _voiceClassesMap;
	NSMutableDictionary* _voiceNameMap;

}

@property (nonatomic,retain) NSMutableDictionary * voiceClassesMap;              //@synthesize voiceClassesMap=_voiceClassesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * voiceNameMap;                 //@synthesize voiceNameMap=_voiceNameMap - In the implementation block
+(id)sharedInstance;
+(BOOL)supportsSiri;
+(BOOL)supportsAlex;
+(void)setInUnitTestMode:(BOOL)arg1 ;
+(BOOL)inUnitTestMode;
-(BOOL)isSiriVoiceIdentifier:(id)arg1 ;
-(id)nameForVoiceIdentifier:(id)arg1 ;
-(BOOL)isNashvilleSystemVoice:(id)arg1 ;
-(void)setVoiceClassesMap:(NSMutableDictionary *)arg1 ;
-(void)setVoiceNameMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)voiceClassesMap;
-(NSMutableDictionary *)voiceNameMap;
-(BOOL)isOldSiriVoiceIdentifier:(id)arg1 ;
-(BOOL)isNeuralSiriVoiceIdentifier:(id)arg1 ;
-(id)_siriBaseIdentifierFromIdentifier:(id)arg1 ;
-(BOOL)isAlternativeVoice:(id)arg1 ;
-(BOOL)isAlexAvailableForLanguage:(id)arg1 ;
-(id)voiceForVoiceIdentifier:(id)arg1 forLanguage:(id)arg2 ;
-(id)_siriIdentifierFromBaseIdentifier:(id)arg1 language:(id)arg2 quality:(long long)arg3 ;
@end


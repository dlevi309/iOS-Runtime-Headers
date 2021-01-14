/*
* Generated on Thursday, January 14, 2021 at 2:22:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)inUnitTestMode;
+(BOOL)supportsSiri;
+(BOOL)supportsAlex;
+(void)setInUnitTestMode:(BOOL)arg1 ;
-(BOOL)isNashvilleSystemVoice:(id)arg1 ;
-(void)setVoiceClassesMap:(NSMutableDictionary *)arg1 ;
-(void)setVoiceNameMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)voiceClassesMap;
-(NSMutableDictionary *)voiceNameMap;
-(BOOL)isOldSiriVoiceIdentifier:(id)arg1 ;
-(id)_siriBaseIdentifierFromIdentifier:(id)arg1 ;
-(BOOL)isAlternativeVoice:(id)arg1 ;
-(BOOL)isNeuralSiriVoiceIdentifier:(id)arg1 ;
-(BOOL)isAlexAvailableForLanguage:(id)arg1 ;
-(id)voiceForVoiceIdentifier:(id)arg1 forLanguage:(id)arg2 ;
-(id)_siriIdentifierFromBaseIdentifier:(id)arg1 language:(id)arg2 quality:(long long)arg3 ;
-(BOOL)isSiriVoiceIdentifier:(id)arg1 ;
-(id)nameForVoiceIdentifier:(id)arg1 ;
@end


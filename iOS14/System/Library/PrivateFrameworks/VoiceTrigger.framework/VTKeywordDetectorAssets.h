/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@class NSDictionary, NSString;

@interface VTKeywordDetectorAssets : NSObject {

	NSDictionary* _decodedInfo;
	NSString* _configFile;
	NSString* _resourcePath;
	NSDictionary* _dictionary;
	NSString* _configVersion;
	NSString* _categoryKey;
	NSString* _locale;

}

@property (nonatomic,readonly) NSString * configFile;                  //@synthesize configFile=_configFile - In the implementation block
@property (nonatomic,readonly) NSString * resourcePath;                //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * configVersion;               //@synthesize configVersion=_configVersion - In the implementation block
@property (nonatomic,readonly) NSString * categoryKey;                 //@synthesize categoryKey=_categoryKey - In the implementation block
@property (nonatomic,readonly) NSString * locale;                      //@synthesize locale=_locale - In the implementation block
-(NSString *)locale;
-(NSString *)resourcePath;
-(id)_dictionary;
-(NSString *)configVersion;
-(NSDictionary *)dictionary;
-(id)ctcKwdToPhraseIdMap;
-(NSString *)configFile;
-(id)_decodeJson:(id)arg1 ;
-(NSString *)categoryKey;
-(id)initWithAssetPath:(id)arg1 categoryKey:(id)arg2 forLocale:(id)arg3 ;
-(id)VTSecondPassConfigPathNDAPI;
-(BOOL)VTSecondPassConfigPathRecognizerExist;
-(id)VTSecondPassConfigPathRecognizer;
-(id)supportedVTPhrasesInfo;
-(id)_hearstRTModelWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3 ;
-(id)_getStringForKey:(id)arg1 category:(id)arg2 default:(id)arg3 ;
-(BOOL)_containsKey:(id)arg1 category:(id)arg2 ;
-(id)_getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3 ;
-(float)VTSecondPassRecognizerScoreScaleFactor;
-(id)latestHearstRTModel;
-(BOOL)VTSecondPassUseKeywordSpotting;
-(id)VTSecondPassRecognizerToken;
-(BOOL)_getBoolForKey:(id)arg1 category:(id)arg2 default:(BOOL)arg3 ;
-(BOOL)_containsCategory:(id)arg1 ;
@end


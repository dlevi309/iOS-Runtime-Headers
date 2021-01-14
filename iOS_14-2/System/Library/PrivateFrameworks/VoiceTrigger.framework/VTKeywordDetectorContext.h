/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@class NSString;

@interface VTKeywordDetectorContext : NSObject {

	BOOL _isMultiPhraseVTEnabled;
	NSString* _assetPath;
	NSString* _categoryKey;
	NSString* _locale;
	unsigned long long _audioSourceOption;

}

@property (nonatomic,readonly) NSString * assetPath;                              //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,readonly) NSString * categoryKey;                            //@synthesize categoryKey=_categoryKey - In the implementation block
@property (nonatomic,readonly) NSString * locale;                                 //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) unsigned long long audioSourceOption;              //@synthesize audioSourceOption=_audioSourceOption - In the implementation block
@property (nonatomic,readonly) BOOL isMultiPhraseVTEnabled;                       //@synthesize isMultiPhraseVTEnabled=_isMultiPhraseVTEnabled - In the implementation block
-(NSString *)locale;
-(NSString *)assetPath;
-(BOOL)isMultiPhraseVTEnabled;
-(id)initWithVTContext:(id)arg1 error:(id*)arg2 ;
-(NSString *)categoryKey;
-(unsigned long long)audioSourceOption;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class AVMediaSelectionOption, NSString, NSNumber;

@interface TVPSubtitleOption : NSObject {

	AVMediaSelectionOption* _avMediaSelectionOption;
	NSString* _languageCodeFromLocale;
	NSString* _languageCodeBCP47;
	NSString* _identifier;
	NSString* _localizedDisplayString;
	NSNumber* _cachedContainsOnlyForcedSubtitles;
	NSNumber* _cachedSubtitleType;

}

@property (nonatomic,retain) AVMediaSelectionOption * avMediaSelectionOption;              //@synthesize avMediaSelectionOption=_avMediaSelectionOption - In the implementation block
@property (nonatomic,copy) NSString * languageCodeFromLocale;                              //@synthesize languageCodeFromLocale=_languageCodeFromLocale - In the implementation block
@property (nonatomic,copy) NSString * languageCodeBCP47;                                   //@synthesize languageCodeBCP47=_languageCodeBCP47 - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * localizedDisplayString;                              //@synthesize localizedDisplayString=_localizedDisplayString - In the implementation block
@property (nonatomic,retain) NSNumber * cachedContainsOnlyForcedSubtitles;                 //@synthesize cachedContainsOnlyForcedSubtitles=_cachedContainsOnlyForcedSubtitles - In the implementation block
@property (nonatomic,retain) NSNumber * cachedSubtitleType;                                //@synthesize cachedSubtitleType=_cachedSubtitleType - In the implementation block
@property (nonatomic,readonly) BOOL containsOnlyForcedSubtitles; 
@property (nonatomic,readonly) long long subtitleType; 
+(id)offSubtitleOption;
+(id)autoSubtitleOption;
+(id)offSubtitleOptionWithAVMediaSelectionOption:(id)arg1 ;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(long long)subtitleType;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)languageCodeBCP47;
-(BOOL)containsOnlyForcedSubtitles;
-(AVMediaSelectionOption *)avMediaSelectionOption;
-(id)initWithAVMediaSelectionOption:(id)arg1 ;
-(NSString *)languageCodeFromLocale;
-(void)setLocalizedDisplayString:(NSString *)arg1 ;
-(NSString *)localizedDisplayString;
-(void)setAvMediaSelectionOption:(AVMediaSelectionOption *)arg1 ;
-(void)setLanguageCodeFromLocale:(NSString *)arg1 ;
-(void)setLanguageCodeBCP47:(NSString *)arg1 ;
-(NSNumber *)cachedContainsOnlyForcedSubtitles;
-(void)setCachedContainsOnlyForcedSubtitles:(NSNumber *)arg1 ;
-(NSNumber *)cachedSubtitleType;
-(void)setCachedSubtitleType:(NSNumber *)arg1 ;
@end


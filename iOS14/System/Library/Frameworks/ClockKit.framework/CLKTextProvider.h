/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKTextProviderCache, NSMutableDictionary, NSMutableArray, CLKClockTimerToken, UIColor, NSString;

@interface CLKTextProvider : NSObject <NSSecureCoding, NSCopying> {

	CLKTextProviderCache* _defaultCache;
	NSMutableDictionary* _cachesByKey;
	NSMutableArray* _recentCacheKeys;
	unsigned long long _nextUpdateToken;
	NSMutableDictionary* _updateHandlersByToken;
	CLKClockTimerToken* _secondTimerToken;
	CLKClockTimerToken* _minuteTimerToken;
	CLKClockTimerToken* _30fpsTimerToken;
	BOOL _finalized;
	BOOL _ignoreUppercaseStyle;
	BOOL _paused;
	BOOL _italicized;
	BOOL _monospacedNumbers;
	UIColor* _tintColor;
	NSString* _accessibilityLabel;
	long long _shrinkTextPreference;
	long long _timeTravelUpdateFrequency;

}

@property (assign,nonatomic) BOOL ignoreUppercaseStyle;                        //@synthesize ignoreUppercaseStyle=_ignoreUppercaseStyle - In the implementation block
@property (assign,nonatomic) BOOL paused;                                      //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL italicized;                                  //@synthesize italicized=_italicized - In the implementation block
@property (assign,nonatomic) BOOL monospacedNumbers;                           //@synthesize monospacedNumbers=_monospacedNumbers - In the implementation block
@property (assign,nonatomic) long long shrinkTextPreference;                   //@synthesize shrinkTextPreference=_shrinkTextPreference - In the implementation block
@property (assign,nonatomic) long long timeTravelUpdateFrequency;              //@synthesize timeTravelUpdateFrequency=_timeTravelUpdateFrequency - In the implementation block
@property (nonatomic,readonly) long long updateFrequency; 
@property (nonatomic,retain) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                      //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)textProviderWithFormat:(id)arg1 ;
+(id)textProviderWithJSONObjectRepresentation:(id)arg1 ;
+(id)localizableTextProviderWithStringsFileTextKey:(id)arg1 shortTextKey:(id)arg2 ;
+(id)localizableTextProviderWithStringsFileTextKey:(id)arg1 ;
+(id)localizableTextProviderWithStringsFileFormatKey:(id)arg1 textProviders:(id)arg2 ;
+(id)textProviderWithFormat:(id)arg1 arguments:(char*)arg2 ;
-(BOOL)validate;
-(NSString *)accessibilityLabel;
-(id)initPrivate;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 andRemovingDesignator:(BOOL)arg2 designatorExists:(BOOL*)arg3 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(id)_description;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)finalize;
-(id)init;
-(void)_localeChanged;
-(id)attributedString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)_validate;
-(id)description;
-(void)_endSession;
-(unsigned long long)hash;
-(void)_update;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)paused;
-(void)_commonInit;
-(void)_startSessionWithDate:(id)arg1 ;
-(long long)_updateFrequency;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 designatorExists:(BOOL*)arg2 ;
-(id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(long long)updateFrequency;
-(long long)shrinkTextPreference;
-(id)finalizedCopy;
-(void)stopUpdatesForToken:(id)arg1 ;
-(long long)timeTravelUpdateFrequency;
-(id)attributedTextAndSize:(CGSize*)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 now:(id)arg4 ;
-(CGSize)minimumSizeWithStyle:(id)arg1 now:(id)arg2 ;
-(void)setTimeTravelUpdateFrequency:(long long)arg1 ;
-(id)localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(void)setItalicized:(BOOL)arg1 ;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_sessionCacheKey;
-(id)sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(void)_maybeStartOrStopUpdates;
-(BOOL)ignoreUppercaseStyle;
-(id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2 ;
-(id)_cacheForKey:(id)arg1 ;
-(id)_italicize:(id)arg1 ;
-(id)_monospacedNumbers:(id)arg1 ;
-(id)_defaultCache;
-(void)_pruneCacheKeysIfNecessary;
-(void)setIgnoreUppercaseStyle:(BOOL)arg1 ;
-(BOOL)italicized;
-(BOOL)monospacedNumbers;
-(void)setMonospacedNumbers:(BOOL)arg1 ;
-(void)setShrinkTextPreference:(long long)arg1 ;
@end


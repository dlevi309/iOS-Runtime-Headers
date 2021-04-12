/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKTextProviderCache, NSMutableDictionary, NSMutableArray, NSNumber, UIColor, NSString;

@interface CLKTextProvider : NSObject <NSSecureCoding, NSCopying> {

	CLKTextProviderCache* _defaultCache;
	NSMutableDictionary* _cachesByKey;
	NSMutableArray* _recentCacheKeys;
	unsigned long long _nextUpdateToken;
	NSMutableDictionary* _updateHandlersByToken;
	NSNumber* _secondTimerToken;
	NSNumber* _minuteTimerToken;
	NSNumber* _30fpsTimerToken;
	BOOL _finalized;
	BOOL _ignoreUppercaseStyle;
	BOOL _paused;
	BOOL _italicized;
	BOOL _monospacedNumbers;
	BOOL _useMonospacedNumbersForTimeTravel;
	UIColor* _tintColor;
	NSString* _accessibilityLabel;
	long long _shrinkTextPreference;
	long long _timeTravelUpdateFrequency;

}

@property (assign,nonatomic) BOOL ignoreUppercaseStyle;                           //@synthesize ignoreUppercaseStyle=_ignoreUppercaseStyle - In the implementation block
@property (assign,nonatomic) BOOL paused;                                         //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL italicized;                                     //@synthesize italicized=_italicized - In the implementation block
@property (assign,nonatomic) BOOL monospacedNumbers;                              //@synthesize monospacedNumbers=_monospacedNumbers - In the implementation block
@property (assign,nonatomic) long long shrinkTextPreference;                      //@synthesize shrinkTextPreference=_shrinkTextPreference - In the implementation block
@property (assign,nonatomic) BOOL useMonospacedNumbersForTimeTravel;              //@synthesize useMonospacedNumbersForTimeTravel=_useMonospacedNumbersForTimeTravel - In the implementation block
@property (assign,nonatomic) long long timeTravelUpdateFrequency;                 //@synthesize timeTravelUpdateFrequency=_timeTravelUpdateFrequency - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                 //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                         //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textProviderWithJSONObjectRepresentation:(id)arg1 ;
+(id)localizableTextProviderWithStringsFileTextKey:(id)arg1 shortTextKey:(id)arg2 ;
+(id)localizableTextProviderWithStringsFileTextKey:(id)arg1 ;
+(id)localizableTextProviderWithStringsFileFormatKey:(id)arg1 textProviders:(id)arg2 ;
+(id)textProviderWithFormat:(id)arg1 arguments:(char*)arg2 ;
+(id)textProviderWithFormat:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_update;
-(void)_validate;
-(id)_description;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(id)attributedString;
-(void)_commonInit;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)validate;
-(void)_endSession;
-(id)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_localeChanged;
-(id)JSONObjectRepresentation;
-(void)stopUpdatesForToken:(id)arg1 ;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 andRemovingDesignator:(BOOL)arg2 designatorExists:(BOOL*)arg3 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(long long)timeTravelUpdateFrequency;
-(id)finalizedCopy;
-(void)_startSessionWithDate:(id)arg1 ;
-(id)_sessionCacheKey;
-(id)sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(long long)_updateFrequency;
-(void)_maybeStartOrStopUpdates;
-(void)setTimeTravelUpdateFrequency:(long long)arg1 ;
-(void)setUseMonospacedNumbersForTimeTravel:(BOOL)arg1 ;
-(BOOL)ignoreUppercaseStyle;
-(id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2 ;
-(id)localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2 ;
-(id)_cacheForKey:(id)arg1 ;
-(id)_italicize:(id)arg1 ;
-(id)_monospacedNumbers:(id)arg1 ;
-(id)attributedTextAndSize:(CGSize*)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 now:(id)arg4 ;
-(id)_defaultCache;
-(void)_pruneCacheKeysIfNecessary;
-(CGSize)minimumSizeWithStyle:(id)arg1 now:(id)arg2 ;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 designatorExists:(BOOL*)arg2 ;
-(id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg1 ;
-(void)setIgnoreUppercaseStyle:(BOOL)arg1 ;
-(BOOL)italicized;
-(void)setItalicized:(BOOL)arg1 ;
-(BOOL)monospacedNumbers;
-(void)setMonospacedNumbers:(BOOL)arg1 ;
-(long long)shrinkTextPreference;
-(void)setShrinkTextPreference:(long long)arg1 ;
-(BOOL)useMonospacedNumbersForTimeTravel;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@protocol FMDistanceCalculatorLocalizationDelegate, OS_dispatch_queue;
@class NSObject, NSLocale, NSUserDefaults, NSNumberFormatter;

@interface FMDistanceCalculator : NSObject {

	NSObject*<FMDistanceCalculatorLocalizationDelegate> _localizationDelegate;
	NSLocale* _locale;
	NSLocale* _measurementSystemLocale;
	NSUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _calculationQueue;
	NSNumberFormatter* _formatter;

}

@property (nonatomic,retain) NSLocale * locale;                                                                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSLocale * measurementSystemLocale;                                                           //@synthesize measurementSystemLocale=_measurementSystemLocale - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                                                                //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> calculationQueue;                                                //@synthesize calculationQueue=_calculationQueue - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * formatter;                                                                //@synthesize formatter=_formatter - In the implementation block
@property (assign,nonatomic) long long measurementSystem; 
@property (assign,nonatomic,__weak) NSObject*<FMDistanceCalculatorLocalizationDelegate> localizationDelegate;              //@synthesize localizationDelegate=_localizationDelegate - In the implementation block
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(NSNumberFormatter *)formatter;
-(void)setFormatter:(NSNumberFormatter *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)initWithDefaultsSuiteName:(id)arg1 ;
-(id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2 ;
-(id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2 measurementSystemLocale:(id)arg3 ;
-(void)setMeasurementSystemLocale:(NSLocale *)arg1 ;
-(NSLocale *)measurementSystemLocale;
-(long long)measurementSystem;
-(NSObject*<OS_dispatch_queue>)calculationQueue;
-(id)_localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 ;
-(id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2 ;
-(id)_localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 fractionDigits:(unsigned long long)arg3 ;
-(NSObject*<FMDistanceCalculatorLocalizationDelegate>)localizationDelegate;
-(void)setMeasurementSystem:(long long)arg1 ;
-(double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(id)futureLocalizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(void)setLocalizationDelegate:(NSObject*<FMDistanceCalculatorLocalizationDelegate>)arg1 ;
-(void)setCalculationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/


@class NSString, UIColor, NSArray;

@interface AirQualityIndexModel : NSObject {

	double _fraction;
	NSString* _localizedIndex;
	UIColor* _tintColor;
	NSArray* _spectrum;
	NSArray* _spectrumTicks;

}

@property (nonatomic,readonly) double fraction;                        //@synthesize fraction=_fraction - In the implementation block
@property (nonatomic,readonly) NSString * localizedIndex;              //@synthesize localizedIndex=_localizedIndex - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) NSArray * spectrum;                     //@synthesize spectrum=_spectrum - In the implementation block
@property (nonatomic,readonly) NSArray * spectrumTicks;                //@synthesize spectrumTicks=_spectrumTicks - In the implementation block
+(id)airQualityIndexModelForConditions:(id)arg1 location:(id)arg2 indexNumberFormatter:(id)arg3 useRoundedVariant:(BOOL)arg4 ;
-(double)fraction;
-(UIColor *)tintColor;
-(NSArray *)spectrum;
-(NSArray *)spectrumTicks;
-(NSString *)localizedIndex;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/


@class NSString, UIColor;

@interface UltravioletIndexModel : NSObject {

	double _fraction;
	NSString* _localizedIndex;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) double fraction;                        //@synthesize fraction=_fraction - In the implementation block
@property (nonatomic,readonly) NSString * localizedIndex;              //@synthesize localizedIndex=_localizedIndex - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
+(id)ultravioletIndexModelForConditions:(id)arg1 indexNumberFormatter:(id)arg2 useRoundedVariant:(BOOL)arg3 ;
-(double)fraction;
-(UIColor *)tintColor;
-(NSString *)localizedIndex;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSLengthFormatter, NSNumber;

@interface HKPersonHeightFormatter : NSObject {

	NSLengthFormatter* _heightFormatter;
	NSNumber* _usesImperialUnits;

}

@property (nonatomic,readonly) BOOL usesImperialUnits; 
+(id)sharedFormatter;
-(id)init;
-(void)_localeChanged:(id)arg1 ;
-(void)dealloc;
-(BOOL)usesImperialUnits;
-(void)getFeet:(long long*)arg1 inches:(long long*)arg2 fromCentimeters:(double)arg3 ;
-(id)formattedValueForFeet:(double)arg1 ;
-(id)formattedValueForInches:(double)arg1 ;
-(id)formattedValueForCentimeters:(double)arg1 ;
-(double)centimetersFromFeet:(double)arg1 inches:(double)arg2 ;
-(id)localizedStringFromHeightInCentimeters:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)_localeChanged:(id)arg1 ;
-(id)localizedStringFromHeightInCentimeters:(id)arg1 ;
-(void)getFeet:(long long*)arg1 inches:(long long*)arg2 fromCentimeters:(double)arg3 ;
-(BOOL)usesImperialUnits;
-(double)centimetersFromFeet:(double)arg1 inches:(double)arg2 ;
-(id)formattedValueForFeet:(double)arg1 ;
-(id)formattedValueForInches:(double)arg1 ;
-(id)formattedValueForCentimeters:(double)arg1 ;
@end


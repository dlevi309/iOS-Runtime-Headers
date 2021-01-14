/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDataProviderValue.h>

@class NSNumber, NSDate, NSString;

@interface HKAudiogramDataProviderCurrentValue : NSObject <HKDataProviderValue> {

	unsigned long long _diagnosticCategory;
	NSNumber* _leftAverageEarSensitivity;
	NSNumber* _rightAverageEarSensitivity;
	NSNumber* _minimumSensitivity;
	NSNumber* _maximumSensitivity;
	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5 ;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg1 ;
-(id)lastUpdatedShortDescriptionWithDateCache:(id)arg1 ;
-(id)stringWithDisplayType:(id)arg1 unitController:(id)arg2 ;
-(id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3 ;
-(id)_stringWithDisplayType:(id)arg1 unitController:(id)arg2 shortened:(BOOL)arg3 ;
-(id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3 shortened:(BOOL)arg4 ;
-(id)_rangeStringWithDisplayType:(id)arg1 unitController:(id)arg2 ;
-(id)_localizedAverageSensitivity:(id)arg1 ear:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4 shortened:(BOOL)arg5 ;
-(id)initWithDiagnosticCategory:(unsigned long long)arg1 leftAverageEarSensitivity:(id)arg2 rightAverageEarSensitivity:(id)arg3 minimumSensitivity:(id)arg4 maximumSensitivity:(id)arg5 date:(id)arg6 ;
@end


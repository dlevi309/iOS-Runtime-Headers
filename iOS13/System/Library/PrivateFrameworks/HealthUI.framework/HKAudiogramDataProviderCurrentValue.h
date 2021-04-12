/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5 ;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg1 ;
-(id)initWithDiagnosticCategory:(unsigned long long)arg1 leftAverageEarSensitivity:(id)arg2 rightAverageEarSensitivity:(id)arg3 minimumSensitivity:(id)arg4 maximumSensitivity:(id)arg5 date:(id)arg6 ;
-(id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3 shortened:(BOOL)arg4 ;
-(id)lastUpdatedShortDescriptionWithDateCache:(id)arg1 ;
-(id)stringWithDisplayType:(id)arg1 unitController:(id)arg2 ;
-(id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3 ;
-(id)_stringWithDisplayType:(id)arg1 unitController:(id)arg2 shortened:(BOOL)arg3 ;
-(id)_rangeStringWithDisplayType:(id)arg1 unitController:(id)arg2 ;
-(id)_localizedAverageSensitivity:(id)arg1 ear:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4 shortened:(BOOL)arg5 ;
@end


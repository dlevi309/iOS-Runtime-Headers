/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDataProviderValue.h>

@class NSNumber, NSDate, NSString;

@interface WDGenericDataProviderSecondaryValue : NSObject <HKDataProviderValue> {

	NSNumber* _average;
	NSDate* _date;
	NSString* _formatString;

}

@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSString * formatString;               //@synthesize formatString=_formatString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)formatString;
-(void)setFormatString:(NSString *)arg1 ;
-(id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5 ;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg1 ;
-(id)initWithAverage:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKNumberFormatter.h>

@class NSString;

@interface _HKStaticDecimalPrecisionNumberFormatter : NSObject <HKNumberFormatter> {

	long long _decimalPrecision;

}

@property (assign,nonatomic) long long decimalPrecision;              //@synthesize decimalPrecision=_decimalPrecision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)formatterWithDecimalPrecision:(long long)arg1 ;
-(void)setDecimalPrecision:(long long)arg1 ;
-(long long)decimalPrecision;
-(BOOL)returnsUnitWithValueForDisplay;
-(id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
@end


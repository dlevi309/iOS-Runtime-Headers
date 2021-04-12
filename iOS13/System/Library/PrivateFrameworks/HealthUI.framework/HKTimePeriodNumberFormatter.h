/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKNumberFormatter.h>

@class NSString;

@interface HKTimePeriodNumberFormatter : NSObject <HKNumberFormatter> {

	BOOL _shouldRoundToHours;

}

@property (assign,nonatomic) BOOL shouldRoundToHours;               //@synthesize shouldRoundToHours=_shouldRoundToHours - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
-(BOOL)returnsUnitWithValueForDisplay;
-(void)setShouldRoundToHours:(BOOL)arg1 ;
-(BOOL)shouldRoundToHours;
@end


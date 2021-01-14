/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKNumberFormatter.h>

@class NSDictionary, NSString;

@interface HKEnumeratedDisplayTypeNumberFormatter : NSObject <HKNumberFormatter> {

	NSDictionary* _valueLabels;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDisplayType:(id)arg1 ;
-(BOOL)returnsUnitWithValueForDisplay;
-(id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
@end


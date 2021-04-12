/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProactiveEventTracker/PETEventProperty.h>

@interface PETEventNumericalProperty : PETEventProperty {

	NSRange _validRange;
	BOOL _clampValues;

}
-(id)description;
-(id)initWithName:(id)arg1 range:(NSRange)arg2 clampValues:(BOOL)arg3 ;
-(unsigned long long)cardinality;
-(id)_loggingKeyStringRepresentationForValue:(id)arg1 ;
-(NSRange)validRange;
-(id)longestValueString;
-(unsigned long long)_unsignedIntegerValueForNumericValue:(id)arg1 ;
-(BOOL)isValidValue:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProactiveEventTracker/PETEventProperty.h>

@interface PETEventNumericalProperty : PETEventProperty {

	NSRange _validRange;
	BOOL _clampValues;

}
-(id)description;
-(BOOL)isValidValue:(id)arg1 ;
-(id)_loggingKeyStringRepresentationForValue:(id)arg1 ;
-(unsigned long long)cardinality;
-(id)longestValueString;
-(NSRange)validRange;
-(id)initWithName:(id)arg1 range:(NSRange)arg2 clampValues:(BOOL)arg3 ;
-(unsigned long long)_unsignedIntegerValueForNumericValue:(id)arg1 ;
@end


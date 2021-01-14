/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/PETEventProperty.h>

@class NSSet;

@interface PETEventStringValuedProperty : PETEventProperty {

	NSSet* _possibleValues;
	BOOL _autoSanitizeValues;

}
-(id)possibleValues;
-(id)description;
-(id)initWithName:(id)arg1 possibleValues:(id)arg2 autoSanitizeValues:(BOOL)arg3 ;
-(unsigned long long)cardinality;
-(id)_loggingKeyStringRepresentationForValue:(id)arg1 ;
-(id)longestValueString;
-(BOOL)isValidValue:(id)arg1 ;
@end


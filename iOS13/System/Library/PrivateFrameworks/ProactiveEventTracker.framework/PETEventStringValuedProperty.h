/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/PETEventProperty.h>

@class NSSet;

@interface PETEventStringValuedProperty : PETEventProperty {

	NSSet* _possibleValues;
	BOOL _autoSanitizeValues;

}
-(id)description;
-(BOOL)isValidValue:(id)arg1 ;
-(id)possibleValues;
-(id)_loggingKeyStringRepresentationForValue:(id)arg1 ;
-(unsigned long long)cardinality;
-(id)longestValueString;
-(id)initWithName:(id)arg1 possibleValues:(id)arg2 autoSanitizeValues:(BOOL)arg3 ;
@end


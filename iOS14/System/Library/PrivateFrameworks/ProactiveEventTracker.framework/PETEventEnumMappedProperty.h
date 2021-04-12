/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProactiveEventTracker/PETEventProperty.h>

@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {

	NSDictionary* _enumMap;
	BOOL _autoSanitizeValues;

}
-(id)possibleValues;
-(id)description;
-(unsigned long long)cardinality;
-(id)_loggingKeyStringRepresentationForValue:(id)arg1 ;
-(NSRange)validRange;
-(id)initWithName:(id)arg1 enumMapping:(id)arg2 autoSanitizeValues:(BOOL)arg3 ;
-(id)longestValueString;
-(BOOL)isValidValue:(id)arg1 ;
@end


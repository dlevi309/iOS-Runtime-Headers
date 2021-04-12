/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class NSString;

@interface PETEventProperty : NSObject {

	NSString* _name;

}

@property (nonatomic,readonly) unsigned long long cardinality; 
@property (nonatomic,readonly) NSString * longestValueString; 
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
+(id)propertyWithName:(id)arg1 possibleValues:(id)arg2 autoSanitizeValues:(BOOL)arg3 ;
+(id)propertyWithName:(id)arg1 enumMapping:(id)arg2 ;
+(id)propertyWithName:(id)arg1 range:(NSRange)arg2 ;
+(id)propertyWithName:(id)arg1 rangeMin:(unsigned long long)arg2 rangeMax:(unsigned long long)arg3 ;
+(id)freeValuedPropertyWithName:(id)arg1 ;
+(id)propertyWithName:(id)arg1 range:(NSRange)arg2 clampValues:(BOOL)arg3 ;
+(id)propertyWithName:(id)arg1 enumMapping:(id)arg2 autoSanitizeValues:(BOOL)arg3 ;
+(id)propertyWithName:(id)arg1 possibleValues:(id)arg2 ;
-(id)possibleValues;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)cardinality;
-(id)_loggingKeyStringRepresentationForValue:(id)arg1 ;
-(NSRange)validRange;
-(NSString *)longestValueString;
-(BOOL)isValidValue:(id)arg1 ;
@end


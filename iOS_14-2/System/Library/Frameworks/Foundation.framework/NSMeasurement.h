/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUnit;

@interface NSMeasurement : NSObject <NSCopying, NSSecureCoding> {

	NSUnit* _unit;
	double _doubleValue;

}

@property (copy,readonly) NSUnit * unit; 
@property (readonly) double doubleValue; 
+(BOOL)supportsSecureCoding;
-(double)doubleValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)measurementBySubtractingMeasurement:(id)arg1 ;
-(id)_performOperation:(long long)arg1 withMeasurement:(id)arg2 ;
-(id)measurementByConvertingToUnit:(id)arg1 ;
-(id)measurementByAddingMeasurement:(id)arg1 ;
-(id)description;
-(id)initWithDoubleValue:(double)arg1 unit:(id)arg2 ;
-(NSUnit *)unit;
-(BOOL)canBeConvertedToUnit:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


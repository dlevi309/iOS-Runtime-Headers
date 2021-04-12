/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUnit *)unit;
-(id)measurementByConvertingToUnit:(id)arg1 ;
-(id)initWithDoubleValue:(double)arg1 unit:(id)arg2 ;
-(BOOL)canBeConvertedToUnit:(id)arg1 ;
-(id)_performOperation:(long long)arg1 withMeasurement:(id)arg2 ;
-(id)measurementByAddingMeasurement:(id)arg1 ;
-(id)measurementBySubtractingMeasurement:(id)arg1 ;
@end


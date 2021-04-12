/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSUnit.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUnitConverter;

@interface NSDimension : NSUnit <NSSecureCoding> {

	unsigned long long _reserved;
	NSUnitConverter* _converter;

}

@property (readonly) unsigned long long specifier;                  //@synthesize reserved=_reserved - In the implementation block
@property (copy,readonly) NSUnitConverter * converter;              //@synthesize converter=_converter - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)baseUnit;
+(id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)specifier;
-(NSUnitConverter *)converter;
-(id)dimension;
-(id)initWithSpecifier:(unsigned long long)arg1 symbol:(id)arg2 converter:(id)arg3 ;
-(id)initWithSymbol:(id)arg1 converter:(id)arg2 ;
@end


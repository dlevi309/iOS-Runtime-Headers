/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CIColor : NSObject <NSSecureCoding, NSCopying> {

	void* _priv;
	void** _pad[3];

}

@property (readonly) unsigned long long numberOfComponents; 
@property (readonly) const double* components; 
@property (readonly) double alpha; 
@property (readonly) CGColorSpaceRef colorSpace; 
@property (readonly) double red; 
@property (readonly) double green; 
@property (readonly) double blue; 
@property (readonly) NSString * stringRepresentation; 
+(id)colorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)redColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)grayColor;
+(id)cyanColor;
+(id)blueColor;
+(id)greenColor;
+(id)yellowColor;
+(id)blackColor;
+(id)magentaColor;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)clearColor;
+(id)colorWithString:(id)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)whiteColor;
-(id)initWithColor:(id)arg1 ;
-(id)debugQuickLookObject;
-(CGColorSpaceRef)colorSpace;
-(id)initWithString:(id)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(NSString *)stringRepresentation;
-(double)red;
-(id)init;
-(double)alpha;
-(void)encodeWithCoder:(id)arg1 ;
-(const double*)components;
-(CGColorRef)cgColor;
-(id)description;
-(double)blue;
-(unsigned long long)numberOfComponents;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
-(unsigned long long)hash;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(double)green;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
+(id)colorWithString:(id)arg1 ;
+(id)blackColor;
+(id)whiteColor;
+(id)grayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)clearColor;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(const double*)components;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(double)red;
-(double)green;
-(double)blue;
-(double)alpha;
-(CGColorRef)cgColor;
-(unsigned long long)numberOfComponents;
-(CGColorSpaceRef)colorSpace;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(NSString *)stringRepresentation;
-(id)debugQuickLookObject;
@end


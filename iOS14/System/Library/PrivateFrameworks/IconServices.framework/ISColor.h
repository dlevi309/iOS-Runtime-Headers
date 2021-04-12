/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


#import <IconServices/IconServices-Structs.h>
@class CIColor;

@interface ISColor : NSObject {

	CGColorRef _cgColor;

}

@property (readonly) CGColorRef cgColor;              //@synthesize cgColor=_cgColor - In the implementation block
@property (readonly) CIColor * ciColor; 
+(CGColorSpaceRef)deviceRGBColorSpace;
+(CGColorSpaceRef)deviceGreyColorSpace;
+(id)black;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(CGColorRef)cgColor;
-(CIColor *)ciColor;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(void)dealloc;
@end


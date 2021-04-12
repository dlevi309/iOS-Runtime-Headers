/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)black;
+(CGColorSpaceRef)deviceGreyColorSpace;
-(void)dealloc;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(CGColorRef)cgColor;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(CIColor *)ciColor;
@end


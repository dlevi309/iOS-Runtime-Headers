/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FxColor : NSObject <NSCoding> {

	void* _priv;
	void** _pad[3];

}
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithString:(id)arg1 ;
+(id)colorWithCIColor:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(const double*)components;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)red;
-(double)green;
-(double)blue;
-(double)alpha;
-(unsigned long long)numberOfComponents;
-(CGColorSpaceRef)colorSpace;
-(id)stringRepresentation;
-(CGColorRef)_cgColor;
-(id)ciColor;
-(void)convertToRGBA:(double*)arg1 ;
@end


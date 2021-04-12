/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FxColor : NSObject <NSCoding> {

	void* _priv;
	void** _pad[3];

}
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithCIColor:(id)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)colorWithString:(id)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(CGColorSpaceRef)colorSpace;
-(id)initWithString:(id)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)stringRepresentation;
-(double)red;
-(double)alpha;
-(void)encodeWithCoder:(id)arg1 ;
-(const double*)components;
-(id)ciColor;
-(id)description;
-(CGColorRef)_cgColor;
-(double)blue;
-(unsigned long long)numberOfComponents;
-(id)initWithCoder:(id)arg1 ;
-(double)green;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(void)dealloc;
-(void)convertToRGBA:(double*)arg1 ;
@end


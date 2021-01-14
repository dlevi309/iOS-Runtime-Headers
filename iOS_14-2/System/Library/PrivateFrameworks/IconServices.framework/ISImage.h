/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


#import <IconServices/IconServices-Structs.h>
@class NSData, NSUUID;

@interface ISImage : NSObject {

	NSData* _bitmapData;

}

@property (retain) NSUUID * uuid; 
@property (readonly) NSData * bitmapData;              //@synthesize bitmapData=_bitmapData - In the implementation block
@property (readonly) CGSize pixelSize; 
@property (assign) CGSize minimumSize; 
@property (readonly) CGSize size; 
@property (readonly) double scale; 
@property (readonly) CGImageRef CGImage; 
@property (readonly) CGImageRef cgImage; 
@property (readonly) BOOL placeholder; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(CGColorSpaceRef)srgbColorSpace;
-(NSUUID *)uuid;
-(id)initWithContentsOfURL:(id)arg1 scale:(double)arg2 ;
-(id)debugDescription;
-(NSData *)bitmapData;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 minimumSize:(CGSize)arg3 placeholder:(BOOL)arg4 ;
-(id)description;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 placeholder:(BOOL)arg3 ;
-(BOOL)writeToURL:(id)arg1 ;
-(id)_init;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
-(id)digest;
-(CGSize)pixelSize;
-(CGImageRef)CGImage;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)debugDescription;
-(id)_init;
-(NSUUID *)uuid;
-(CGImageRef)CGImage;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(NSData *)bitmapData;
-(CGSize)pixelSize;
-(BOOL)writeToURL:(id)arg1 ;
-(id)digest;
-(id)initWithContentsOfURL:(id)arg1 scale:(double)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 minimumSize:(CGSize)arg3 placeholder:(BOOL)arg4 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 placeholder:(BOOL)arg3 ;
@end


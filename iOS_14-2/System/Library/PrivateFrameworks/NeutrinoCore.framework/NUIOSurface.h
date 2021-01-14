/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NUPixelFormat, IOSurface, NSString;

@interface NUIOSurface : NSObject {

	NUPixelFormat* _format;
	NUPixelFormat* _internalFormat;
	IOSurfaceRef _IOSurfaceRef;
	SCD_Struct_NU7 _size;

}

@property (nonatomic,readonly) NUPixelFormat * internalFormat;              //@synthesize internalFormat=_internalFormat - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef IOSurfaceRef;                   //@synthesize IOSurfaceRef=_IOSurfaceRef - In the implementation block
@property (nonatomic,readonly) IOSurface * IOSurface; 
@property (nonatomic,readonly) SCD_Struct_NU7 size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NUPixelFormat * format;                      //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) long long rowBytes; 
@property (nonatomic,readonly) long long sizeInBytes; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) CGColorSpaceRef colorSpace; 
+(id)_internalFormatForPixelFormat:(id)arg1 ;
-(BOOL)isPurged;
-(id)debugQuickLookObject;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(NUPixelFormat *)format;
-(id)init;
-(BOOL)write:(/*^block*/id)arg1 ;
-(SCD_Struct_NU7)size;
-(BOOL)read:(/*^block*/id)arg1 ;
-(NSString *)name;
-(id)description;
-(long long)sizeInBytes;
-(long long)rowBytes;
-(void)setName:(NSString *)arg1 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(IOSurface *)IOSurface;
-(void)dealloc;
-(BOOL)makeNonPurgeable;
-(id)newRenderDestination;
-(int)_fetchPurgeState:(unsigned*)arg1 ;
-(id)_purgeStateDescription;
-(unsigned)_purgeLevelToOSValue:(long long)arg1 ;
-(void)_allocateSurface;
-(void)makePurgeable:(long long)arg1 ;
-(NUPixelFormat *)internalFormat;
-(IOSurfaceRef)IOSurfaceRef;
@end


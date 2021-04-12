/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_internalFormatForPixelFormat:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(SCD_Struct_NU7)size;
-(NUPixelFormat *)format;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(long long)sizeInBytes;
-(long long)rowBytes;
-(BOOL)write:(/*^block*/id)arg1 ;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(IOSurface *)IOSurface;
-(BOOL)isPurged;
-(BOOL)makeNonPurgeable;
-(BOOL)read:(/*^block*/id)arg1 ;
-(NUPixelFormat *)internalFormat;
-(id)newRenderDestination;
-(int)_fetchPurgeState:(unsigned*)arg1 ;
-(id)_purgeStateDescription;
-(unsigned)_purgeLevelToOSValue:(long long)arg1 ;
-(void)_allocateSurface;
-(void)makePurgeable:(long long)arg1 ;
-(IOSurfaceRef)IOSurfaceRef;
@end


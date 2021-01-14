/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class CIImage, NSData, NSString;

@interface PLImageContainer : NSObject {

	void* _ioSurface;
	CIImage* _CIImage;
	CGSize _pixelSize;
	CGImageRef _CGImage;
	NSData* _data;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) CGImageRef CGImage;                            //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,readonly) void* ioSurface; 
-(id)initWithPLImage:(id)arg1 ;
-(NSString *)uniformTypeIdentifier;
-(id)description;
-(id)initWithCGImage:(CGImageRef)arg1 ioSurface:(void*)arg2 CIImage:(id)arg3 backingData:(id)arg4 uniformTypeIdentifier:(id)arg5 size:(CGSize)arg6 ;
-(NSData *)data;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)initWithPLImage:(id)arg1 backingData:(id)arg2 uniformTypeIdentifier:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGSize)pixelSize;
-(void*)ioSurface;
-(CGImageRef)CGImage;
-(void)dealloc;
@end


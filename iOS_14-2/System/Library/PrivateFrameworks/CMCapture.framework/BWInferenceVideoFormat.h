/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWVideoFormat, NSDictionary;

@interface BWInferenceVideoFormat : NSObject <NSCopying> {

	BWVideoFormat* _underlyingVideoFormat;
	BOOL _deviceOriented;
	long long _videoContentMode;
	BOOL _includesInvalidContent;
	int _rotationDegrees;

}

@property (nonatomic,readonly) unsigned long long width; 
@property (nonatomic,readonly) unsigned long long height; 
@property (nonatomic,readonly) unsigned pixelFormat; 
@property (nonatomic,readonly) unsigned long long extendedWidth; 
@property (nonatomic,readonly) unsigned long long extendedHeight; 
@property (nonatomic,readonly) int colorSpaceProperties; 
@property (nonatomic,readonly) BOOL deviceOriented; 
@property (nonatomic,readonly) int rotationDegrees; 
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (nonatomic,readonly) BWVideoFormat * underlyingVideoFormat; 
@property (nonatomic,readonly) long long videoContentMode; 
@property (nonatomic,readonly) BOOL includesInvalidContent; 
+(id)formatByResolvingRequirements:(id)arg1 ;
-(int)rotationDegrees;
-(unsigned long long)width;
-(NSDictionary *)pixelBufferAttributes;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(int)colorSpaceProperties;
-(unsigned)pixelFormat;
-(unsigned long long)height;
-(BOOL)deviceOriented;
-(id)description;
-(unsigned long long)extendedWidth;
-(unsigned long long)hash;
-(BWVideoFormat *)underlyingVideoFormat;
-(unsigned long long)extendedHeight;
-(id)initWithUnderlyingFormat:(id)arg1 isDeviceOriented:(BOOL)arg2 videoContentMode:(long long)arg3 includesInvalidContent:(BOOL)arg4 rotationDegrees:(int)arg5 ;
-(BOOL)includesInvalidContent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)videoContentMode;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


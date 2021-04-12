/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWVideoFormat, NSDictionary;

@interface BWInferenceVideoFormat : NSObject <NSCopying> {

	BWVideoFormat* _underlyingVideoFormat;
	BOOL _deviceOriented;
	long long _videoContentMode;
	BOOL _includesInvalidContent;

}

@property (nonatomic,readonly) unsigned long long width; 
@property (nonatomic,readonly) unsigned long long height; 
@property (nonatomic,readonly) unsigned pixelFormat; 
@property (nonatomic,readonly) unsigned long long extendedWidth; 
@property (nonatomic,readonly) unsigned long long extendedHeight; 
@property (nonatomic,readonly) int colorSpaceProperties; 
@property (nonatomic,readonly) BOOL deviceOriented; 
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
@property (nonatomic,readonly) BWVideoFormat * underlyingVideoFormat; 
@property (nonatomic,readonly) long long videoContentMode; 
@property (nonatomic,readonly) BOOL includesInvalidContent; 
+(id)formatByResolvingRequirements:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned)pixelFormat;
-(unsigned long long)extendedHeight;
-(NSDictionary *)pixelBufferAttributes;
-(BOOL)deviceOriented;
-(int)colorSpaceProperties;
-(unsigned long long)extendedWidth;
-(BWVideoFormat *)underlyingVideoFormat;
-(BOOL)includesInvalidContent;
-(long long)videoContentMode;
-(id)initWithUnderlyingFormat:(id)arg1 isDeviceOriented:(BOOL)arg2 videoContentMode:(long long)arg3 includesInvalidContent:(BOOL)arg4 ;
@end


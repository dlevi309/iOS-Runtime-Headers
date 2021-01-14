/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSString, NSNumber;

@interface PHAssetPhotosInfoPanelExtendedProperties : PHAssetPropertySet {

	NSString* _cameraMake;
	NSString* _cameraModel;
	NSString* _lensModel;
	NSNumber* _flashFired;
	NSNumber* _whiteBalance;
	NSNumber* _meteringMode;
	NSNumber* _iso;
	NSNumber* _focalLength;
	NSNumber* _exposureBias;
	NSNumber* _aperture;
	NSNumber* _shutterSpeed;
	NSString* _codec;
	NSNumber* _fps;
	NSNumber* _duration;
	NSNumber* _sampleRate;
	NSNumber* _bitrate;
	NSNumber* _trackFormat;

}

@property (nonatomic,readonly) NSString * cameraMake;                //@synthesize cameraMake=_cameraMake - In the implementation block
@property (nonatomic,readonly) NSString * cameraModel;               //@synthesize cameraModel=_cameraModel - In the implementation block
@property (nonatomic,readonly) NSString * lensModel;                 //@synthesize lensModel=_lensModel - In the implementation block
@property (nonatomic,readonly) NSNumber * flashFired;                //@synthesize flashFired=_flashFired - In the implementation block
@property (nonatomic,readonly) NSNumber * whiteBalance;              //@synthesize whiteBalance=_whiteBalance - In the implementation block
@property (nonatomic,readonly) NSNumber * meteringMode;              //@synthesize meteringMode=_meteringMode - In the implementation block
@property (nonatomic,readonly) NSNumber * iso;                       //@synthesize iso=_iso - In the implementation block
@property (nonatomic,readonly) NSNumber * focalLength;               //@synthesize focalLength=_focalLength - In the implementation block
@property (nonatomic,readonly) NSNumber * exposureBias;              //@synthesize exposureBias=_exposureBias - In the implementation block
@property (nonatomic,readonly) NSNumber * aperture;                  //@synthesize aperture=_aperture - In the implementation block
@property (nonatomic,readonly) NSNumber * shutterSpeed;              //@synthesize shutterSpeed=_shutterSpeed - In the implementation block
@property (nonatomic,readonly) NSString * codec;                     //@synthesize codec=_codec - In the implementation block
@property (nonatomic,readonly) NSNumber * fps;                       //@synthesize fps=_fps - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSNumber * sampleRate;                //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,readonly) NSNumber * bitrate;                   //@synthesize bitrate=_bitrate - In the implementation block
@property (nonatomic,readonly) NSNumber * trackFormat;               //@synthesize trackFormat=_trackFormat - In the implementation block
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertySetName;
+(id)propertiesToFetch;
-(NSNumber *)iso;
-(NSString *)codec;
-(NSNumber *)fps;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSString *)lensModel;
-(NSNumber *)exposureBias;
-(NSNumber *)flashFired;
-(NSString *)cameraMake;
-(NSNumber *)whiteBalance;
-(NSNumber *)bitrate;
-(NSNumber *)meteringMode;
-(NSString *)cameraModel;
-(NSNumber *)aperture;
-(NSNumber *)focalLength;
-(NSNumber *)shutterSpeed;
-(NSNumber *)trackFormat;
-(NSNumber *)duration;
-(NSNumber *)sampleRate;
@end


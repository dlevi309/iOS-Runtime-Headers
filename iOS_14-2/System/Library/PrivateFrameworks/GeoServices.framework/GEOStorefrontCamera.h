/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOStorefrontCamera : NSObject {

	int _cameraNumber;
	CGSize _imageSize;
	GEOOrientedPosition _position;
	unsigned char _lensType;
	GEOLensModel _projection;
	NSArray* _textureIds;

}

@property (nonatomic,readonly) int cameraNumber;                          //@synthesize cameraNumber=_cameraNumber - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                          //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) GEOOrientedPosition position;              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) unsigned char lensType;                    //@synthesize lensType=_lensType - In the implementation block
@property (nonatomic,readonly) GEOLensModel projection;                   //@synthesize projection=_projection - In the implementation block
@property (nonatomic,readonly) NSArray * textureIds;                      //@synthesize textureIds=_textureIds - In the implementation block
-(CGSize)imageSize;
-(GEOOrientedPosition)position;
-(id)init;
-(int)cameraNumber;
-(unsigned char)lensType;
-(id)initWithCameraMetadata:(id)arg1 ;
-(NSArray *)textureIds;
-(GEOLensModel)projection;
@end


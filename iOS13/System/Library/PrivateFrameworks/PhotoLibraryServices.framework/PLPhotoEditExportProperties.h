/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLPhotoEditExportProperties : NSObject {

	long long _baseEXIFOrientation;
	double _baseDuration;
	unsigned long long _imageWidth;
	unsigned long long _imageHeight;

}

@property (nonatomic,readonly) long long baseEXIFOrientation;               //@synthesize baseEXIFOrientation=_baseEXIFOrientation - In the implementation block
@property (nonatomic,readonly) double baseDuration;                         //@synthesize baseDuration=_baseDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long imageWidth;               //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long imageHeight;              //@synthesize imageHeight=_imageHeight - In the implementation block
+(id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3 duration:(double)arg4 ;
+(id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3 ;
-(unsigned long long)imageHeight;
-(unsigned long long)imageWidth;
-(long long)baseEXIFOrientation;
-(double)baseDuration;
@end


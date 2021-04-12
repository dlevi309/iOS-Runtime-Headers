/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKPhotosResourceDirectorySanitizerValidationStrategy : NSObject {

	BOOL _shouldExpectCropValues;
	unsigned long long _maxNumberOfPhotos;

}

@property (assign,nonatomic) unsigned long long maxNumberOfPhotos;              //@synthesize maxNumberOfPhotos=_maxNumberOfPhotos - In the implementation block
@property (assign,nonatomic) BOOL shouldExpectCropValues;                       //@synthesize shouldExpectCropValues=_shouldExpectCropValues - In the implementation block
-(unsigned long long)maxNumberOfPhotos;
-(void)setMaxNumberOfPhotos:(unsigned long long)arg1 ;
-(BOOL)shouldExpectCropValues;
-(void)setShouldExpectCropValues:(BOOL)arg1 ;
@end


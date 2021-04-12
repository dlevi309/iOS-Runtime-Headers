/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLPhotoEditImportProperties : NSObject {

	long long _baseEXIFOrientation;
	double _baseDuration;

}

@property (nonatomic,readonly) long long baseEXIFOrientation;              //@synthesize baseEXIFOrientation=_baseEXIFOrientation - In the implementation block
@property (nonatomic,readonly) double baseDuration;                        //@synthesize baseDuration=_baseDuration - In the implementation block
+(id)importPropertiesWithEXIFOrientation:(long long)arg1 duration:(double)arg2 ;
+(id)importPropertiesWithEXIFOrientation:(long long)arg1 ;
-(long long)baseEXIFOrientation;
-(double)baseDuration;
@end


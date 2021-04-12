/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOMapItemPhotoOptions : NSObject {

	BOOL _allowSmaller;
	long long _preferredCropStyle;
	long long _preferredFormat;

}

@property (nonatomic,readonly) BOOL allowSmaller;                         //@synthesize allowSmaller=_allowSmaller - In the implementation block
@property (nonatomic,readonly) long long preferredCropStyle;              //@synthesize preferredCropStyle=_preferredCropStyle - In the implementation block
@property (nonatomic,readonly) long long preferredFormat;                 //@synthesize preferredFormat=_preferredFormat - In the implementation block
+(id)defaultPhotoOptionsWithAllowSmaller:(BOOL)arg1 ;
+(id)defaultPhotoOptionsWithCropStyle:(long long)arg1 ;
-(long long)preferredFormat;
-(BOOL)allowSmaller;
-(long long)preferredCropStyle;
-(id)initWithAllowSmaller:(BOOL)arg1 cropStyle:(long long)arg2 format:(long long)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
*/


@protocol CPLDerivativeGenerator
@required
+(BOOL)canGenerateImageDerivativesFromUTI:(id)arg1;
+(BOOL)isMovieUTI:(id)arg1;
+(void)generateDerivativeResourcesFromInputResource:(id)arg1 withAdjustments:(id)arg2 destinationDirectory:(id)arg3 derivativesFilter:(id)arg4 completionHandler:(/*^block*/id)arg5;
+(BOOL)isUnsupportedOriginalFormatError:(id)arg1;

@end


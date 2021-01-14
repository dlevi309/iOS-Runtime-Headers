/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLVideoChoosingOptions <NSObject>
@required
-(long long)videoVersion;
-(BOOL)restrictToPlayableOnCurrentDevice;
-(long long)videoDeliveryMode;
-(BOOL)isMediumHighQualityAllowed;
-(BOOL)isStreamingAllowed;
-(BOOL)isNetworkAccessAllowed;

@end


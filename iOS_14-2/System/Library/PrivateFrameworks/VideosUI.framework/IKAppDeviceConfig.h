/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol IKAppDeviceConfig <NSObject>
@optional
-(id)bundleIdentifier;

@required
-(id)timeZone;
-(CGSize*)screenSize;
-(id)systemLanguage;
-(unsigned long long)preferredVideoFormat;
-(unsigned long long)preferredVideoPreviewFormat;
-(BOOL)isTimeZoneSet;
-(id)storeFrontCountryCode;

@end


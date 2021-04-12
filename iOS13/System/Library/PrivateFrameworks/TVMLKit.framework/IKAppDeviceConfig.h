/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@protocol IKAppDeviceConfig <NSObject>
@optional
-(id)bundleIdentifier;

@required
-(id)timeZone;
-(CGSize*)screenSize;
-(unsigned long long)preferredVideoFormat;
-(unsigned long long)preferredVideoPreviewFormat;
-(id)systemLanguage;
-(id)storeFrontCountryCode;
-(BOOL)isTimeZoneSet;

@end


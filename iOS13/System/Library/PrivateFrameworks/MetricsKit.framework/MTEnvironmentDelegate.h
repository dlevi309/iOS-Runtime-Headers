/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@protocol MTEnvironmentDelegate <NSObject>
@optional
-(id)environmentDataCenter;
-(id)hostAppVersion;
-(id)environmentBuild;
-(id)environmentInstance;
-(id)parentPageUrl;

@required
-(id)connectionType;
-(id)hardwareModel;
-(id)userAgent;
-(id)userType;
-(id)cookies;
-(id)osVersion;
-(id)os;
-(id)appVersion;
-(id)app;
-(id)pixelRatio;
-(id)screenHeight;
-(id)screenWidth;
-(id)osBuildNumber;
-(id)hostApp;
-(id)dsId;
-(id)pageUrl;
-(id)capacityData;
-(id)capacityDataAvailable;
-(id)capacityDisk;
-(id)capacitySystem;
-(id)capacitySystemAvailable;
-(id)hardwareFamily;
-(id)osLanguages;
-(id)resourceRevNum;
-(id)storeFrontHeader;
-(id)windowInnerHeight;
-(id)windowInnerWidth;
-(id)windowOuterHeight;
-(id)windowOuterWidth;

@end


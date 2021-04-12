/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAnonymous;
-(id)cookies;
-(id)appVersion;
-(id)dsId;
-(id)connectionType;
-(id)osVersion;
-(id)pixelRatio;
-(id)pageUrl;
-(id)os;
-(id)hardwareModel;
-(id)hostApp;
-(id)screenWidth;
-(id)app;
-(id)screenHeight;
-(id)userAgent;
-(id)userType;
-(id)osBuildNumber;
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


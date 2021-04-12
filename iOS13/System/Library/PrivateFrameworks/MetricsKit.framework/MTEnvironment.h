/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@protocol MTEnvironmentDelegate;
@interface MTEnvironment : MTObject {

	id<MTEnvironmentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTEnvironmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MTEnvironmentDelegate>)delegate;
-(void)setDelegate:(id<MTEnvironmentDelegate>)arg1 ;
-(id)connectionType;
-(id)hardwareModel;
-(id)userAgent;
-(id)userType;
-(id)cookies;
-(id)osVersion;
-(id)os;
-(id)appVersion;
-(id)app;
-(id)environmentDataCenter;
-(id)pixelRatio;
-(id)screenHeight;
-(id)screenWidth;
-(id)osBuildNumber;
-(id)hostApp;
-(id)dsId;
-(id)pageUrl;
-(id)hostAppVersion;
-(id)capacityData;
-(id)capacityDataAvailable;
-(id)capacityDisk;
-(id)capacitySystem;
-(id)capacitySystemAvailable;
-(id)environmentBuild;
-(id)environmentInstance;
-(id)hardwareFamily;
-(id)osLanguages;
-(id)parentPageUrl;
-(id)resourceRevNum;
-(id)storeFrontHeader;
-(id)windowInnerHeight;
-(id)windowInnerWidth;
-(id)windowOuterHeight;
-(id)windowOuterWidth;
@end


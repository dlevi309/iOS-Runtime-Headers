/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@protocol MTEnvironmentDelegate;
@interface MTEnvironment : MTObject {

	id<MTEnvironmentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTEnvironmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isAnonymous;
-(id)cookies;
-(id)appVersion;
-(id)dsId;
-(id)connectionType;
-(id<MTEnvironmentDelegate>)delegate;
-(id)osVersion;
-(id)pixelRatio;
-(id)pageUrl;
-(void)setDelegate:(id<MTEnvironmentDelegate>)arg1 ;
-(id)os;
-(id)hardwareModel;
-(id)hostApp;
-(id)screenWidth;
-(id)app;
-(id)screenHeight;
-(id)userAgent;
-(id)userType;
-(id)environmentDataCenter;
-(id)osBuildNumber;
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


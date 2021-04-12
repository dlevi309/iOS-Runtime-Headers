/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSString;

@interface BLTWatchKitAppDefinition : NSObject {

	BOOL _isInstalled;
	BOOL _runsIndependently;
	NSString* _containerBundleID;
	NSString* _watchKitAppBundleID;

}

@property (nonatomic,readonly) NSString * containerBundleID;                //@synthesize containerBundleID=_containerBundleID - In the implementation block
@property (nonatomic,readonly) NSString * watchKitAppBundleID;              //@synthesize watchKitAppBundleID=_watchKitAppBundleID - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled;                            //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,readonly) BOOL runsIndependently;                      //@synthesize runsIndependently=_runsIndependently - In the implementation block
-(BOOL)isInstalled;
-(id)initWithContainerBundleID:(id)arg1 watchKitAppBundleID:(id)arg2 isInstalled:(BOOL)arg3 runsIndependently:(BOOL)arg4 ;
-(NSString *)containerBundleID;
-(NSString *)watchKitAppBundleID;
-(BOOL)runsIndependently;
@end


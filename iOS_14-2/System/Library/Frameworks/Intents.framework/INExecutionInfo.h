/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INAppInfo, NSString, NSURL, LSApplicationRecord;

@interface INExecutionInfo : NSObject <NSCopying> {

	INAppInfo* _appInfo;
	NSString* _launchableAppBundleId;
	NSString* _displayableAppBundleId;
	NSString* _extensionBundleId;
	NSURL* _containingAppBundleURL;

}

@property (nonatomic,readonly) LSApplicationRecord * _applicationRecord; 
@property (nonatomic,readonly) INAppInfo * _appInfo;                                  //@synthesize appInfo=_appInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchableAppBundleId;                 //@synthesize launchableAppBundleId=_launchableAppBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayableAppBundleId;                //@synthesize displayableAppBundleId=_displayableAppBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionBundleId;                     //@synthesize extensionBundleId=_extensionBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * containingAppBundleURL;                   //@synthesize containingAppBundleURL=_containingAppBundleURL - In the implementation block
@property (nonatomic,readonly) BOOL canRunOnLocalDevice; 
+(void)initialize;
-(NSString *)extensionBundleId;
-(INAppInfo *)_appInfo;
-(NSString *)displayableAppBundleId;
-(id)_initWithLaunchableAppBundleId:(id)arg1 displayableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 extensionBundleId:(id)arg4 ;
-(BOOL)canRunOnLocalDevice;
-(LSApplicationRecord *)_applicationRecord;
-(NSString *)launchableAppBundleId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)containingAppBundleURL;
@end


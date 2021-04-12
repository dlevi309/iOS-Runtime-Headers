/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/

#import <IntentsCore/IntentsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INAppInfo, NSString, NSURL, LSApplicationProxy;

@interface INCExecutionInfo : NSObject <NSCopying> {

	INAppInfo* _appInfo;
	NSString* _launchableAppBundleId;
	NSString* _displayableAppBundleId;
	NSURL* _containingAppBundleURL;

}

@property (nonatomic,readonly) LSApplicationProxy * _applicationProxy; 
@property (nonatomic,readonly) INAppInfo * _appInfo;                                //@synthesize appInfo=_appInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchableAppBundleId;               //@synthesize launchableAppBundleId=_launchableAppBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayableAppBundleId;              //@synthesize displayableAppBundleId=_displayableAppBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * containingAppBundleURL;                 //@synthesize containingAppBundleURL=_containingAppBundleURL - In the implementation block
@property (nonatomic,readonly) BOOL canRunOnLocalDevice; 
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(INAppInfo *)_appInfo;
-(LSApplicationProxy *)_applicationProxy;
-(NSString *)displayableAppBundleId;
-(NSString *)launchableAppBundleId;
-(BOOL)canRunOnLocalDevice;
-(id)_initWithLaunchableAppBundleId:(id)arg1 displayableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 ;
-(NSURL *)containingAppBundleURL;
@end


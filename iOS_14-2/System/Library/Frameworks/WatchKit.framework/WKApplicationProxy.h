/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@class NSURL;

@interface WKApplicationProxy : NSObject {

	NSURL* _bundleURL;

}

@property (nonatomic,readonly) NSURL * bundleURL;              //@synthesize bundleURL=_bundleURL - In the implementation block
+(id)watchAppBundleUrlWithContainerUrl:(id)arg1 ;
+(id)gizmoAppBundleUrlWithPluginUrl:(id)arg1 ;
+(id)applicationsForContainerProxy:(id)arg1 ;
-(NSURL *)bundleURL;
-(id)initWithBundleURL:(id)arg1 ;
@end


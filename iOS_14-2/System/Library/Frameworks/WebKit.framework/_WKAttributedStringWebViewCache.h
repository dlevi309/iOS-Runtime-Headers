/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKAttributedStringWebViewCache : NSObject
+(id)cache;
+(id)configuration;
+(void)resetPurgeDelay;
+(void)purgeSingleWebView;
+(RetainPtr<WKWebView>*)retrieveOrCreateWebView;
+(void)cacheWebView:(id)arg1 ;
+(void)purgeAllWebViews;
+(void)clearConfiguration;
@end


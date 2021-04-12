/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKAttributedStringWebViewCache : NSObject
+(id)cache;
+(id)configuration;
+(void)resetPurgeDelay;
+(void)purgeSingleWebView;
+(void)clearConfiguration;
+(RetainPtr<WKWebView>*)retrieveOrCreateWebView;
+(void)cacheWebView:(id)arg1 ;
+(void)purgeAllWebViews;
@end


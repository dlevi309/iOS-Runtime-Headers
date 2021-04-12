/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/SXAppStateMonitor.h>

@interface NewsArticles.ArticleViewerAppStateMonitor : NSObject <SXAppStateMonitor> {

	 onForegroundClosures;
	 onEnterBackgroundClosures;
	 onWindowForegroundClosures;
	 onWindowBackgroundClosures;

}
-(void)performOnApplicationWindowDidBecomeForeground:(/*^block*/id)arg1 ;
-(void)performOnApplicationWillEnterForeground:(/*^block*/id)arg1 ;
-(void)performOnApplicationDidBecomeActive:(/*^block*/id)arg1 ;
-(void)performOnApplicationWindowDidBecomeBackground:(/*^block*/id)arg1 ;
-(void)performOnApplicationDidEnterBackground:(/*^block*/id)arg1 ;
-(id)init;
@end


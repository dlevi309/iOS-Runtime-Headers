/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/SXAppStateMonitor.h>

@interface NewsArticles.ArticleViewerAppStateMonitor : NSObject <SXAppStateMonitor> {

	 onForegroundClosures;
	 onEnterBackgroundClosures;
	 onWindowForegroundClosures;
	 onWindowBackgroundClosures;

}
-(void)performOnApplicationDidEnterBackground:(/*^block*/id)arg1 ;
-(void)performOnApplicationDidBecomeActive:(/*^block*/id)arg1 ;
-(void)performOnApplicationWillEnterForeground:(/*^block*/id)arg1 ;
-(void)performOnApplicationWindowDidBecomeForeground:(/*^block*/id)arg1 ;
-(void)performOnApplicationWindowDidBecomeBackground:(/*^block*/id)arg1 ;
-(id)init;
@end


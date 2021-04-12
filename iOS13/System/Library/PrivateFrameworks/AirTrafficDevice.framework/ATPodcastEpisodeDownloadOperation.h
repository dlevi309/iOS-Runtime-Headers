/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTrafficDevice/ATStoreDownloadOperation.h>

@class ICURLSession, ICURLRequest;

@interface ATPodcastEpisodeDownloadOperation : ATStoreDownloadOperation {

	ICURLSession* _session;
	ICURLRequest* _request;

}
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(id)_urlSession;
-(id)_podcastsAppBundleID;
@end


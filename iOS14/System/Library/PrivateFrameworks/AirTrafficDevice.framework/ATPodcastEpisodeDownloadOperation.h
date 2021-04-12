/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTrafficDevice/ATStoreDownloadOperation.h>

@class ICURLSession, ICURLRequest;

@interface ATPodcastEpisodeDownloadOperation : ATStoreDownloadOperation {

	ICURLSession* _session;
	ICURLRequest* _request;

}
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)cancel;
-(id)_urlSession;
-(id)_podcastsAppBundleID;
@end


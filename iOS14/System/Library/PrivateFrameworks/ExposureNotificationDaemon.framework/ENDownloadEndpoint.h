/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@class ENRegion, NSURL;

@interface ENDownloadEndpoint : NSObject {

	BOOL _enabled;
	double _downloadInterval;
	ENRegion* _region;
	NSURL* _serverBaseURL;
	NSURL* _serverIndexURL;

}

@property (nonatomic,readonly) double downloadInterval;                  //@synthesize downloadInterval=_downloadInterval - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy,readonly) ENRegion * region;                   //@synthesize region=_region - In the implementation block
@property (nonatomic,copy,readonly) NSURL * serverBaseURL;               //@synthesize serverBaseURL=_serverBaseURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * serverIndexURL;              //@synthesize serverIndexURL=_serverIndexURL - In the implementation block
-(BOOL)enabled;
-(ENRegion *)region;
-(NSURL *)serverBaseURL;
-(id)initWithBaseURL:(id)arg1 indexURL:(id)arg2 interval:(double)arg3 enabled:(BOOL)arg4 region:(id)arg5 ;
-(double)downloadInterval;
-(NSURL *)serverIndexURL;
-(id)serverURLForFileWithRelativePath:(id)arg1 ;
@end


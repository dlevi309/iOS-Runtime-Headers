/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/


@class NSObject, NSString, NSURL, NSDictionary, NSXPCConnection;

@interface USVideoUsage : NSObject {

	long long _currentState;
	NSObject* _stateLock;
	BOOL _usageTrusted;
	NSString* _bundleIdentifier;
	NSURL* _URL;
	NSURL* _mediaURL;
	NSDictionary* _videoMetadata;
	NSXPCConnection* _xpcConnection;

}

@property (readonly) NSXPCConnection * xpcConnection;               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (copy) NSDictionary * videoMetadata;                      //@synthesize videoMetadata=_videoMetadata - In the implementation block
@property (readonly) BOOL usageTrusted;                             //@synthesize usageTrusted=_usageTrusted - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (copy,readonly) NSURL * mediaURL;                         //@synthesize mediaURL=_mediaURL - In the implementation block
-(void)restart;
-(NSXPCConnection *)xpcConnection;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setVideoMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)videoMetadata;
-(id)init;
-(NSURL *)mediaURL;
-(NSString *)bundleIdentifier;
-(void)stop;
-(id)description;
-(NSURL *)URL;
-(void)dealloc;
-(BOOL)usageTrusted;
-(void)_usVideoUsageCommonInitWithBundleIdentifier:(id)arg1 URL:(id)arg2 mediaURL:(id)arg3 videoMetadata:(id)arg4 ;
-(void)_startVideoUsage;
-(BOOL)_shouldRecordUsageForVideoWithMetadata:(id)arg1 ;
-(void)_stopVideoUsage;
-(id)initWithBundleIdentifier:(id)arg1 URL:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 URL:(id)arg2 mediaURL:(id)arg3 ;
-(id)initWithBundleIdentifier:(id)arg1 URL:(id)arg2 videoMetadata:(id)arg3 ;
-(id)initWithBundleIdentifier:(id)arg1 URL:(id)arg2 mediaURL:(id)arg3 videoMetadata:(id)arg4 ;
-(void)updateVideoMetadata:(id)arg1 ;
@end


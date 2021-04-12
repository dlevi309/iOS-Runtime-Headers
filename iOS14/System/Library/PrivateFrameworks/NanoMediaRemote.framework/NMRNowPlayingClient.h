/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/


@class NSString;

@interface NMRNowPlayingClient : NSObject {

	void* _mediaRemoteNowPlayingClient;
	NSString* _bundleIdentifier;
	NSString* _displayName;

}

@property (nonatomic,readonly) void* mediaRemoteNowPlayingClient;              //@synthesize mediaRemoteNowPlayingClient=_mediaRemoteNowPlayingClient - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void*)mediaRemoteNowPlayingClient;
-(id)initWithMRNowPlayingClient:(void*)arg1 ;
@end


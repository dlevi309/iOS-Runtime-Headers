/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(void*)mediaRemoteNowPlayingClient;
-(id)initWithMRNowPlayingClient:(void*)arg1 ;
@end


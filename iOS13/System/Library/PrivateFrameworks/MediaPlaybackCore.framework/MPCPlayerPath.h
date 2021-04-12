/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MPAVRoute;

@interface MPCPlayerPath : NSObject <NSCopying, NSSecureCoding> {

	int _pid;
	BOOL _resolved;
	NSString* _bundleID;
	NSString* _playerID;
	void* _mediaRemotePlayerPath;
	NSString* _deviceUID;
	MPAVRoute* _route;

}

@property (nonatomic,readonly) void* mediaRemotePlayerPath;                                //@synthesize mediaRemotePlayerPath=_mediaRemotePlayerPath - In the implementation block
@property (nonatomic,readonly) NSString * deviceUID;                                       //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * representedBundleDisplayName; 
@property (nonatomic,copy,readonly) NSString * representedBundleID; 
@property (nonatomic,readonly) MPAVRoute * route;                                          //@synthesize route=_route - In the implementation block
@property (getter=isSystemMusicPath,nonatomic,readonly) BOOL systemMusicPath; 
@property (getter=isResolved,nonatomic,readonly) BOOL resolved;                            //@synthesize resolved=_resolved - In the implementation block
@property (getter=isFullyResolved,nonatomic,readonly) BOOL fullyResolved; 
@property (nonatomic,readonly) void* origin; 
@property (nonatomic,copy,readonly) NSString * bundleID;                                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerID;                                   //@synthesize playerID=_playerID - In the implementation block
@property (getter=isInProcess,nonatomic,readonly) BOOL inProcess; 
+(BOOL)supportsSecureCoding;
+(id)deviceActivePlayerPath;
+(id)pathWithRoute:(id)arg1 mediaRemotePlayerPath:(void*)arg2 isResolved:(BOOL)arg3 ;
+(id)pathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
+(id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2 ;
+(id)pathWithDeviceUIDs:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
+(id)pathWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
+(id)pathWithCustomOrigin:(void*)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isResolved;
-(NSString *)bundleID;
-(void*)origin;
-(MPAVRoute *)route;
-(NSString *)representedBundleID;
-(NSString *)playerID;
-(NSString *)deviceUID;
-(BOOL)isInProcess;
-(id)pathByAppendingPlayerIDSuffix:(id)arg1 ;
-(id)initWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
-(id)initWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
-(id)initWithRoute:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
-(void)resolveWithRouteResolvedHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isFullyResolved;
-(BOOL)isSystemMusicPath;
-(NSString *)representedBundleDisplayName;
-(void)resolveWithCompletion:(/*^block*/id)arg1 ;
-(void*)mediaRemotePlayerPath;
@end


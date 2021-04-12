/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2 ;
+(id)pathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
+(id)pathWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
+(id)pathWithCustomOrigin:(void*)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
+(id)deviceActivePlayerPath;
+(id)pathWithDeviceUIDs:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
+(id)pathWithRoute:(id)arg1 mediaRemotePlayerPath:(void*)arg2 isResolved:(BOOL)arg3 ;
-(void)resolveWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)playerID;
-(BOOL)isResolved;
-(NSString *)deviceUID;
-(void*)origin;
-(BOOL)isInProcess;
-(MPAVRoute *)route;
-(NSString *)representedBundleID;
-(id)initWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3 ;
-(id)initWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
-(NSString *)representedBundleDisplayName;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isSystemMusicPath;
-(id)description;
-(BOOL)isFullyResolved;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(id)initWithRoute:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)resolveWithRouteResolvedHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)pathByAppendingPlayerIDSuffix:(id)arg1 ;
-(void*)mediaRemotePlayerPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


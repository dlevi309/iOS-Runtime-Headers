/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray;

@interface MPCAssistantRemoteControlDestination : NSObject <NSMutableCopying> {

	NSString* _appBundleID;
	NSString* _playerID;
	void* _origin;
	NSArray* _outputDeviceUIDs;
	NSArray* _hashedOutputDeviceUIDs;
	NSArray* _outputGroups;
	NSString* _outputGroupID;
	BOOL _singleGroup;

}

@property (nonatomic,readonly) NSString * appBundleID;                        //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,readonly) NSString * playerID;                           //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,readonly) void* origin;                                  //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NSArray * outputDeviceUIDs;                    //@synthesize outputDeviceUIDs=_outputDeviceUIDs - In the implementation block
@property (nonatomic,readonly) NSArray * hashedOutputDeviceUIDs;              //@synthesize hashedOutputDeviceUIDs=_hashedOutputDeviceUIDs - In the implementation block
@property (nonatomic,readonly) NSArray * outputGroups;                        //@synthesize outputGroups=_outputGroups - In the implementation block
@property (nonatomic,readonly) NSString * outputGroupID;                      //@synthesize outputGroupID=_outputGroupID - In the implementation block
@property (nonatomic,readonly) BOOL singleGroup;                              //@synthesize singleGroup=_singleGroup - In the implementation block
+(id)systemMediaApplicationDestination;
+(id)watchRadioApplicationDestination;
+(id)podcastsApplicationDestination;
+(id)iBooksApplicationDestination;
+(id)nowPlayingApplicationDestination;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)appBundleID;
-(void*)origin;
-(NSString *)playerID;
-(NSArray *)outputDeviceUIDs;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(void*)createPlayerPath;
-(BOOL)singleGroup;
-(NSArray *)outputGroups;
-(id)initWithAppBundleID:(id)arg1 ;
-(id)initWithAppBundleID:(id)arg1 playerID:(id)arg2 origin:(void*)arg3 ;
-(void)resolveWithHashedRouteIdentifiers:(id)arg1 audioRoutingInfo:(SCD_Struct_MP6)arg2 completion:(/*^block*/id)arg3 ;
-(void)resolveWithQueue:(id)arg1 hashedRouteIdentifiers:(id)arg2 localPlaybackPermitted:(BOOL)arg3 audioRoutingInfo:(SCD_Struct_MP6)arg4 completion:(/*^block*/id)arg5 ;
-(void)resolveWithRouteIdentifiers:(id)arg1 audioRoutingInfo:(SCD_Struct_MP6)arg2 completion:(/*^block*/id)arg3 ;
-(void)resolveWithQueue:(id)arg1 routeIdentifiers:(id)arg2 localPlaybackPermitted:(BOOL)arg3 audioRoutingInfo:(SCD_Struct_MP6)arg4 completion:(/*^block*/id)arg5 ;
-(void)resolveWithHashedRouteIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveWithRouteIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveWithQueue:(id)arg1 hashedRouteIdentifiers:(id)arg2 localPlaybackPermitted:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)resolveWithQueue:(id)arg1 routeIdentifiers:(id)arg2 localPlaybackPermitted:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_getCompanionOrigin:(/*^block*/id)arg1 ;
-(NSArray *)hashedOutputDeviceUIDs;
-(NSString *)outputGroupID;
@end


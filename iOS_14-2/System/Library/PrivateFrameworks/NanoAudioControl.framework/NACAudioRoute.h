/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@class NSString;

@interface NACAudioRoute : NSObject {

	BOOL _supportsVolumeControl;
	BOOL _picked;
	NSString* _uniqueIdentifier;
	NSString* _routeName;
	long long _routeType;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * routeName;                     //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,readonly) long long routeType;                      //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) BOOL supportsVolumeControl;               //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (getter=isPicked,nonatomic,readonly) BOOL picked;              //@synthesize picked=_picked - In the implementation block
+(id)audioRouteWithMPAVRoute:(id)arg1 ;
+(id)buffersFromAudioRoutes:(id)arg1 ;
+(id)audioRoutesFromBuffers:(id)arg1 ;
+(long long)_routeTypeFromMPAVRoute:(id)arg1 ;
+(long long)_routeTypeFromRouteBufferType:(int)arg1 ;
+(id)audioRouteFromBuffer:(id)arg1 ;
+(int)_routeBufferTypeFromRouteType:(long long)arg1 ;
-(NSString *)routeName;
-(long long)routeType;
-(NSString *)uniqueIdentifier;
-(BOOL)isPicked;
-(id)description;
-(BOOL)supportsVolumeControl;
-(id)buffer;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToAudioRoute:(id)arg1 ;
-(void)setSupportsVolumeControl:(BOOL)arg1 ;
-(id)initWithMPAVRoute:(id)arg1 ;
@end


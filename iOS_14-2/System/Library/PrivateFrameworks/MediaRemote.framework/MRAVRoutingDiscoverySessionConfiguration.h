/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MRAVRoutingDiscoverySessionConfiguration : NSObject <NSCopying> {

	BOOL _enableThrottling;
	BOOL _alwaysAllowUpdates;
	BOOL _populatesExternalDevice;
	unsigned _features;
	NSString* _routingContextUID;

}

@property (assign,nonatomic) BOOL populatesExternalDevice;              //@synthesize populatesExternalDevice=_populatesExternalDevice - In the implementation block
@property (nonatomic,readonly) unsigned features;                       //@synthesize features=_features - In the implementation block
@property (nonatomic,copy) NSString * routingContextUID;                //@synthesize routingContextUID=_routingContextUID - In the implementation block
@property (assign,nonatomic) BOOL enableThrottling;                     //@synthesize enableThrottling=_enableThrottling - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowUpdates;                   //@synthesize alwaysAllowUpdates=_alwaysAllowUpdates - In the implementation block
+(id)configurationWithEndpointFeatures:(unsigned)arg1 ;
-(void)setPopulatesExternalDevice:(BOOL)arg1 ;
-(void)setAlwaysAllowUpdates:(BOOL)arg1 ;
-(void)setEnableThrottling:(BOOL)arg1 ;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(NSString *)routingContextUID;
-(BOOL)populatesExternalDevice;
-(BOOL)alwaysAllowUpdates;
-(unsigned)features;
-(id)initWithEndpointFeatures:(unsigned)arg1 ;
-(BOOL)enableThrottling;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


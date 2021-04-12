/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString;

@interface MRAVOutputDeviceSourceInfo : NSObject {

	BOOL _multipleBuiltInDevices;
	NSString* _routingContextUID;

}

@property (nonatomic,readonly) NSString * routingContextUID;              //@synthesize routingContextUID=_routingContextUID - In the implementation block
@property (nonatomic,readonly) BOOL multipleBuiltInDevices;               //@synthesize multipleBuiltInDevices=_multipleBuiltInDevices - In the implementation block
-(NSString *)routingContextUID;
-(id)initWithRoutingContextUID:(id)arg1 multipleBuiltInDevices:(BOOL)arg2 ;
-(BOOL)multipleBuiltInDevices;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
@end


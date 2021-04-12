/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString;

@interface MRAVOutputDeviceSourceInfo : NSObject {

	BOOL _multipleBuiltInDevices;
	NSString* _routingContextUID;

}

@property (nonatomic,readonly) NSString * routingContextUID;              //@synthesize routingContextUID=_routingContextUID - In the implementation block
@property (nonatomic,readonly) BOOL multipleBuiltInDevices;               //@synthesize multipleBuiltInDevices=_multipleBuiltInDevices - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)routingContextUID;
-(BOOL)multipleBuiltInDevices;
-(id)initWithRoutingContextUID:(id)arg1 multipleBuiltInDevices:(BOOL)arg2 ;
@end


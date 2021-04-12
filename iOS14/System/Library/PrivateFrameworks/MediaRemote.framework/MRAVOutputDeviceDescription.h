/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVOutputDeviceDescription : NSObject {

	unsigned _deviceType;
	unsigned _deviceSubtype;
	NSString* _uid;

}

@property (nonatomic,readonly) _MRAVOutputDeviceDescriptorProtobuf * descriptor; 
@property (nonatomic,readonly) unsigned deviceType;                                           //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) unsigned deviceSubtype;                                        //@synthesize deviceSubtype=_deviceSubtype - In the implementation block
@property (nonatomic,readonly) NSString * uid;                                                //@synthesize uid=_uid - In the implementation block
-(unsigned)deviceType;
-(NSString *)uid;
-(unsigned)deviceSubtype;
-(_MRAVOutputDeviceDescriptorProtobuf *)descriptor;
-(id)initWithDeviceType:(unsigned)arg1 deviceSubtype:(unsigned)arg2 uid:(id)arg3 ;
@end


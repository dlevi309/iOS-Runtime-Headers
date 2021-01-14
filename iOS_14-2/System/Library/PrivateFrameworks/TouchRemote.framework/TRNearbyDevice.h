/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


@class SFDevice, NSUUID;

@interface TRNearbyDevice : NSObject {

	unsigned long long _supportedService;
	SFDevice* _representedDevice;

}

@property (assign,nonatomic) unsigned long long supportedService;              //@synthesize supportedService=_supportedService - In the implementation block
@property (nonatomic,readonly) SFDevice * representedDevice;                   //@synthesize representedDevice=_representedDevice - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier; 
-(id)init;
-(id)description;
-(id)initWithRepresentedDevice:(id)arg1 supportedService:(unsigned long long)arg2 ;
-(NSUUID *)identifier;
-(SFDevice *)representedDevice;
-(unsigned long long)supportedService;
-(void)setSupportedService:(unsigned long long)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSUUID *)identifier;
-(id)initWithRepresentedDevice:(id)arg1 supportedService:(unsigned long long)arg2 ;
-(SFDevice *)representedDevice;
-(unsigned long long)supportedService;
-(void)setSupportedService:(unsigned long long)arg1 ;
@end


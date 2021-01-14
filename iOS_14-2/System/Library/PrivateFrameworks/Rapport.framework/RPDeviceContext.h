/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@class RPDevice, RPLegacyDeviceDiscovery, RPLegacySession;

@interface RPDeviceContext : NSObject {

	BOOL _reported;
	int _state;
	RPDevice* _device;
	RPLegacyDeviceDiscovery* _discovery;
	RPLegacySession* _session;

}

@property (nonatomic,retain) RPDevice * device;                                //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) RPLegacyDeviceDiscovery * discovery;              //@synthesize discovery=_discovery - In the implementation block
@property (assign,nonatomic) BOOL reported;                                    //@synthesize reported=_reported - In the implementation block
@property (nonatomic,retain) RPLegacySession * session;                        //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) int state;                                        //@synthesize state=_state - In the implementation block
-(BOOL)reported;
-(RPLegacySession *)session;
-(RPDevice *)device;
-(void)setDiscovery:(RPLegacyDeviceDiscovery *)arg1 ;
-(void)setSession:(RPLegacySession *)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)invalidate;
-(void)setDevice:(RPDevice *)arg1 ;
-(RPLegacyDeviceDiscovery *)discovery;
-(void)setReported:(BOOL)arg1 ;
-(void)pairVerify;
-(void)systemInfoResponse:(id)arg1 error:(id)arg2 ;
@end


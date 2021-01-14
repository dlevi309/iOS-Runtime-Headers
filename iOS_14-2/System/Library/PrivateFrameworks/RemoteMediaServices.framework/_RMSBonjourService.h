/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@class RMSService, NSNetService;

@interface _RMSBonjourService : NSObject {

	BOOL _available;
	RMSService* _service;
	NSNetService* _netService;
	long long _state;

}

@property (nonatomic,retain) RMSService * service;                           //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSNetService * netService;                      //@synthesize netService=_netService - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(NSNetService *)netService;
-(void)setNetService:(NSNetService *)arg1 ;
-(void)setService:(RMSService *)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(RMSService *)service;
@end


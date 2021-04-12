/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)state;
-(void)setState:(long long)arg1 ;
-(BOOL)isAvailable;
-(void)setAvailable:(BOOL)arg1 ;
-(RMSService *)service;
-(void)setService:(RMSService *)arg1 ;
-(NSNetService *)netService;
-(void)setNetService:(NSNetService *)arg1 ;
@end


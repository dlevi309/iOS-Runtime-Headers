/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@interface NRConnectivitySubscriber : NSObject {

	BOOL _connected;
	unsigned long long _dropoutCounter;

}

@property (assign,nonatomic) BOOL connected;                                 //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) unsigned long long dropoutCounter;              //@synthesize dropoutCounter=_dropoutCounter - In the implementation block
+(BOOL)getDropoutCounter:(unsigned long long*)arg1 ;
-(id)init;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(void)_readConnectivityStatus;
-(unsigned long long)dropoutCounter;
-(void)setDropoutCounter:(unsigned long long)arg1 ;
@end


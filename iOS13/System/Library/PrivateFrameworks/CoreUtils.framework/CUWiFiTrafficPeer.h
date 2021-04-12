/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSString;

@interface CUWiFiTrafficPeer : NSObject {

	BOOL _active;
	unsigned _trafficFlags;
	NSString* _sessionID;
	SCD_Union_CU21 _peerIP;

}

@property (assign,nonatomic) BOOL active;                                   //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* peerIP;              //@synthesize peerIP=_peerIP - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned trafficFlags;                         //@synthesize trafficFlags=_trafficFlags - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(NSString *)sessionID;
-(BOOL)active;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setTrafficFlags:(unsigned)arg1 ;
-(unsigned)trafficFlags;
-(void)setPeerIP:(/*function pointer*/void*)arg1 ;
-(id)peerMACAddressData;
-(/*function pointer*/void*)peerIP;
@end


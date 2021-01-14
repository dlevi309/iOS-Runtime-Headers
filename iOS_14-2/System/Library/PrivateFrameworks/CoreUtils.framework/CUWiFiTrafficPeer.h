/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSString;

@interface CUWiFiTrafficPeer : NSObject {

	BOOL _active;
	unsigned _trafficFlags;
	NSString* _sessionID;
	SCD_Union_CU22 _peerIP;

}

@property (assign,nonatomic) BOOL active;                                   //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* peerIP;              //@synthesize peerIP=_peerIP - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned trafficFlags;                         //@synthesize trafficFlags=_trafficFlags - In the implementation block
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(/*function pointer*/void*)peerIP;
-(void)setPeerIP:(/*function pointer*/void*)arg1 ;
-(void)setTrafficFlags:(unsigned)arg1 ;
-(unsigned)trafficFlags;
-(id)peerMACAddressData;
@end


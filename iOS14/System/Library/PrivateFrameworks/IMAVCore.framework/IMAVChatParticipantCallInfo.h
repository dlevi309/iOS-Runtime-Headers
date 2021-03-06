/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/


@class NSDictionary, NSData, NSString, NSNumber;

@interface IMAVChatParticipantCallInfo : NSObject {

	NSDictionary* _relayInitiate;
	NSDictionary* _relayUpdate;
	NSDictionary* _relayCancel;
	NSData* _remoteNATIP;
	NSData* _localNATIP;
	NSData* _remoteICEData;
	NSData* _localICEData;
	NSString* _peerCN;
	NSNumber* _localNATType;
	NSNumber* _remoteNATType;
	NSNumber* _peerProtocolVersion;
	unsigned _callID;
	long long _state;
	BOOL _isBeingHandedOff;
	BOOL _isAudioPaused;
	BOOL _isVideoPaused;
	BOOL _isReinitiate;
	unsigned long long _localConnectionType;
	unsigned long long _remoteConnectionType;
	BOOL _inviteNeedsDelivery;
	NSData* _localSKEData;
	NSData* _remoteSKEData;

}

@property (assign,nonatomic) unsigned callID;                                      //@synthesize callID=_callID - In the implementation block
@property (assign,nonatomic) long long state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSData * remoteNATIP;                                 //@synthesize remoteNATIP=_remoteNATIP - In the implementation block
@property (nonatomic,retain) NSData * localNATIP;                                  //@synthesize localNATIP=_localNATIP - In the implementation block
@property (nonatomic,retain) NSData * localSKEData;                                //@synthesize localSKEData=_localSKEData - In the implementation block
@property (nonatomic,retain) NSData * remoteSKEData;                               //@synthesize remoteSKEData=_remoteSKEData - In the implementation block
@property (nonatomic,retain) NSData * remoteICEData;                               //@synthesize remoteICEData=_remoteICEData - In the implementation block
@property (nonatomic,retain) NSData * localICEData;                                //@synthesize localICEData=_localICEData - In the implementation block
@property (nonatomic,retain) NSNumber * remoteNATType;                             //@synthesize remoteNATType=_remoteNATType - In the implementation block
@property (nonatomic,retain) NSNumber * localNATType;                              //@synthesize localNATType=_localNATType - In the implementation block
@property (nonatomic,retain) NSString * peerCN;                                    //@synthesize peerCN=_peerCN - In the implementation block
@property (nonatomic,retain) NSNumber * peerProtocolVersion;                       //@synthesize peerProtocolVersion=_peerProtocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL isFinished; 
@property (assign,nonatomic) BOOL isBeingHandedOff;                                //@synthesize isBeingHandedOff=_isBeingHandedOff - In the implementation block
@property (assign,nonatomic) BOOL isReinitiate;                                    //@synthesize isReinitiate=_isReinitiate - In the implementation block
@property (assign,nonatomic) BOOL inviteNeedsDelivery;                             //@synthesize inviteNeedsDelivery=_inviteNeedsDelivery - In the implementation block
@property (nonatomic,readonly) BOOL isAudioPaused;                                 //@synthesize isAudioPaused=_isAudioPaused - In the implementation block
@property (assign,nonatomic) BOOL isVideoPaused;                                   //@synthesize isVideoPaused=_isVideoPaused - In the implementation block
@property (nonatomic,retain) NSDictionary * relayInitiate;                         //@synthesize relayInitiate=_relayInitiate - In the implementation block
@property (nonatomic,retain) NSDictionary * relayUpdate;                           //@synthesize relayUpdate=_relayUpdate - In the implementation block
@property (nonatomic,retain) NSDictionary * relayCancel;                           //@synthesize relayCancel=_relayCancel - In the implementation block
@property (assign,nonatomic) unsigned long long localConnectionType;               //@synthesize localConnectionType=_localConnectionType - In the implementation block
@property (assign,nonatomic) unsigned long long remoteConnectionType;              //@synthesize remoteConnectionType=_remoteConnectionType - In the implementation block
-(unsigned)callID;
-(void)setCallID:(unsigned)arg1 ;
-(id)init;
-(unsigned long long)remoteConnectionType;
-(BOOL)isFinished;
-(NSString *)peerCN;
-(id)description;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(NSNumber *)remoteNATType;
-(void)dealloc;
-(BOOL)isVideoPaused;
-(BOOL)isAudioPaused;
-(void)setIsVideoPaused:(BOOL)arg1 ;
-(unsigned long long)localConnectionType;
-(void)setPeerProtocolVersion:(NSNumber *)arg1 ;
-(void)setPeerCN:(NSString *)arg1 ;
-(void)setIsReinitiate:(BOOL)arg1 ;
-(BOOL)isBeingHandedOff;
-(NSData *)remoteICEData;
-(NSData *)localICEData;
-(void)setRemoteICEData:(NSData *)arg1 ;
-(void)setRemoteNATType:(NSNumber *)arg1 ;
-(void)setRemoteNATIP:(NSData *)arg1 ;
-(void)setRemoteSKEData:(NSData *)arg1 ;
-(void)setRelayInitiate:(NSDictionary *)arg1 ;
-(void)setIsBeingHandedOff:(BOOL)arg1 ;
-(BOOL)inviteNeedsDelivery;
-(void)setInviteNeedsDelivery:(BOOL)arg1 ;
-(BOOL)isReinitiate;
-(NSData *)localNATIP;
-(NSNumber *)localNATType;
-(NSData *)localSKEData;
-(NSData *)remoteNATIP;
-(void)setRelayUpdate:(NSDictionary *)arg1 ;
-(void)setRelayCancel:(NSDictionary *)arg1 ;
-(void)setLocalNATType:(NSNumber *)arg1 ;
-(void)setLocalNATIP:(NSData *)arg1 ;
-(void)setLocalSKEData:(NSData *)arg1 ;
-(void)setLocalICEData:(NSData *)arg1 ;
-(NSDictionary *)relayInitiate;
-(NSDictionary *)relayUpdate;
-(NSDictionary *)relayCancel;
-(NSData *)remoteSKEData;
-(NSNumber *)peerProtocolVersion;
-(void)setLocalConnectionType:(unsigned long long)arg1 ;
-(void)setRemoteConnectionType:(unsigned long long)arg1 ;
@end


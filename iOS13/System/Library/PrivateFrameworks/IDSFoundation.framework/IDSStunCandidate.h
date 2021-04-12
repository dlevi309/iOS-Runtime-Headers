/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@interface IDSStunCandidate : NSObject {

	BOOL _active;
	unsigned long long _type;
	unsigned long long _priority;
	long long _transport;
	int _index;
	sockaddr_storage _address;
	sockaddr_storage _external;
	SCD_Struct_ID22 _prefix;
	unsigned _radioAccessTechnology;
	unsigned _mtu;
	double _extIPDetectionStartTime;
	unsigned short _remoteLinkFlags;

}

@property (assign,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long transport;                       //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) int index;                                 //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) const sockaddr* address; 
@property (assign,nonatomic) sockaddr* external; 
@property (assign,nonatomic) SCD_Struct_ID22* prefix; 
@property (assign,nonatomic) unsigned radioAccessTechnology;              //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mtu;                                //@synthesize mtu=_mtu - In the implementation block
@property (assign,nonatomic) double extIPDetectionStartTime;              //@synthesize extIPDetectionStartTime=_extIPDetectionStartTime - In the implementation block
@property (assign,nonatomic) unsigned short remoteLinkFlags;              //@synthesize remoteLinkFlags=_remoteLinkFlags - In the implementation block
+(id)candidateWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned)arg3 mtu:(unsigned)arg4 index:(int)arg5 address:(sockaddr*)arg6 external:(sockaddr*)arg7 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(int)index;
-(const sockaddr*)address;
-(void)setActive:(BOOL)arg1 ;
-(unsigned long long)priority;
-(long long)transport;
-(sockaddr*)external;
-(BOOL)active;
-(SCD_Struct_ID22*)prefix;
-(void)setPrefix:(SCD_Struct_ID22*)arg1 ;
-(unsigned)radioAccessTechnology;
-(unsigned)mtu;
-(void)setMtu:(unsigned)arg1 ;
-(unsigned short)remoteLinkFlags;
-(BOOL)isCellularStunCandidate;
-(void)setExternal:(sockaddr*)arg1 ;
-(void)updateTransport:(long long)arg1 ;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(void)setRemoteLinkFlags:(unsigned short)arg1 ;
-(BOOL)isCompatibleWithStunCandidate:(id)arg1 ;
-(BOOL)hasNATIPv4Address;
-(BOOL)hasNATIPv4External;
-(BOOL)isLinkLocalStunCandidate;
-(BOOL)isSameNetworkType:(id)arg1 ;
-(BOOL)isRelayStunCandidate;
-(void)setExtIPDetectionStartTime:(double)arg1 ;
-(double)extIPDetectionStartTime;
-(id)initWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned)arg3 mtu:(unsigned)arg4 index:(int)arg5 address:(sockaddr*)arg6 external:(sockaddr*)arg7 ;
-(BOOL)isServerReflexiveStunCandidate;
@end


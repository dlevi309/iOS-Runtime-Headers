/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSString;

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
	unsigned _dataSoMasks;
	NSString* _allocbindDataBlob;
	unsigned short _remoteLinkFlags;
	unsigned _dataSoMask;

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
@property (assign,nonatomic) unsigned dataSoMask;                         //@synthesize dataSoMask=_dataSoMask - In the implementation block
@property (nonatomic,copy) NSString * allocbindDataBlob;                  //@synthesize allocbindDataBlob=_allocbindDataBlob - In the implementation block
+(id)candidateWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned)arg3 mtu:(unsigned)arg4 index:(int)arg5 address:(sockaddr*)arg6 external:(sockaddr*)arg7 ;
-(unsigned)mtu;
-(int)index;
-(SCD_Struct_ID22*)prefix;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(long long)transport;
-(unsigned short)remoteLinkFlags;
-(sockaddr*)external;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(void)setMtu:(unsigned)arg1 ;
-(id)description;
-(const sockaddr*)address;
-(unsigned)dataSoMask;
-(unsigned long long)type;
-(unsigned)radioAccessTechnology;
-(void)setPrefix:(SCD_Struct_ID22*)arg1 ;
-(BOOL)isCellularStunCandidate;
-(void)setExternal:(sockaddr*)arg1 ;
-(void)setAllocbindDataBlob:(NSString *)arg1 ;
-(double)extIPDetectionStartTime;
-(void)setExtIPDetectionStartTime:(double)arg1 ;
-(BOOL)isServerReflexiveStunCandidate;
-(NSString *)allocbindDataBlob;
-(id)initWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned)arg3 mtu:(unsigned)arg4 index:(int)arg5 address:(sockaddr*)arg6 external:(sockaddr*)arg7 ;
-(void)updateTransport:(long long)arg1 ;
-(void)setRemoteLinkFlags:(unsigned short)arg1 ;
-(void)setDataSoMask:(unsigned)arg1 ;
-(BOOL)isCompatibleWithStunCandidate:(id)arg1 ;
-(BOOL)hasNATIPv4Address;
-(BOOL)hasNATIPv4External;
-(BOOL)isLinkLocalStunCandidate;
-(unsigned long long)priority;
-(BOOL)isSameNetworkType:(id)arg1 ;
-(BOOL)isRelayStunCandidate;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


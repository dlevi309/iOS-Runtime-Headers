/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface NPUsageReport : NSObject <NSSecureCoding> {

	unsigned char _addressFamily;
	unsigned _edgeIndex;
	unsigned _keybagGeneration;
	unsigned _waldoTimestamp;
	NSString* _signingIdentifier;
	long long _fallbackReason;
	NSUUID* _dayPassUUID;
	unsigned long long _rtt;
	NSString* _geohash;

}

@property (nonatomic,readonly) NSString * signingIdentifier;              //@synthesize signingIdentifier=_signingIdentifier - In the implementation block
@property (nonatomic,readonly) long long fallbackReason;                  //@synthesize fallbackReason=_fallbackReason - In the implementation block
@property (nonatomic,retain) NSUUID * dayPassUUID;                        //@synthesize dayPassUUID=_dayPassUUID - In the implementation block
@property (assign,nonatomic) unsigned long long rtt;                      //@synthesize rtt=_rtt - In the implementation block
@property (nonatomic,retain) NSString * geohash;                          //@synthesize geohash=_geohash - In the implementation block
@property (assign,nonatomic) unsigned char addressFamily;                 //@synthesize addressFamily=_addressFamily - In the implementation block
@property (assign,nonatomic) unsigned edgeIndex;                          //@synthesize edgeIndex=_edgeIndex - In the implementation block
@property (assign,nonatomic) unsigned keybagGeneration;                   //@synthesize keybagGeneration=_keybagGeneration - In the implementation block
@property (assign,nonatomic) unsigned waldoTimestamp;                     //@synthesize waldoTimestamp=_waldoTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)rtt;
-(NSString *)signingIdentifier;
-(long long)fallbackReason;
-(NSUUID *)dayPassUUID;
-(void)setDayPassUUID:(NSUUID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEdgeIndex:(unsigned)arg1 ;
-(void)setAddressFamily:(unsigned char)arg1 ;
-(unsigned)edgeIndex;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)addressFamily;
-(void)setRtt:(unsigned long long)arg1 ;
-(NSString *)geohash;
-(id)initWithSigningIdentifier:(id)arg1 fallbackReason:(long long)arg2 ;
-(void)setGeohash:(NSString *)arg1 ;
-(unsigned)keybagGeneration;
-(void)setKeybagGeneration:(unsigned)arg1 ;
-(unsigned)waldoTimestamp;
-(void)setWaldoTimestamp:(unsigned)arg1 ;
@end


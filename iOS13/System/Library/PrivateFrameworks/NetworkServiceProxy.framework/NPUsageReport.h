/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)addressFamily;
-(void)setAddressFamily:(unsigned char)arg1 ;
-(unsigned long long)rtt;
-(long long)fallbackReason;
-(NSString *)signingIdentifier;
-(id)initWithSigningIdentifier:(id)arg1 fallbackReason:(long long)arg2 ;
-(NSUUID *)dayPassUUID;
-(void)setDayPassUUID:(NSUUID *)arg1 ;
-(void)setRtt:(unsigned long long)arg1 ;
-(NSString *)geohash;
-(void)setGeohash:(NSString *)arg1 ;
-(unsigned)edgeIndex;
-(void)setEdgeIndex:(unsigned)arg1 ;
-(unsigned)keybagGeneration;
-(void)setKeybagGeneration:(unsigned)arg1 ;
-(unsigned)waldoTimestamp;
-(void)setWaldoTimestamp:(unsigned)arg1 ;
@end


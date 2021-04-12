/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNanoPhoneIncomingCallConnected : PBCodable <NSCopying> {

	unsigned long long _connectingMs;
	unsigned long long _timestamp;
	NSString* _callProviderIdentifier;
	BOOL _isHosted;
	BOOL _isVideo;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectingMs; 
@property (assign,nonatomic) unsigned long long connectingMs;                //@synthesize connectingMs=_connectingMs - In the implementation block
@property (nonatomic,readonly) BOOL hasCallProviderIdentifier; 
@property (nonatomic,retain) NSString * callProviderIdentifier;              //@synthesize callProviderIdentifier=_callProviderIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) BOOL isVideo;                                   //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL hasIsHosted; 
@property (assign,nonatomic) BOOL isHosted;                                  //@synthesize isHosted=_isHosted - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isVideo;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(BOOL)isHosted;
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasIsVideo;
-(void)setCallProviderIdentifier:(NSString *)arg1 ;
-(void)setConnectingMs:(unsigned long long)arg1 ;
-(void)setHasConnectingMs:(BOOL)arg1 ;
-(BOOL)hasConnectingMs;
-(BOOL)hasCallProviderIdentifier;
-(void)setIsHosted:(BOOL)arg1 ;
-(void)setHasIsHosted:(BOOL)arg1 ;
-(BOOL)hasIsHosted;
-(unsigned long long)connectingMs;
-(NSString *)callProviderIdentifier;
@end


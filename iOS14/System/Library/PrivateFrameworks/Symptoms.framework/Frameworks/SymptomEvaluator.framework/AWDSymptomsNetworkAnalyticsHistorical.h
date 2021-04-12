/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkAnalyticsHistorical : PBCodable <NSCopying> {

	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _connAttempts;
	unsigned long long _connSuccess;
	unsigned long long _dnsCompleteFailures;
	unsigned long long _dnsPartialFailures;
	unsigned long long _epochs;
	unsigned long long _faultyStaySecs;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _secsSinceLastTrimmed;
	unsigned long long _timestamp;
	unsigned long long _totalStaySecs;
	NSString* _identifier;
	int _networkType;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                      //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasEpochs; 
@property (assign,nonatomic) unsigned long long epochs;                            //@synthesize epochs=_epochs - In the implementation block
@property (assign,nonatomic) BOOL hasTotalStaySecs; 
@property (assign,nonatomic) unsigned long long totalStaySecs;                     //@synthesize totalStaySecs=_totalStaySecs - In the implementation block
@property (assign,nonatomic) BOOL hasFaultyStaySecs; 
@property (assign,nonatomic) unsigned long long faultyStaySecs;                    //@synthesize faultyStaySecs=_faultyStaySecs - In the implementation block
@property (assign,nonatomic) BOOL hasConnAttempts; 
@property (assign,nonatomic) unsigned long long connAttempts;                      //@synthesize connAttempts=_connAttempts - In the implementation block
@property (assign,nonatomic) BOOL hasConnSuccess; 
@property (assign,nonatomic) unsigned long long connSuccess;                       //@synthesize connSuccess=_connSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                         //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                        //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                           //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                          //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasSecsSinceLastTrimmed; 
@property (assign,nonatomic) unsigned long long secsSinceLastTrimmed;              //@synthesize secsSinceLastTrimmed=_secsSinceLastTrimmed - In the implementation block
@property (assign,nonatomic) BOOL hasDnsPartialFailures; 
@property (assign,nonatomic) unsigned long long dnsPartialFailures;                //@synthesize dnsPartialFailures=_dnsPartialFailures - In the implementation block
@property (assign,nonatomic) BOOL hasDnsCompleteFailures; 
@property (assign,nonatomic) unsigned long long dnsCompleteFailures;               //@synthesize dnsCompleteFailures=_dnsCompleteFailures - In the implementation block
-(void)setBytesOut:(unsigned long long)arg1 ;
-(unsigned long long)connAttempts;
-(int)networkType;
-(BOOL)hasPacketsOut;
-(void)setNetworkType:(int)arg1 ;
-(unsigned long long)bytesOut;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(BOOL)hasBytesIn;
-(BOOL)hasBytesOut;
-(id)dictionaryRepresentation;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(BOOL)arg1 ;
-(unsigned long long)packetsOut;
-(unsigned long long)bytesIn;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned long long)packetsIn;
-(unsigned long long)timestamp;
-(void)setHasPacketsIn:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasConnSuccess:(BOOL)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(id)description;
-(void)setHasConnAttempts:(BOOL)arg1 ;
-(void)setHasBytesOut:(BOOL)arg1 ;
-(unsigned long long)epochs;
-(id)networkTypeAsString:(int)arg1 ;
-(BOOL)hasConnSuccess;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasConnAttempts;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)connSuccess;
-(void)setConnAttempts:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(void)setConnSuccess:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEpochs:(unsigned long long)arg1 ;
-(BOOL)hasPacketsIn;
-(void)setHasEpochs:(BOOL)arg1 ;
-(BOOL)hasEpochs;
-(void)setTotalStaySecs:(unsigned long long)arg1 ;
-(void)setHasTotalStaySecs:(BOOL)arg1 ;
-(BOOL)hasTotalStaySecs;
-(void)setFaultyStaySecs:(unsigned long long)arg1 ;
-(void)setHasFaultyStaySecs:(BOOL)arg1 ;
-(BOOL)hasFaultyStaySecs;
-(void)setSecsSinceLastTrimmed:(unsigned long long)arg1 ;
-(void)setHasSecsSinceLastTrimmed:(BOOL)arg1 ;
-(BOOL)hasSecsSinceLastTrimmed;
-(void)setDnsPartialFailures:(unsigned long long)arg1 ;
-(void)setHasDnsPartialFailures:(BOOL)arg1 ;
-(BOOL)hasDnsPartialFailures;
-(void)setDnsCompleteFailures:(unsigned long long)arg1 ;
-(void)setHasDnsCompleteFailures:(BOOL)arg1 ;
-(BOOL)hasDnsCompleteFailures;
-(unsigned long long)totalStaySecs;
-(unsigned long long)faultyStaySecs;
-(unsigned long long)secsSinceLastTrimmed;
-(unsigned long long)dnsPartialFailures;
-(unsigned long long)dnsCompleteFailures;
@end


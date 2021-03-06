/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNetworkServiceProxyProbeStatistics : PBCodable <NSCopying> {

	unsigned long long _alternateProbeTimeMsecs;
	unsigned long long _genericDNSProbeTimeMsecs;
	unsigned long long _genericProbeTimeMsecs;
	unsigned long long _timestamp;
	int _interfaceType;
	NSString* _label;
	int _protocolType;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceType; 
@property (assign,nonatomic) int interfaceType;                                        //@synthesize interfaceType=_interfaceType - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasAlternateProbeTimeMsecs; 
@property (assign,nonatomic) unsigned long long alternateProbeTimeMsecs;               //@synthesize alternateProbeTimeMsecs=_alternateProbeTimeMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasGenericProbeTimeMsecs; 
@property (assign,nonatomic) unsigned long long genericProbeTimeMsecs;                 //@synthesize genericProbeTimeMsecs=_genericProbeTimeMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasGenericDNSProbeTimeMsecs; 
@property (assign,nonatomic) unsigned long long genericDNSProbeTimeMsecs;              //@synthesize genericDNSProbeTimeMsecs=_genericDNSProbeTimeMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolType; 
@property (assign,nonatomic) int protocolType;                                         //@synthesize protocolType=_protocolType - In the implementation block
-(id)dictionaryRepresentation;
-(int)interfaceType;
-(BOOL)hasLabel;
-(unsigned long long)timestamp;
-(int)protocolType;
-(void)setProtocolType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)StringAsInterfaceType:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setInterfaceType:(int)arg1 ;
-(id)interfaceTypeAsString:(int)arg1 ;
-(BOOL)hasInterfaceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasProtocolType:(BOOL)arg1 ;
-(BOOL)hasProtocolType;
-(id)protocolTypeAsString:(int)arg1 ;
-(int)StringAsProtocolType:(id)arg1 ;
-(void)setAlternateProbeTimeMsecs:(unsigned long long)arg1 ;
-(void)setHasAlternateProbeTimeMsecs:(BOOL)arg1 ;
-(BOOL)hasAlternateProbeTimeMsecs;
-(void)setGenericProbeTimeMsecs:(unsigned long long)arg1 ;
-(void)setHasGenericProbeTimeMsecs:(BOOL)arg1 ;
-(BOOL)hasGenericProbeTimeMsecs;
-(void)setGenericDNSProbeTimeMsecs:(unsigned long long)arg1 ;
-(void)setHasGenericDNSProbeTimeMsecs:(BOOL)arg1 ;
-(BOOL)hasGenericDNSProbeTimeMsecs;
-(unsigned long long)alternateProbeTimeMsecs;
-(unsigned long long)genericProbeTimeMsecs;
-(unsigned long long)genericDNSProbeTimeMsecs;
@end


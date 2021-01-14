/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariSafeBrowsingWarningShownEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _provider;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasProvider; 
@property (assign,nonatomic) int provider;                              //@synthesize provider=_provider - In the implementation block
-(id)dictionaryRepresentation;
-(void)setProvider:(int)arg1 ;
-(int)provider;
-(unsigned long long)timestamp;
-(id)providerAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsProvider:(id)arg1 ;
-(BOOL)hasProvider;
-(id)description;
-(void)setHasProvider:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


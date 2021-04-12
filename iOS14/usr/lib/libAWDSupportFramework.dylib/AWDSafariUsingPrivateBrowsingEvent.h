/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariUsingPrivateBrowsingEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	BOOL _inPrivateBrowsing;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInPrivateBrowsing; 
@property (assign,nonatomic) BOOL inPrivateBrowsing;                    //@synthesize inPrivateBrowsing=_inPrivateBrowsing - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasInPrivateBrowsing;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)inPrivateBrowsing;
-(void)setInPrivateBrowsing:(BOOL)arg1 ;
-(void)setHasInPrivateBrowsing:(BOOL)arg1 ;
-(id)description;
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


/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSafariVersioningEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _variant;
	NSString* _version;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasVariant; 
@property (assign,nonatomic) int variant;                               //@synthesize variant=_variant - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasVersion;
-(unsigned long long)timestamp;
-(int)variant;
-(void)mergeFrom:(id)arg1 ;
-(void)setVariant:(int)arg1 ;
-(void)setHasVariant:(BOOL)arg1 ;
-(BOOL)hasVariant;
-(id)description;
-(id)variantAsString:(int)arg1 ;
-(int)StringAsVariant:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


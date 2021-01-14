/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSpringBoardSOSAlertResponse : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _response;
	NSString* _uUID;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) NSString * response;                       //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasUUID; 
@property (nonatomic,retain) NSString * uUID;                           //@synthesize uUID=_uUID - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasResponse;
-(unsigned long long)timestamp;
-(NSString *)uUID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)response;
-(void)setResponse:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasUUID;
@end


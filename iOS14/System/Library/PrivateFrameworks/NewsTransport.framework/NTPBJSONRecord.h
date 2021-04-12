/*
* Generated on Thursday, January 14, 2021 at 2:23:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSData;

@interface NTPBJSONRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSData* _json;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;              //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasJson; 
@property (nonatomic,retain) NSData * json;                      //@synthesize json=_json - In the implementation block
-(id)dictionaryRepresentation;
-(NTPBRecordBase *)base;
-(NSData *)json;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)hasBase;
-(void)mergeFrom:(id)arg1 ;
-(void)setJson:(NSData *)arg1 ;
-(id)description;
-(BOOL)hasJson;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


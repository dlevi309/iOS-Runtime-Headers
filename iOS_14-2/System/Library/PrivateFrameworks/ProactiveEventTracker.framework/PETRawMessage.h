/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PETRawMessage : PBCodable <NSCopying> {

	NSString* _name;
	NSData* _rawBytes;
	unsigned _typeId;
	SCD_Struct_PE5 _has;

}

@property (assign,nonatomic) BOOL hasTypeId; 
@property (assign,nonatomic) unsigned typeId;                 //@synthesize typeId=_typeId - In the implementation block
@property (nonatomic,readonly) BOOL hasRawBytes; 
@property (nonatomic,retain) NSData * rawBytes;               //@synthesize rawBytes=_rawBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(void)setHasTypeId:(BOOL)arg1 ;
-(unsigned)typeId;
-(void)mergeFrom:(id)arg1 ;
-(void)setTypeId:(unsigned)arg1 ;
-(NSString *)name;
-(id)description;
-(NSData *)rawBytes;
-(unsigned long long)hash;
-(BOOL)hasTypeId;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasRawBytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRawBytes:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


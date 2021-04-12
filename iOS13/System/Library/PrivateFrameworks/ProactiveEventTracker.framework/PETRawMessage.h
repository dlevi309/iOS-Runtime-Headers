/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_PE7 _has;

}

@property (assign,nonatomic) BOOL hasTypeId; 
@property (assign,nonatomic) unsigned typeId;                 //@synthesize typeId=_typeId - In the implementation block
@property (nonatomic,readonly) BOOL hasRawBytes; 
@property (nonatomic,retain) NSData * rawBytes;               //@synthesize rawBytes=_rawBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(NSData *)rawBytes;
-(void)setTypeId:(unsigned)arg1 ;
-(void)setHasTypeId:(BOOL)arg1 ;
-(BOOL)hasTypeId;
-(BOOL)hasRawBytes;
-(unsigned)typeId;
-(void)setRawBytes:(NSData *)arg1 ;
@end


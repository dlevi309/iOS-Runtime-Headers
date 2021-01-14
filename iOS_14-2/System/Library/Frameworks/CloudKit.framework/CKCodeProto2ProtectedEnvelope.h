/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKCodeProto2Any;

@interface CKCodeProto2ProtectedEnvelope : PBCodable <NSCopying> {

	int _contents;
	NSData* _encrypted;
	CKCodeProto2Any* _value;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasEncrypted; 
@property (nonatomic,retain) NSData * encrypted;                   //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKCodeProto2Any * value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasContents; 
@property (assign,nonatomic) int contents;                         //@synthesize contents=_contents - In the implementation block
-(int)contents;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(NSData *)encrypted;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(CKCodeProto2Any *)arg1 ;
-(id)description;
-(void)setContents:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasContents;
-(BOOL)readFrom:(id)arg1 ;
-(void)setEncrypted:(NSData *)arg1 ;
-(BOOL)hasEncrypted;
-(void)copyTo:(id)arg1 ;
-(void)clearOneofValuesForContents;
-(void)setHasContents:(BOOL)arg1 ;
-(id)contentsAsString:(int)arg1 ;
-(int)StringAsContents:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKCodeProto2Any *)value;
-(BOOL)isEqual:(id)arg1 ;
@end


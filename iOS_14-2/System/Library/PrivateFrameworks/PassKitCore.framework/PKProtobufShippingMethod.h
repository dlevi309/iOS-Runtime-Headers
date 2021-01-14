/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufShippingMethod : PBCodable <NSCopying> {

	long long _amount;
	NSString* _detail;
	NSString* _identifier;
	NSString* _label;
	unsigned _type;
	SCD_Struct_PK7 _has;

}

@property (assign,nonatomic) BOOL hasAmount; 
@property (assign,nonatomic) long long amount;                   //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                   //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) NSString * detail;                  //@synthesize detail=_detail - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)detail;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasLabel;
-(BOOL)hasDetail;
-(BOOL)hasIdentifier;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(void)setHasAmount:(BOOL)arg1 ;
-(id)description;
-(void)setAmount:(long long)arg1 ;
-(unsigned)type;
-(unsigned long long)hash;
-(long long)amount;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAmount;
-(void)setDetail:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BCSCategoryStyleAttribute : PBCodable <NSCopying> {

	int _key;
	int _value;
	SCD_Struct_BC7 _has;

}

@property (assign,nonatomic) BOOL hasKey; 
@property (assign,nonatomic) int key;                    //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) int value;                  //@synthesize value=_value - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(int)arg1 ;
-(id)description;
-(void)setHasValue:(BOOL)arg1 ;
-(int)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasKey:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(int)arg1 ;
-(int)value;
-(BOOL)isEqual:(id)arg1 ;
@end


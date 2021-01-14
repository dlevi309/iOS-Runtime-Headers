/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NRPBPropertyValue;

@interface NRPBProperty : PBCodable <NSCopying> {

	NSString* _name;
	NRPBPropertyValue* _value;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NRPBPropertyValue * value;              //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(void)setValue:(NRPBPropertyValue *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NRPBPropertyValue *)value;
-(BOOL)isEqual:(id)arg1 ;
@end


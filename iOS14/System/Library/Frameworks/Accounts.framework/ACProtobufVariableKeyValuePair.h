/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ACProtobufVariableValue;

@interface ACProtobufVariableKeyValuePair : PBCodable <NSCopying> {

	NSString* _key;
	ACProtobufVariableValue* _value;

}

@property (nonatomic,retain) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) ACProtobufVariableValue * value;              //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(ACProtobufVariableValue *)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(ACProtobufVariableValue *)value;
-(BOOL)isEqual:(id)arg1 ;
@end


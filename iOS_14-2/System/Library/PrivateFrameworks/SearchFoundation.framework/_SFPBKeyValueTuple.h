/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBKeyValueTuple.h>
@class NSString, NSData;


@protocol _SFPBKeyValueTuple <NSObject>
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(void)setValue:(id)arg1;
-(NSString *)key;
-(void)setKey:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSString *)value;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBKeyValueTuple : PBCodable <_SFPBKeyValueTuple, NSSecureCoding> {

	NSString* _key;
	NSString* _value;

}

@property (nonatomic,copy) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end


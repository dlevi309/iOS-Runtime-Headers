/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaRedactableString : PBCodable {

	int _redactionState;
	NSString* _value;
	BOOL _hasRedactionState;
	BOOL _hasValue;
	unsigned long long _which_String;

}

@property (assign,nonatomic) int redactionState;                             //@synthesize redactionState=_redactionState - In the implementation block
@property (assign,nonatomic) BOOL hasRedactionState;                         //@synthesize hasRedactionState=_hasRedactionState - In the implementation block
@property (nonatomic,copy) NSString * value;                                 //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasValue;                                  //@synthesize hasValue=_hasValue - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long which_String;              //@synthesize which_String=_which_String - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRedactionState:(int)arg1 ;
-(unsigned long long)which_String;
-(int)redactionState;
-(BOOL)hasRedactionState;
-(void)setHasRedactionState:(BOOL)arg1 ;
@end


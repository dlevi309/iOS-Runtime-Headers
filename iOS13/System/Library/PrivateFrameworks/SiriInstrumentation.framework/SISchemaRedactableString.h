/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaRedactableString : PBCodable {

	int _redactionState;
	unsigned long long _which_String;
	NSString* _value;

}

@property (assign,nonatomic) int redactionState;                             //@synthesize redactionState=_redactionState - In the implementation block
@property (nonatomic,copy) NSString * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long which_String;              //@synthesize which_String=_which_String - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setRedactionState:(int)arg1 ;
-(int)redactionState;
-(unsigned long long)which_String;
@end


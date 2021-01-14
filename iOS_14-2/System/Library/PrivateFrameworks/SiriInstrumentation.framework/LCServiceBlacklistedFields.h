/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData;

@interface LCServiceBlacklistedFields : PBCodable {

	NSArray* _blackListedFields;

}

@property (nonatomic,copy) NSArray * blackListedFields;              //@synthesize blackListedFields=_blackListedFields - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addBlackListedFields:(id)arg1 ;
-(NSArray *)blackListedFields;
-(void)clearBlackListedFields;
-(unsigned long long)blackListedFieldsCount;
-(id)blackListedFieldsAtIndex:(unsigned long long)arg1 ;
-(void)setBlackListedFields:(NSArray *)arg1 ;
@end


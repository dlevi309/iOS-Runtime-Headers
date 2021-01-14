/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaDictationEndPointStop : PBCodable {

	int _dictationEndPointType;
	SCD_Struct_SI1 _has;

}

@property (assign,nonatomic) int dictationEndPointType;                  //@synthesize dictationEndPointType=_dictationEndPointType - In the implementation block
@property (assign,nonatomic) BOOL hasDictationEndPointType; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setDictationEndPointType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)dictationEndPointType;
-(BOOL)hasDictationEndPointType;
-(void)setHasDictationEndPointType:(BOOL)arg1 ;
@end


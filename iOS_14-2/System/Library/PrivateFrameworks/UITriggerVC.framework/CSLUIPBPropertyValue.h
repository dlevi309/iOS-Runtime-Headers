/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, CSLUIPBNumber, CSLUIPBSize, NSString;

@interface CSLUIPBPropertyValue : PBCodable <NSCopying> {

	NSMutableArray* _arrayValues;
	NSData* _dataValue;
	CSLUIPBPropertyValue* _dictionaryKey;
	CSLUIPBNumber* _numberValue;
	CSLUIPBSize* _sizeValue;
	NSString* _stringValue;
	NSData* _uUIDValue;

}

@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                            //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasNumberValue; 
@property (nonatomic,retain) CSLUIPBNumber * numberValue;                       //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,readonly) BOOL hasUUIDValue; 
@property (nonatomic,retain) NSData * uUIDValue;                                //@synthesize uUIDValue=_uUIDValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDataValue; 
@property (nonatomic,retain) NSData * dataValue;                                //@synthesize dataValue=_dataValue - In the implementation block
@property (nonatomic,readonly) BOOL hasSizeValue; 
@property (nonatomic,retain) CSLUIPBSize * sizeValue;                           //@synthesize sizeValue=_sizeValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDictionaryKey; 
@property (nonatomic,retain) CSLUIPBPropertyValue * dictionaryKey;              //@synthesize dictionaryKey=_dictionaryKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * arrayValues;                      //@synthesize arrayValues=_arrayValues - In the implementation block
-(id)dictionaryRepresentation;
-(CSLUIPBNumber *)numberValue;
-(NSData *)dataValue;
-(void)setDataValue:(NSData *)arg1 ;
-(CSLUIPBSize *)sizeValue;
-(BOOL)hasStringValue;
-(BOOL)hasDataValue;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(void)setNumberValue:(CSLUIPBNumber *)arg1 ;
-(void)setDictionaryKey:(CSLUIPBPropertyValue *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(CSLUIPBPropertyValue *)dictionaryKey;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addArrayValues:(id)arg1 ;
-(void)setUUIDValue:(NSData *)arg1 ;
-(void)setSizeValue:(CSLUIPBSize *)arg1 ;
-(unsigned long long)arrayValuesCount;
-(void)clearArrayValues;
-(id)arrayValuesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNumberValue;
-(BOOL)hasUUIDValue;
-(BOOL)hasSizeValue;
-(BOOL)hasDictionaryKey;
-(NSData *)uUIDValue;
-(NSMutableArray *)arrayValues;
-(void)setArrayValues:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


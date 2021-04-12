/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(CSLUIPBSize *)sizeValue;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStringValue;
-(void)setDataValue:(NSData *)arg1 ;
-(BOOL)hasDataValue;
-(NSData *)dataValue;
-(CSLUIPBNumber *)numberValue;
-(void)setSizeValue:(CSLUIPBSize *)arg1 ;
-(void)setNumberValue:(CSLUIPBNumber *)arg1 ;
-(CSLUIPBPropertyValue *)dictionaryKey;
-(void)setDictionaryKey:(CSLUIPBPropertyValue *)arg1 ;
-(void)addArrayValues:(id)arg1 ;
-(void)setUUIDValue:(NSData *)arg1 ;
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
@end


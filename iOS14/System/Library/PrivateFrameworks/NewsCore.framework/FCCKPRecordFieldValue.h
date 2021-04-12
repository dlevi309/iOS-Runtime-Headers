/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, FCCKPDate, NSMutableArray, FCCKPRecordReference, NSString;

@interface FCCKPRecordFieldValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _signedValue;
	NSData* _bytesValue;
	FCCKPDate* _dateValue;
	NSMutableArray* _listValues;
	FCCKPRecordReference* _referenceValue;
	NSString* _stringValue;
	int _type;
	SCD_Struct_FC8 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                                //@synthesize bytesValue=_bytesValue - In the implementation block
@property (assign,nonatomic) BOOL hasSignedValue; 
@property (assign,nonatomic) long long signedValue;                              //@synthesize signedValue=_signedValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                 //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDateValue; 
@property (nonatomic,retain) FCCKPDate * dateValue;                              //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                             //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceValue; 
@property (nonatomic,retain) FCCKPRecordReference * referenceValue;              //@synthesize referenceValue=_referenceValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * listValues;                        //@synthesize listValues=_listValues - In the implementation block
-(NSData *)bytesValue;
-(id)dictionaryRepresentation;
-(FCCKPDate *)dateValue;
-(double)doubleValue;
-(NSMutableArray *)listValues;
-(BOOL)hasBytesValue;
-(void)setHasType:(BOOL)arg1 ;
-(void)setBytesValue:(NSData *)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(unsigned long long)listValuesCount;
-(void)setReferenceValue:(FCCKPRecordReference *)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(NSString *)stringValue;
-(void)setSignedValue:(long long)arg1 ;
-(FCCKPRecordReference *)referenceValue;
-(BOOL)hasDoubleValue;
-(void)addListValue:(id)arg1 ;
-(id)listValueAtIndex:(unsigned long long)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(void)setListValues:(NSMutableArray *)arg1 ;
-(BOOL)hasSignedValue;
-(int)type;
-(void)setDateValue:(FCCKPDate *)arg1 ;
-(unsigned long long)hash;
-(void)setHasSignedValue:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)signedValue;
-(void)clearListValues;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasReferenceValue;
-(void)dealloc;
-(BOOL)hasDateValue;
@end


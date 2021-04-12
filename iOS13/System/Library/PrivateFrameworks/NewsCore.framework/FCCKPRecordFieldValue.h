/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)doubleValue;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)stringValue;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setDateValue:(FCCKPDate *)arg1 ;
-(BOOL)hasDateValue;
-(FCCKPDate *)dateValue;
-(void)setReferenceValue:(FCCKPRecordReference *)arg1 ;
-(void)setSignedValue:(long long)arg1 ;
-(void)setHasSignedValue:(BOOL)arg1 ;
-(BOOL)hasSignedValue;
-(BOOL)hasReferenceValue;
-(long long)signedValue;
-(FCCKPRecordReference *)referenceValue;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setBytesValue:(NSData *)arg1 ;
-(void)addListValue:(id)arg1 ;
-(void)setListValues:(NSMutableArray *)arg1 ;
-(unsigned long long)listValuesCount;
-(void)clearListValues;
-(BOOL)hasBytesValue;
-(NSData *)bytesValue;
-(NSMutableArray *)listValues;
-(id)listValueAtIndex:(unsigned long long)arg1 ;
@end


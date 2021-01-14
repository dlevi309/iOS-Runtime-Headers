/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPDate, CKDPLocationCoordinate, CKDPRecordReference, NSString;

@interface CKDPRecordFieldValueEncryptedValue : PBCodable <NSCopying> {

	SCD_Struct_CK1* _doubleListValues;
	SCD_Struct_CK2* _signedListValues;
	double _doubleValue;
	long long _signedValue;
	NSMutableArray* _dateListValues;
	CKDPDate* _dateValue;
	NSMutableArray* _locationListValues;
	CKDPLocationCoordinate* _locationValue;
	CKDPRecordReference* _referenceValue;
	NSMutableArray* _stringListValues;
	NSString* _stringValue;
	SCD_Struct_CK3 _has;

}

@property (assign,nonatomic) BOOL hasSignedValue; 
@property (assign,nonatomic) long long signedValue;                                   //@synthesize signedValue=_signedValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                      //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDateValue; 
@property (nonatomic,retain) CKDPDate * dateValue;                                    //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                  //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationValue; 
@property (nonatomic,retain) CKDPLocationCoordinate * locationValue;                  //@synthesize locationValue=_locationValue - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceValue; 
@property (nonatomic,retain) CKDPRecordReference * referenceValue;                    //@synthesize referenceValue=_referenceValue - In the implementation block
@property (nonatomic,readonly) unsigned long long signedListValuesCount; 
@property (nonatomic,readonly) long long* signedListValues; 
@property (nonatomic,readonly) unsigned long long doubleListValuesCount; 
@property (nonatomic,readonly) double* doubleListValues; 
@property (nonatomic,retain) NSMutableArray * dateListValues;                         //@synthesize dateListValues=_dateListValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * stringListValues;                       //@synthesize stringListValues=_stringListValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationListValues;                     //@synthesize locationListValues=_locationListValues - In the implementation block
+(Class)dateListValueType;
+(Class)stringListValueType;
+(Class)locationListValueType;
-(id)dictionaryRepresentation;
-(CKDPDate *)dateValue;
-(void)clearDateListValues;
-(double)doubleValue;
-(void)setDoubleListValues:(double*)arg1 count:(unsigned long long)arg2 ;
-(double)doubleListValueAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)clearDoubleListValues;
-(void)setDateListValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dateListValues;
-(unsigned long long)signedListValuesCount;
-(void)addDoubleListValue:(double)arg1 ;
-(void)setReferenceValue:(CKDPRecordReference *)arg1 ;
-(BOOL)hasLocationValue;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)stringValue;
-(id)locationListValueAtIndex:(unsigned long long)arg1 ;
-(void)setLocationListValues:(NSMutableArray *)arg1 ;
-(void)setSignedValue:(long long)arg1 ;
-(CKDPRecordReference *)referenceValue;
-(BOOL)hasDoubleValue;
-(void)addStringListValue:(id)arg1 ;
-(NSMutableArray *)locationListValues;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(void)setStringListValues:(NSMutableArray *)arg1 ;
-(unsigned long long)dateListValuesCount;
-(unsigned long long)stringListValuesCount;
-(BOOL)hasSignedValue;
-(void)addSignedListValue:(long long)arg1 ;
-(id)stringListValueAtIndex:(unsigned long long)arg1 ;
-(long long)signedListValueAtIndex:(unsigned long long)arg1 ;
-(void)setDateValue:(CKDPDate *)arg1 ;
-(unsigned long long)hash;
-(double*)doubleListValues;
-(CKDPLocationCoordinate *)locationValue;
-(unsigned long long)locationListValuesCount;
-(void)setHasSignedValue:(BOOL)arg1 ;
-(void)setSignedListValues:(long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)doubleListValuesCount;
-(id)dateListValueAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)stringListValues;
-(long long)signedValue;
-(void)setLocationValue:(CKDPLocationCoordinate *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addDateListValue:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearLocationListValues;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearSignedListValues;
-(void)addLocationListValue:(id)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(void)clearStringListValues;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasReferenceValue;
-(long long*)signedListValues;
-(void)dealloc;
-(BOOL)hasDateValue;
@end


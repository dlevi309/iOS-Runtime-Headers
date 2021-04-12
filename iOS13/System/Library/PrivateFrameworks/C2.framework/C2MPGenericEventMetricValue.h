/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class C2MPError, NSString;

@interface C2MPGenericEventMetricValue : PBCodable <NSCopying> {

	unsigned long long _dateValue;
	double _doubleValue;
	C2MPError* _errorValue;
	NSString* _stringValue;
	SCD_Struct_C21 _has;

}

@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                    //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                        //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasDateValue; 
@property (assign,nonatomic) unsigned long long dateValue;              //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorValue; 
@property (nonatomic,retain) C2MPError * errorValue;                    //@synthesize errorValue=_errorValue - In the implementation block
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(void)setDateValue:(unsigned long long)arg1 ;
-(void)setHasDateValue:(BOOL)arg1 ;
-(BOOL)hasDateValue;
-(unsigned long long)dateValue;
-(void)setErrorValue:(C2MPError *)arg1 ;
-(BOOL)hasErrorValue;
-(C2MPError *)errorValue;
@end


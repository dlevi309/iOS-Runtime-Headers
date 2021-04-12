/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface FPSearchableItemValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _integerValue;
	double _timeIntervalSinceReferenceDateValue;
	NSData* _nameComponents;
	NSString* _stringValue;
	SCD_Struct_FP5 _has;

}

@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                   //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                       //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerValue; 
@property (assign,nonatomic) long long integerValue;                                   //@synthesize integerValue=_integerValue - In the implementation block
@property (assign,nonatomic) BOOL hasTimeIntervalSinceReferenceDateValue; 
@property (assign,nonatomic) double timeIntervalSinceReferenceDateValue;               //@synthesize timeIntervalSinceReferenceDateValue=_timeIntervalSinceReferenceDateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasNameComponents; 
@property (nonatomic,retain) NSData * nameComponents;                                  //@synthesize nameComponents=_nameComponents - In the implementation block
+(id)stringFromObject:(id)arg1 ;
+(id)objectFromString:(id)arg1 ;
-(id)dictionaryRepresentation;
-(long long)integerValue;
-(double)doubleValue;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIntegerValue;
-(NSString *)stringValue;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(void)setIntegerValue:(long long)arg1 ;
-(void)setTimeIntervalSinceReferenceDateValue:(double)arg1 ;
-(BOOL)hasTimeIntervalSinceReferenceDateValue;
-(double)timeIntervalSinceReferenceDateValue;
-(BOOL)hasNameComponents;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasTimeIntervalSinceReferenceDateValue:(BOOL)arg1 ;
-(void)setNameComponents:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)nameComponents;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


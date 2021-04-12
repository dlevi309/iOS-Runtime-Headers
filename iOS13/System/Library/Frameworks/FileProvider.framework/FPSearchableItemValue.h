/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_FP1 _has;

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
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(long long)integerValue;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStringValue;
-(void)setIntegerValue:(long long)arg1 ;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(BOOL)hasIntegerValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(NSData *)nameComponents;
-(void)setNameComponents:(NSData *)arg1 ;
-(void)setTimeIntervalSinceReferenceDateValue:(double)arg1 ;
-(void)setHasTimeIntervalSinceReferenceDateValue:(BOOL)arg1 ;
-(BOOL)hasTimeIntervalSinceReferenceDateValue;
-(BOOL)hasNameComponents;
-(double)timeIntervalSinceReferenceDateValue;
@end


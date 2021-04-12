/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableMedicalDate : PBCodable <NSCopying> {

	long long _form;
	double _underlyingDate;
	NSString* _originalTimeZoneString;
	SCD_Struct_HD12 _has;

}

@property (assign,nonatomic) BOOL hasForm; 
@property (assign,nonatomic) long long form;                                 //@synthesize form=_form - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingDate; 
@property (assign,nonatomic) double underlyingDate;                          //@synthesize underlyingDate=_underlyingDate - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalTimeZoneString; 
@property (nonatomic,retain) NSString * originalTimeZoneString;              //@synthesize originalTimeZoneString=_originalTimeZoneString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)form;
-(double)underlyingDate;
-(NSString *)originalTimeZoneString;
-(BOOL)hasForm;
-(BOOL)hasUnderlyingDate;
-(void)setForm:(long long)arg1 ;
-(void)setUnderlyingDate:(double)arg1 ;
-(void)setOriginalTimeZoneString:(NSString *)arg1 ;
-(void)setHasForm:(BOOL)arg1 ;
-(void)setHasUnderlyingDate:(BOOL)arg1 ;
-(BOOL)hasOriginalTimeZoneString;
@end


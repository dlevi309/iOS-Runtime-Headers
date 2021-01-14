/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasForm; 
@property (assign,nonatomic) long long form;                                 //@synthesize form=_form - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingDate; 
@property (assign,nonatomic) double underlyingDate;                          //@synthesize underlyingDate=_underlyingDate - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalTimeZoneString; 
@property (nonatomic,retain) NSString * originalTimeZoneString;              //@synthesize originalTimeZoneString=_originalTimeZoneString - In the implementation block
-(long long)form;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasForm;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)underlyingDate;
-(NSString *)originalTimeZoneString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setForm:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasUnderlyingDate;
-(void)setUnderlyingDate:(double)arg1 ;
-(void)setOriginalTimeZoneString:(NSString *)arg1 ;
-(void)setHasForm:(BOOL)arg1 ;
-(void)setHasUnderlyingDate:(BOOL)arg1 ;
-(BOOL)hasOriginalTimeZoneString;
@end


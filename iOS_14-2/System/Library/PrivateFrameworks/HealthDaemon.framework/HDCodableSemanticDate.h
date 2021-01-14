/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableSemanticDate : PBCodable <NSCopying> {

	double _date;
	NSString* _keyPath;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasKeyPath; 
@property (nonatomic,retain) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                     //@synthesize date=_date - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasDate;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)description;
-(void)setHasDate:(BOOL)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)keyPath;
-(BOOL)readFrom:(id)arg1 ;
-(double)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasKeyPath;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCodableCloudKitRelationshipEvent : PBCodable <NSCopying> {

	long long _anchor;
	double _date;
	long long _type;
	SCD_Struct_AS7 _has;

}

@property (assign,nonatomic) BOOL hasAnchor; 
@property (assign,nonatomic) long long anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                   //@synthesize date=_date - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasDate;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(void)setHasDate:(BOOL)arg1 ;
-(BOOL)hasAnchor;
-(long long)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(long long)anchor;
-(double)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAnchor:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasAnchor:(BOOL)arg1 ;
@end


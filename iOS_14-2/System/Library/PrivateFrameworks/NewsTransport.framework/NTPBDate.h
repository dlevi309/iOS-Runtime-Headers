/*
* Generated on Thursday, January 14, 2021 at 2:23:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBDate : PBCodable <NSCopying> {

	double _timeIntervalSince1970;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasTimeIntervalSince1970; 
@property (assign,nonatomic) double timeIntervalSince1970;               //@synthesize timeIntervalSince1970=_timeIntervalSince1970 - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasTimeIntervalSince1970;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimeIntervalSince1970:(BOOL)arg1 ;
-(double)timeIntervalSince1970;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTimeIntervalSince1970:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


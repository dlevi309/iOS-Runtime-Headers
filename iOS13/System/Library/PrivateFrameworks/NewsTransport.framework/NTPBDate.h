/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBDate : PBCodable <NSCopying> {

	double _timeIntervalSince1970;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasTimeIntervalSince1970; 
@property (assign,nonatomic) double timeIntervalSince1970;               //@synthesize timeIntervalSince1970=_timeIntervalSince1970 - In the implementation block
-(double)timeIntervalSince1970;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTimeIntervalSince1970:(double)arg1 ;
-(void)setHasTimeIntervalSince1970:(BOOL)arg1 ;
-(BOOL)hasTimeIntervalSince1970;
@end


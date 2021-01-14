/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBTocExposure : PBCodable <NSCopying> {

	int _precedingLocation;
	NSData* _tocExposureId;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasPrecedingLocation; 
@property (assign,nonatomic) int precedingLocation;                  //@synthesize precedingLocation=_precedingLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasTocExposureId; 
@property (nonatomic,retain) NSData * tocExposureId;                 //@synthesize tocExposureId=_tocExposureId - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setTocExposureId:(NSData *)arg1 ;
-(BOOL)hasTocExposureId;
-(NSData *)tocExposureId;
-(int)precedingLocation;
-(void)setPrecedingLocation:(int)arg1 ;
-(void)setHasPrecedingLocation:(BOOL)arg1 ;
-(BOOL)hasPrecedingLocation;
-(id)precedingLocationAsString:(int)arg1 ;
-(int)StringAsPrecedingLocation:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


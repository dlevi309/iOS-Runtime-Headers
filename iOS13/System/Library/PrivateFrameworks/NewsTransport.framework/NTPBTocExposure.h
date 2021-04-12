/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBTocExposure : PBCodable <NSCopying> {

	int _precedingLocation;
	NSData* _tocExposureId;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasPrecedingLocation; 
@property (assign,nonatomic) int precedingLocation;                  //@synthesize precedingLocation=_precedingLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasTocExposureId; 
@property (nonatomic,retain) NSData * tocExposureId;                 //@synthesize tocExposureId=_tocExposureId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTocExposureId:(NSData *)arg1 ;
-(BOOL)hasTocExposureId;
-(NSData *)tocExposureId;
-(int)precedingLocation;
-(void)setPrecedingLocation:(int)arg1 ;
-(void)setHasPrecedingLocation:(BOOL)arg1 ;
-(BOOL)hasPrecedingLocation;
-(id)precedingLocationAsString:(int)arg1 ;
-(int)StringAsPrecedingLocation:(id)arg1 ;
@end


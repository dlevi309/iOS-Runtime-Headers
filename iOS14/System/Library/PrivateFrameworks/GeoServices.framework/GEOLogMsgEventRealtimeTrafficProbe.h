/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface GEOLogMsgEventRealtimeTrafficProbe : PBCodable <NSCopying> {

	NSData* _locationCollection;

}

@property (nonatomic,readonly) BOOL hasLocationCollection; 
@property (nonatomic,retain) NSData * locationCollection; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setLocationCollection:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)locationCollection;
-(BOOL)hasLocationCollection;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgEventPlaceDataCache : PBCodable <NSCopying> {

	NSString* _placeDataRequestingAppIdentifier;

}

@property (nonatomic,readonly) BOOL hasPlaceDataRequestingAppIdentifier; 
@property (nonatomic,retain) NSString * placeDataRequestingAppIdentifier; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)placeDataRequestingAppIdentifier;
-(void)setPlaceDataRequestingAppIdentifier:(NSString *)arg1 ;
-(BOOL)hasPlaceDataRequestingAppIdentifier;
@end


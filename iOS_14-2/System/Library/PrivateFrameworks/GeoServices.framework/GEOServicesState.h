/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOServicesState : PBCodable <NSCopying> {

	NSString* _bogusFieldForTestingPurposes;

}

@property (nonatomic,readonly) BOOL hasBogusFieldForTestingPurposes; 
@property (nonatomic,retain) NSString * bogusFieldForTestingPurposes; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(NSString *)bogusFieldForTestingPurposes;
-(BOOL)hasBogusFieldForTestingPurposes;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setBogusFieldForTestingPurposes:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


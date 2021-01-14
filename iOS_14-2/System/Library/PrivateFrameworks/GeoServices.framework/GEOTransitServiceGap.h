/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServiceGap.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, PBUnknownFields, GEOFormattedString, NSString;

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _displayMessage;
	unsigned _absEndTime;
	unsigned _absStartTime;
	unsigned _appearsBeforeSuggestedRouteIndex;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long routeListInsertBeforeIndex; 
@property (nonatomic,readonly) id<GEOServerFormattedString> displayMessagFormatString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasAppearsBeforeSuggestedRouteIndex; 
@property (assign,nonatomic) unsigned appearsBeforeSuggestedRouteIndex; 
@property (assign,nonatomic) BOOL hasAbsStartTime; 
@property (assign,nonatomic) unsigned absStartTime; 
@property (assign,nonatomic) BOOL hasAbsEndTime; 
@property (assign,nonatomic) unsigned absEndTime; 
@property (nonatomic,readonly) BOOL hasDisplayMessage; 
@property (nonatomic,retain) GEOFormattedString * displayMessage; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(NSDate *)endDate;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(NSDate *)startDate;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)absEndTime;
-(GEOFormattedString *)displayMessage;
-(void)setAppearsBeforeSuggestedRouteIndex:(unsigned)arg1 ;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(unsigned)absStartTime;
-(void)setDisplayMessage:(GEOFormattedString *)arg1 ;
-(unsigned)appearsBeforeSuggestedRouteIndex;
-(void)setHasAbsStartTime:(BOOL)arg1 ;
-(BOOL)hasAbsEndTime;
-(void)setHasAppearsBeforeSuggestedRouteIndex:(BOOL)arg1 ;
-(BOOL)hasAppearsBeforeSuggestedRouteIndex;
-(BOOL)hasAbsStartTime;
-(void)setHasAbsEndTime:(BOOL)arg1 ;
-(BOOL)hasDisplayMessage;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)routeListInsertBeforeIndex;
-(id<GEOServerFormattedString>)displayMessagFormatString;
@end


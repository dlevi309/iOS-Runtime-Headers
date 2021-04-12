/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long routeListInsertBeforeIndex; 
@property (nonatomic,readonly) id<GEOServerFormattedString> displayMessagFormatString; 
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasAbsStartTime;
-(unsigned)absStartTime;
-(unsigned)absEndTime;
-(GEOFormattedString *)displayMessage;
-(void)setDisplayMessage:(GEOFormattedString *)arg1 ;
-(unsigned)appearsBeforeSuggestedRouteIndex;
-(void)setAppearsBeforeSuggestedRouteIndex:(unsigned)arg1 ;
-(void)setHasAppearsBeforeSuggestedRouteIndex:(BOOL)arg1 ;
-(BOOL)hasAppearsBeforeSuggestedRouteIndex;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(void)setHasAbsStartTime:(BOOL)arg1 ;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(void)setHasAbsEndTime:(BOOL)arg1 ;
-(BOOL)hasAbsEndTime;
-(BOOL)hasDisplayMessage;
-(unsigned long long)routeListInsertBeforeIndex;
-(id<GEOServerFormattedString>)displayMessagFormatString;
@end


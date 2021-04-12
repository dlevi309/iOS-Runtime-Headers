/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEORPDetails, GEORPNotification, NSString, GEORPResolution;

@interface GEORPProblemStatus : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _creationDate;
	GEORPDetails* _details;
	GEORPNotification* _notification;
	NSString* _problemId;
	GEORPResolution* _problemResolution;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _problemState;
	struct {
		unsigned has_creationDate : 1;
		unsigned has_problemState : 1;
		unsigned read_details : 1;
		unsigned read_notification : 1;
		unsigned read_problemId : 1;
		unsigned read_problemResolution : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasProblemId; 
@property (nonatomic,retain) NSString * problemId; 
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate; 
@property (assign,nonatomic) BOOL hasProblemState; 
@property (assign,nonatomic) int problemState; 
@property (nonatomic,readonly) BOOL hasProblemResolution; 
@property (nonatomic,retain) GEORPResolution * problemResolution; 
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) GEORPNotification * notification; 
@property (nonatomic,readonly) BOOL hasDetails; 
@property (nonatomic,retain) GEORPDetails * details; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDetails:(GEORPDetails *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setNotification:(GEORPNotification *)arg1 ;
-(id)init;
-(GEORPNotification *)notification;
-(id)jsonRepresentation;
-(NSString *)problemId;
-(BOOL)hasCreationDate;
-(void)setCreationDate:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(void)setProblemId:(NSString *)arg1 ;
-(BOOL)hasProblemId;
-(GEORPResolution *)problemResolution;
-(void)setProblemState:(int)arg1 ;
-(void)setProblemResolution:(GEORPResolution *)arg1 ;
-(int)problemState;
-(void)setHasProblemState:(BOOL)arg1 ;
-(BOOL)hasProblemState;
-(BOOL)hasProblemResolution;
-(id)problemStateAsString:(int)arg1 ;
-(int)StringAsProblemState:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDetails;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(double)creationDate;
-(BOOL)hasNotification;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(GEORPDetails *)details;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


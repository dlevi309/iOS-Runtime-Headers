/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_creationDate : 1;
		unsigned wrote_details : 1;
		unsigned wrote_notification : 1;
		unsigned wrote_problemId : 1;
		unsigned wrote_problemResolution : 1;
		unsigned wrote_problemState : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEORPNotification *)notification;
-(double)creationDate;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(GEORPDetails *)details;
-(void)setDetails:(GEORPDetails *)arg1 ;
-(void)setNotification:(GEORPNotification *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)problemId;
-(void)setProblemId:(NSString *)arg1 ;
-(BOOL)hasProblemId;
-(void)_readDetails;
-(BOOL)hasDetails;
-(void)_readProblemId;
-(void)_readProblemResolution;
-(void)_readNotification;
-(GEORPResolution *)problemResolution;
-(void)setProblemResolution:(GEORPResolution *)arg1 ;
-(int)problemState;
-(void)setProblemState:(int)arg1 ;
-(void)setHasProblemState:(BOOL)arg1 ;
-(BOOL)hasProblemState;
-(id)problemStateAsString:(int)arg1 ;
-(int)StringAsProblemState:(id)arg1 ;
-(BOOL)hasProblemResolution;
-(BOOL)hasNotification;
@end


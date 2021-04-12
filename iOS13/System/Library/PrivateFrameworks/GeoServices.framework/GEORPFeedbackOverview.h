/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPTimestamp, NSString;

@interface GEORPFeedbackOverview : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPTimestamp* _createdAt;
	GEORPTimestamp* _lastUpdatedAt;
	NSString* _stateDescription;
	NSString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _feedbackState;
	int _type;
	struct {
		unsigned has_feedbackState : 1;
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_createdAt : 1;
		unsigned read_lastUpdatedAt : 1;
		unsigned read_stateDescription : 1;
		unsigned read_title : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_createdAt : 1;
		unsigned wrote_lastUpdatedAt : 1;
		unsigned wrote_stateDescription : 1;
		unsigned wrote_title : 1;
		unsigned wrote_feedbackState : 1;
		unsigned wrote_type : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) BOOL hasCreatedAt; 
@property (nonatomic,retain) GEORPTimestamp * createdAt; 
@property (nonatomic,readonly) BOOL hasLastUpdatedAt; 
@property (nonatomic,retain) GEORPTimestamp * lastUpdatedAt; 
@property (assign,nonatomic) BOOL hasFeedbackState; 
@property (assign,nonatomic) int feedbackState; 
@property (nonatomic,readonly) BOOL hasStateDescription; 
@property (nonatomic,retain) NSString * stateDescription; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasTitle;
-(GEORPTimestamp *)lastUpdatedAt;
-(void)setLastUpdatedAt:(GEORPTimestamp *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readTitle;
-(void)_readCreatedAt;
-(void)_readLastUpdatedAt;
-(void)_readStateDescription;
-(GEORPTimestamp *)createdAt;
-(NSString *)stateDescription;
-(void)setCreatedAt:(GEORPTimestamp *)arg1 ;
-(void)setStateDescription:(NSString *)arg1 ;
-(BOOL)hasCreatedAt;
-(BOOL)hasLastUpdatedAt;
-(int)feedbackState;
-(void)setFeedbackState:(int)arg1 ;
-(void)setHasFeedbackState:(BOOL)arg1 ;
-(BOOL)hasFeedbackState;
-(id)feedbackStateAsString:(int)arg1 ;
-(int)StringAsFeedbackState:(id)arg1 ;
-(BOOL)hasStateDescription;
@end


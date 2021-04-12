/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOTrafficIncidentDescription : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _incidentDescription;
	NSString* _language;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_incidentDescription : 1;
		unsigned read_language : 1;
		unsigned wrote_incidentDescription : 1;
		unsigned wrote_language : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,readonly) BOOL hasIncidentDescription; 
@property (nonatomic,retain) NSString * incidentDescription; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readLanguage;
-(BOOL)hasLanguage;
-(void)_readIncidentDescription;
-(NSString *)incidentDescription;
-(void)setIncidentDescription:(NSString *)arg1 ;
-(BOOL)hasIncidentDescription;
@end


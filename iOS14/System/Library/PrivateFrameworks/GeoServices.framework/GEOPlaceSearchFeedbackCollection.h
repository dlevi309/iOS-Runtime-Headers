/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	NSMutableArray* _actionCaptures;
	unsigned long long _businessID;
	long long _placeID;
	int _localSearchProviderID;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_businessID : 1;
		unsigned has_placeID : 1;
		unsigned has_localSearchProviderID : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID; 
@property (assign,nonatomic) BOOL hasPlaceID; 
@property (assign,nonatomic) long long placeID; 
@property (nonatomic,retain) NSMutableArray * actionCaptures; 
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID; 
+(Class)actionCaptureType;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(long long)placeID;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(unsigned long long)businessID;
-(void)setPlaceID:(long long)arg1 ;
-(void)addActionCapture:(id)arg1 ;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(unsigned long long)actionCapturesCount;
-(void)clearActionCaptures;
-(id)actionCaptureAtIndex:(unsigned long long)arg1 ;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(void)setHasPlaceID:(BOOL)arg1 ;
-(NSMutableArray *)actionCaptures;
-(void)setActionCaptures:(NSMutableArray *)arg1 ;
-(int)localSearchProviderID;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasPlaceID;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


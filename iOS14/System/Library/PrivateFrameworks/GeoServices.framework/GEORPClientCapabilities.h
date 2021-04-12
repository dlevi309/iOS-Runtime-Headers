/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPClientCapabilities : PBCodable <NSCopying> {

	int _transitMarketSupport;
	BOOL _hasConstrainedProblemStatusSize;
	BOOL _hasFeatureHandle;
	BOOL _hasNoOptInRequest;
	BOOL _hasSupportForIdsBasedNotifications;
	struct {
		unsigned has_transitMarketSupport : 1;
		unsigned has_hasConstrainedProblemStatusSize : 1;
		unsigned has_hasFeatureHandle : 1;
		unsigned has_hasNoOptInRequest : 1;
		unsigned has_hasSupportForIdsBasedNotifications : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasHasConstrainedProblemStatusSize; 
@property (assign,nonatomic) BOOL hasConstrainedProblemStatusSize; 
@property (assign,nonatomic) BOOL hasHasNoOptInRequest; 
@property (assign,nonatomic) BOOL hasNoOptInRequest; 
@property (assign,nonatomic) BOOL hasHasFeatureHandle; 
@property (assign,nonatomic) BOOL hasFeatureHandle; 
@property (assign,nonatomic) BOOL hasHasSupportForIdsBasedNotifications; 
@property (assign,nonatomic) BOOL hasSupportForIdsBasedNotifications; 
@property (assign,nonatomic) BOOL hasTransitMarketSupport; 
@property (assign,nonatomic) int transitMarketSupport; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasNoOptInRequest:(BOOL)arg1 ;
-(void)setHasConstrainedProblemStatusSize:(BOOL)arg1 ;
-(void)setHasFeatureHandle:(BOOL)arg1 ;
-(BOOL)hasConstrainedProblemStatusSize;
-(void)setHasSupportForIdsBasedNotifications:(BOOL)arg1 ;
-(void)setHasHasConstrainedProblemStatusSize:(BOOL)arg1 ;
-(BOOL)hasHasConstrainedProblemStatusSize;
-(BOOL)hasNoOptInRequest;
-(void)setHasHasNoOptInRequest:(BOOL)arg1 ;
-(BOOL)hasHasNoOptInRequest;
-(BOOL)hasFeatureHandle;
-(void)setHasHasFeatureHandle:(BOOL)arg1 ;
-(BOOL)hasHasFeatureHandle;
-(BOOL)hasSupportForIdsBasedNotifications;
-(void)setHasHasSupportForIdsBasedNotifications:(BOOL)arg1 ;
-(BOOL)hasHasSupportForIdsBasedNotifications;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(int)transitMarketSupport;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTransitMarketSupport:(int)arg1 ;
-(BOOL)hasTransitMarketSupport;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)StringAsTransitMarketSupport:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasTransitMarketSupport:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)transitMarketSupportAsString:(int)arg1 ;
@end


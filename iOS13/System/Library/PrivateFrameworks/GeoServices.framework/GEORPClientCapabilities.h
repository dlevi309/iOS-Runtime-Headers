/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)transitMarketSupport;
-(void)setTransitMarketSupport:(int)arg1 ;
-(void)setHasTransitMarketSupport:(BOOL)arg1 ;
-(BOOL)hasTransitMarketSupport;
-(id)transitMarketSupportAsString:(int)arg1 ;
-(int)StringAsTransitMarketSupport:(id)arg1 ;
-(BOOL)hasConstrainedProblemStatusSize;
-(void)setHasConstrainedProblemStatusSize:(BOOL)arg1 ;
-(void)setHasHasConstrainedProblemStatusSize:(BOOL)arg1 ;
-(BOOL)hasHasConstrainedProblemStatusSize;
-(BOOL)hasNoOptInRequest;
-(void)setHasNoOptInRequest:(BOOL)arg1 ;
-(void)setHasHasNoOptInRequest:(BOOL)arg1 ;
-(BOOL)hasHasNoOptInRequest;
-(BOOL)hasFeatureHandle;
-(void)setHasFeatureHandle:(BOOL)arg1 ;
-(void)setHasHasFeatureHandle:(BOOL)arg1 ;
-(BOOL)hasHasFeatureHandle;
-(BOOL)hasSupportForIdsBasedNotifications;
-(void)setHasSupportForIdsBasedNotifications:(BOOL)arg1 ;
-(void)setHasHasSupportForIdsBasedNotifications:(BOOL)arg1 ;
-(BOOL)hasHasSupportForIdsBasedNotifications;
@end


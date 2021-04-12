/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ADClientSettingsResponse : PBCodable <NSCopying> {

	double _expirationDate;
	NSMutableArray* _searchAdsSettingsParams;
	SCD_Struct_AD3 _has;

}

@property (assign,nonatomic) BOOL hasExpirationDate; 
@property (assign,nonatomic) double expirationDate;                                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchAdsSettingsParams;              //@synthesize searchAdsSettingsParams=_searchAdsSettingsParams - In the implementation block
+(Class)searchAdsSettingsParamsType;
-(id)dictionaryRepresentation;
-(void)setExpirationDate:(double)arg1 ;
-(BOOL)hasExpirationDate;
-(void)mergeFrom:(id)arg1 ;
-(void)clearSearchAdsSettingsParams;
-(void)addSearchAdsSettingsParams:(id)arg1 ;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(id)description;
-(id)searchAdsSettingsParamsAtIndex:(unsigned long long)arg1 ;
-(double)expirationDate;
-(unsigned long long)searchAdsSettingsParamsCount;
-(unsigned long long)hash;
-(void)setSearchAdsSettingsParams:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)searchAdsSettingsParams;
@end


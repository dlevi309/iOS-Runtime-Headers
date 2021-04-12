/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)expirationDate;
-(void)setExpirationDate:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasExpirationDate;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(void)addSearchAdsSettingsParams:(id)arg1 ;
-(unsigned long long)searchAdsSettingsParamsCount;
-(void)clearSearchAdsSettingsParams;
-(id)searchAdsSettingsParamsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)searchAdsSettingsParams;
-(void)setSearchAdsSettingsParams:(NSMutableArray *)arg1 ;
@end


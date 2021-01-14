/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBGroupingFlags : PBCodable <NSCopying> {

	BOOL _isEligibleForGrouping;
	BOOL _isEligibleForGroupingIfFavorited;
	BOOL _isHidden;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasIsHidden; 
@property (assign,nonatomic) BOOL isHidden;                                         //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) BOOL hasIsEligibleForGrouping; 
@property (assign,nonatomic) BOOL isEligibleForGrouping;                            //@synthesize isEligibleForGrouping=_isEligibleForGrouping - In the implementation block
@property (assign,nonatomic) BOOL hasIsEligibleForGroupingIfFavorited; 
@property (assign,nonatomic) BOOL isEligibleForGroupingIfFavorited;                 //@synthesize isEligibleForGroupingIfFavorited=_isEligibleForGroupingIfFavorited - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)isHidden;
-(BOOL)isEligibleForGrouping;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIsEligibleForGrouping;
-(id)description;
-(void)setHasIsEligibleForGrouping:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasIsEligibleForGroupingIfFavorited:(BOOL)arg1 ;
-(void)setIsEligibleForGroupingIfFavorited:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isEligibleForGroupingIfFavorited;
-(void)setIsEligibleForGrouping:(BOOL)arg1 ;
-(void)setHasIsHidden:(BOOL)arg1 ;
-(void)setIsHidden:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasIsEligibleForGroupingIfFavorited;
-(BOOL)hasIsHidden;
@end


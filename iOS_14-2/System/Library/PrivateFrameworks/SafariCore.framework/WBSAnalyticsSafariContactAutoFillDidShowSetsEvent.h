/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariContactAutoFillDidShowSetsEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	BOOL _isShowingMeCardSets;
	BOOL _isShowingPreviouslyCustomizedSet;
	SCD_Struct_WB7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsShowingMeCardSets; 
@property (assign,nonatomic) BOOL isShowingMeCardSets;                              //@synthesize isShowingMeCardSets=_isShowingMeCardSets - In the implementation block
@property (assign,nonatomic) BOOL hasIsShowingPreviouslyCustomizedSet; 
@property (assign,nonatomic) BOOL isShowingPreviouslyCustomizedSet;                 //@synthesize isShowingPreviouslyCustomizedSet=_isShowingPreviouslyCustomizedSet - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setIsShowingMeCardSets:(BOOL)arg1 ;
-(void)setIsShowingPreviouslyCustomizedSet:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasIsShowingMeCardSets:(BOOL)arg1 ;
-(BOOL)hasIsShowingMeCardSets;
-(BOOL)isShowingMeCardSets;
-(void)setHasIsShowingPreviouslyCustomizedSet:(BOOL)arg1 ;
-(BOOL)hasIsShowingPreviouslyCustomizedSet;
-(BOOL)isShowingPreviouslyCustomizedSet;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


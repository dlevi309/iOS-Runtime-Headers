/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setIsShowingMeCardSets:(BOOL)arg1 ;
-(void)setIsShowingPreviouslyCustomizedSet:(BOOL)arg1 ;
-(void)setHasIsShowingMeCardSets:(BOOL)arg1 ;
-(BOOL)hasIsShowingMeCardSets;
-(BOOL)isShowingMeCardSets;
-(void)setHasIsShowingPreviouslyCustomizedSet:(BOOL)arg1 ;
-(BOOL)hasIsShowingPreviouslyCustomizedSet;
-(BOOL)isShowingPreviouslyCustomizedSet;
@end


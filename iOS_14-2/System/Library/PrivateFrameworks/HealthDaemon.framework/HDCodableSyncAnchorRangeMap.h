/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDCodableSyncAnchorRangeMap : PBCodable <NSCopying> {

	NSMutableArray* _anchorRanges;

}

@property (nonatomic,retain) NSMutableArray * anchorRanges;              //@synthesize anchorRanges=_anchorRanges - In the implementation block
+(Class)anchorRangesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addAnchorRanges:(id)arg1 ;
-(unsigned long long)anchorRangesCount;
-(void)clearAnchorRanges;
-(id)anchorRangesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)anchorRanges;
-(void)setAnchorRanges:(NSMutableArray *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addAnchorRanges:(id)arg1 ;
-(unsigned long long)anchorRangesCount;
-(void)clearAnchorRanges;
-(id)anchorRangesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)anchorRanges;
-(void)setAnchorRanges:(NSMutableArray *)arg1 ;
@end


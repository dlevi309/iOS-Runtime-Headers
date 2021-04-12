/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SBPBAppLayoutList : PBCodable <NSCopying> {

	NSMutableArray* _applayouts;

}

@property (nonatomic,retain) NSMutableArray * applayouts;              //@synthesize applayouts=_applayouts - In the implementation block
+(Class)applayoutsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addApplayouts:(id)arg1 ;
-(unsigned long long)applayoutsCount;
-(void)clearApplayouts;
-(id)applayoutsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)applayouts;
-(void)setApplayouts:(NSMutableArray *)arg1 ;
@end


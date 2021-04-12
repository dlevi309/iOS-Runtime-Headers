/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <NSCopying> {

	NSMutableArray* _predicates;

}

@property (nonatomic,retain) NSMutableArray * predicates;              //@synthesize predicates=_predicates - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPredicates:(NSMutableArray *)arg1 ;
-(NSMutableArray *)predicates;
-(void)clearPredicates;
-(void)addPredicates:(id)arg1 ;
-(unsigned long long)predicatesCount;
-(id)predicatesAtIndex:(unsigned long long)arg1 ;
@end


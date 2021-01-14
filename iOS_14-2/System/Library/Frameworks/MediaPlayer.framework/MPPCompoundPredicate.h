/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setPredicates:(NSMutableArray *)arg1 ;
-(NSMutableArray *)predicates;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearPredicates;
-(void)addPredicates:(id)arg1 ;
-(unsigned long long)predicatesCount;
-(id)predicatesAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


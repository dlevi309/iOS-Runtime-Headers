/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying> {

	MPPMediaPredicate* _conditionalPredicate;
	MPPMediaPredicate* _elsePredicate;
	MPPMediaPredicate* _thenPredicate;

}

@property (nonatomic,readonly) BOOL hasConditionalPredicate; 
@property (nonatomic,retain) MPPMediaPredicate * conditionalPredicate;              //@synthesize conditionalPredicate=_conditionalPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasThenPredicate; 
@property (nonatomic,retain) MPPMediaPredicate * thenPredicate;                     //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasElsePredicate; 
@property (nonatomic,retain) MPPMediaPredicate * elsePredicate;                     //@synthesize elsePredicate=_elsePredicate - In the implementation block
-(id)dictionaryRepresentation;
-(MPPMediaPredicate *)elsePredicate;
-(MPPMediaPredicate *)thenPredicate;
-(BOOL)hasConditionalPredicate;
-(BOOL)hasThenPredicate;
-(BOOL)hasElsePredicate;
-(MPPMediaPredicate *)conditionalPredicate;
-(void)setConditionalPredicate:(MPPMediaPredicate *)arg1 ;
-(void)setThenPredicate:(MPPMediaPredicate *)arg1 ;
-(void)setElsePredicate:(MPPMediaPredicate *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


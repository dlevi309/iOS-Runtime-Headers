/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPPPersistentIDsPredicate : PBCodable <NSCopying> {

	SCD_Struct_MP78* _persistentIDs;
	BOOL _shouldContain;
	SCD_Struct_MP50 _has;

}

@property (assign,nonatomic) BOOL hasShouldContain; 
@property (assign,nonatomic) BOOL shouldContain;                                   //@synthesize shouldContain=_shouldContain - In the implementation block
@property (nonatomic,readonly) unsigned long long persistentIDsCount; 
@property (nonatomic,readonly) long long* persistentIDs; 
-(id)dictionaryRepresentation;
-(long long*)persistentIDs;
-(BOOL)shouldContain;
-(void)setShouldContain:(BOOL)arg1 ;
-(void)setHasShouldContain:(BOOL)arg1 ;
-(BOOL)hasShouldContain;
-(unsigned long long)persistentIDsCount;
-(void)clearPersistentIDs;
-(void)addPersistentIDs:(long long)arg1 ;
-(long long)persistentIDsAtIndex:(unsigned long long)arg1 ;
-(void)setPersistentIDs:(long long*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


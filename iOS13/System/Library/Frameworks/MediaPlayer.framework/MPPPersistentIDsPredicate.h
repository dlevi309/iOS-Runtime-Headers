/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPPPersistentIDsPredicate : PBCodable <NSCopying> {

	SCD_Struct_MP80* _persistentIDs;
	BOOL _shouldContain;
	SCD_Struct_MP49 _has;

}

@property (assign,nonatomic) BOOL hasShouldContain; 
@property (assign,nonatomic) BOOL shouldContain;                                   //@synthesize shouldContain=_shouldContain - In the implementation block
@property (nonatomic,readonly) unsigned long long persistentIDsCount; 
@property (nonatomic,readonly) long long* persistentIDs; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
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
@end


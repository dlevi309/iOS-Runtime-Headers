/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ICPAPlayModeDictionary : PBCodable <NSCopying> {

	int _autoPlayMode;
	int _repeatPlayMode;
	int _shufflePlayMode;
	SCD_Struct_IC17 _has;

}

@property (assign,nonatomic) BOOL hasRepeatPlayMode; 
@property (assign,nonatomic) int repeatPlayMode;                   //@synthesize repeatPlayMode=_repeatPlayMode - In the implementation block
@property (assign,nonatomic) BOOL hasShufflePlayMode; 
@property (assign,nonatomic) int shufflePlayMode;                  //@synthesize shufflePlayMode=_shufflePlayMode - In the implementation block
@property (assign,nonatomic) BOOL hasAutoPlayMode; 
@property (assign,nonatomic) int autoPlayMode;                     //@synthesize autoPlayMode=_autoPlayMode - In the implementation block
-(id)dictionaryRepresentation;
-(int)repeatPlayMode;
-(int)shufflePlayMode;
-(int)autoPlayMode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setRepeatPlayMode:(int)arg1 ;
-(void)setHasRepeatPlayMode:(BOOL)arg1 ;
-(BOOL)hasRepeatPlayMode;
-(id)repeatPlayModeAsString:(int)arg1 ;
-(void)setShufflePlayMode:(int)arg1 ;
-(int)StringAsRepeatPlayMode:(id)arg1 ;
-(void)setHasShufflePlayMode:(BOOL)arg1 ;
-(BOOL)hasShufflePlayMode;
-(id)shufflePlayModeAsString:(int)arg1 ;
-(int)StringAsShufflePlayMode:(id)arg1 ;
-(void)setAutoPlayMode:(int)arg1 ;
-(void)setHasAutoPlayMode:(BOOL)arg1 ;
-(BOOL)hasAutoPlayMode;
-(id)autoPlayModeAsString:(int)arg1 ;
-(int)StringAsAutoPlayMode:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


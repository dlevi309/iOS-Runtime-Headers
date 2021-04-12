/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, _MPCProtoTracklistIndexPath;

@interface _MPCProtoTracklist : PBCodable <NSCopying> {

	NSMutableArray* _accountInfos;
	NSMutableArray* _containers;
	int _shuffleMode;
	_MPCProtoTracklistIndexPath* _startingItemIndexPath;
	SCD_Struct_MP19 _has;

}

@property (nonatomic,retain) NSMutableArray * accountInfos;                                    //@synthesize accountInfos=_accountInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * containers;                                      //@synthesize containers=_containers - In the implementation block
@property (nonatomic,readonly) BOOL hasStartingItemIndexPath; 
@property (nonatomic,retain) _MPCProtoTracklistIndexPath * startingItemIndexPath;              //@synthesize startingItemIndexPath=_startingItemIndexPath - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                                  //@synthesize shuffleMode=_shuffleMode - In the implementation block
+(Class)containerType;
+(Class)accountInfoType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)containers;
-(unsigned long long)containersCount;
-(void)setContainers:(NSMutableArray *)arg1 ;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(void)addContainer:(id)arg1 ;
-(void)setStartingItemIndexPath:(_MPCProtoTracklistIndexPath *)arg1 ;
-(void)addAccountInfo:(id)arg1 ;
-(void)clearAccountInfos;
-(unsigned long long)accountInfosCount;
-(id)accountInfoAtIndex:(unsigned long long)arg1 ;
-(void)clearContainers;
-(id)containerAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStartingItemIndexPath;
-(NSMutableArray *)accountInfos;
-(void)setAccountInfos:(NSMutableArray *)arg1 ;
-(_MPCProtoTracklistIndexPath *)startingItemIndexPath;
@end


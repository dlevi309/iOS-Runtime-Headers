/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_MP20 _has;

}

@property (nonatomic,retain) NSMutableArray * accountInfos;                                    //@synthesize accountInfos=_accountInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * containers;                                      //@synthesize containers=_containers - In the implementation block
@property (nonatomic,readonly) BOOL hasStartingItemIndexPath; 
@property (nonatomic,retain) _MPCProtoTracklistIndexPath * startingItemIndexPath;              //@synthesize startingItemIndexPath=_startingItemIndexPath - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                                  //@synthesize shuffleMode=_shuffleMode - In the implementation block
+(Class)containerType;
+(Class)accountInfoType;
-(NSMutableArray *)containers;
-(id)dictionaryRepresentation;
-(unsigned long long)containersCount;
-(void)setShuffleMode:(int)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setContainers:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addContainer:(id)arg1 ;
-(void)clearContainers;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)shuffleMode;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStartingItemIndexPath:(_MPCProtoTracklistIndexPath *)arg1 ;
-(void)addAccountInfo:(id)arg1 ;
-(void)clearAccountInfos;
-(unsigned long long)accountInfosCount;
-(id)accountInfoAtIndex:(unsigned long long)arg1 ;
-(id)containerAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStartingItemIndexPath;
-(NSMutableArray *)accountInfos;
-(void)setAccountInfos:(NSMutableArray *)arg1 ;
-(_MPCProtoTracklistIndexPath *)startingItemIndexPath;
@end


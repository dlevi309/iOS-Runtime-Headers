/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MPCProtoContainerIdentifierSet : PBCodable <NSCopying> {

	long long _cloudID;
	long long _delegateInfoID;
	long long _storeAdamID;
	NSString* _cloudCollectionID;
	NSString* _cloudUniversalLibraryID;
	NSString* _radioStationID;
	NSString* _storePlaylistGlobalID;
	NSString* _storePlaylistVersionHash;
	SCD_Struct_MP20 _has;

}

@property (assign,nonatomic) BOOL hasDelegateInfoID; 
@property (assign,nonatomic) long long delegateInfoID;                         //@synthesize delegateInfoID=_delegateInfoID - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAdamID; 
@property (assign,nonatomic) long long storeAdamID;                            //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,readonly) BOOL hasStorePlaylistGlobalID; 
@property (nonatomic,retain) NSString * storePlaylistGlobalID;                 //@synthesize storePlaylistGlobalID=_storePlaylistGlobalID - In the implementation block
@property (nonatomic,readonly) BOOL hasStorePlaylistVersionHash; 
@property (nonatomic,retain) NSString * storePlaylistVersionHash;              //@synthesize storePlaylistVersionHash=_storePlaylistVersionHash - In the implementation block
@property (assign,nonatomic) BOOL hasCloudID; 
@property (assign,nonatomic) long long cloudID;                                //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudCollectionID; 
@property (nonatomic,retain) NSString * cloudCollectionID;                     //@synthesize cloudCollectionID=_cloudCollectionID - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationID; 
@property (nonatomic,retain) NSString * radioStationID;                        //@synthesize radioStationID=_radioStationID - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudUniversalLibraryID; 
@property (nonatomic,retain) NSString * cloudUniversalLibraryID;               //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)cloudID;
-(void)setCloudID:(long long)arg1 ;
-(NSString *)cloudUniversalLibraryID;
-(long long)storeAdamID;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(NSString *)radioStationID;
-(void)setRadioStationID:(NSString *)arg1 ;
-(void)setStoreAdamID:(long long)arg1 ;
-(BOOL)hasRadioStationID;
-(void)setDelegateInfoID:(long long)arg1 ;
-(void)setStorePlaylistGlobalID:(NSString *)arg1 ;
-(void)setStorePlaylistVersionHash:(NSString *)arg1 ;
-(void)setCloudCollectionID:(NSString *)arg1 ;
-(void)setHasDelegateInfoID:(BOOL)arg1 ;
-(BOOL)hasDelegateInfoID;
-(void)setHasStoreAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreAdamID;
-(BOOL)hasStorePlaylistGlobalID;
-(BOOL)hasStorePlaylistVersionHash;
-(void)setHasCloudID:(BOOL)arg1 ;
-(BOOL)hasCloudID;
-(BOOL)hasCloudCollectionID;
-(BOOL)hasCloudUniversalLibraryID;
-(long long)delegateInfoID;
-(NSString *)storePlaylistGlobalID;
-(NSString *)storePlaylistVersionHash;
-(NSString *)cloudCollectionID;
@end

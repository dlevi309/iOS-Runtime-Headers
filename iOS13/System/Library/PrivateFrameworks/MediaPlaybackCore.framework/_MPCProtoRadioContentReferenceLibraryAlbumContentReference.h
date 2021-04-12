/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryAlbumContentReference : PBCodable <NSCopying> {

	long long _representativeItemCloudID;
	long long _storeAdamID;
	NSString* _albumName;
	SCD_Struct_MP22 _has;

}

@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) NSString * albumName;                             //@synthesize albumName=_albumName - In the implementation block
@property (assign,nonatomic) BOOL hasRepresentativeItemCloudID; 
@property (assign,nonatomic) long long representativeItemCloudID;              //@synthesize representativeItemCloudID=_representativeItemCloudID - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAdamID; 
@property (assign,nonatomic) long long storeAdamID;                            //@synthesize storeAdamID=_storeAdamID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(BOOL)hasAlbumName;
-(long long)storeAdamID;
-(void)setStoreAdamID:(long long)arg1 ;
-(void)setHasStoreAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreAdamID;
-(void)setRepresentativeItemCloudID:(long long)arg1 ;
-(void)setHasRepresentativeItemCloudID:(BOOL)arg1 ;
-(BOOL)hasRepresentativeItemCloudID;
-(long long)representativeItemCloudID;
@end


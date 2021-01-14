/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_MP23 _has;

}

@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) NSString * albumName;                             //@synthesize albumName=_albumName - In the implementation block
@property (assign,nonatomic) BOOL hasRepresentativeItemCloudID; 
@property (assign,nonatomic) long long representativeItemCloudID;              //@synthesize representativeItemCloudID=_representativeItemCloudID - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAdamID; 
@property (assign,nonatomic) long long storeAdamID;                            //@synthesize storeAdamID=_storeAdamID - In the implementation block
-(id)dictionaryRepresentation;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)albumName;
-(BOOL)hasAlbumName;
-(void)mergeFrom:(id)arg1 ;
-(long long)storeAdamID;
-(id)description;
-(void)setStoreAdamID:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasStoreAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreAdamID;
-(void)setRepresentativeItemCloudID:(long long)arg1 ;
-(void)setHasRepresentativeItemCloudID:(BOOL)arg1 ;
-(BOOL)hasRepresentativeItemCloudID;
-(long long)representativeItemCloudID;
@end


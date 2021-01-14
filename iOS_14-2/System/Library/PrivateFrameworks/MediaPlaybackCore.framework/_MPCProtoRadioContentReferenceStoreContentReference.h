/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MPCProtoRadioContentReferenceStoreContentReference : PBCodable <NSCopying> {

	long long _storeAdamID;
	SCD_Struct_MP20 _has;

}

@property (assign,nonatomic) BOOL hasStoreAdamID; 
@property (assign,nonatomic) long long storeAdamID;              //@synthesize storeAdamID=_storeAdamID - In the implementation block
-(id)dictionaryRepresentation;
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
@end


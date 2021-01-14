/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CPLSuggestionAssetFlag : PBCodable <NSCopying> {

	BOOL _isKeyAsset;
	BOOL _isRepresentative;
	SCD_Struct_CP1 _has;

}

@property (assign,nonatomic) BOOL hasIsRepresentative; 
@property (assign,nonatomic) BOOL isRepresentative;                 //@synthesize isRepresentative=_isRepresentative - In the implementation block
@property (assign,nonatomic) BOOL hasIsKeyAsset; 
@property (assign,nonatomic) BOOL isKeyAsset;                       //@synthesize isKeyAsset=_isKeyAsset - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)isKeyAsset;
-(void)setIsRepresentative:(BOOL)arg1 ;
-(void)setIsKeyAsset:(BOOL)arg1 ;
-(BOOL)isRepresentative;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasIsRepresentative:(BOOL)arg1 ;
-(BOOL)hasIsRepresentative;
-(void)setHasIsKeyAsset:(BOOL)arg1 ;
-(BOOL)hasIsKeyAsset;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAsset, NSString;

@interface CKDPAssetUploadTokenRetrieveResponseUploadToken : PBCodable <NSCopying> {

	long long _tokenExpiration;
	CKDPAsset* _asset;
	NSString* _token;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token;                       //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasAsset; 
@property (nonatomic,retain) CKDPAsset * asset;                      //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL hasTokenExpiration; 
@property (assign,nonatomic) long long tokenExpiration;              //@synthesize tokenExpiration=_tokenExpiration - In the implementation block
-(id)dictionaryRepresentation;
-(void)setAsset:(CKDPAsset *)arg1 ;
-(CKDPAsset *)asset;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasToken;
-(void)setToken:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasAsset;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)tokenExpiration;
-(void)setTokenExpiration:(long long)arg1 ;
-(void)setHasTokenExpiration:(BOOL)arg1 ;
-(BOOL)hasTokenExpiration;
@end


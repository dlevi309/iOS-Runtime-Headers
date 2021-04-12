/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLMemoryAssetFlag, NSString, NSData;

@interface CPLMemoryAsset : PBCodable <NSCopying> {

	CPLMemoryAssetFlag* _assetFlag;
	NSString* _assetIdentifier;
	NSData* _assetMovieData;
	NSString* _masterFingerprint;

}

@property (nonatomic,readonly) BOOL hasAssetIdentifier; 
@property (nonatomic,retain) NSString * assetIdentifier;                  //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetFlag; 
@property (nonatomic,retain) CPLMemoryAssetFlag * assetFlag;              //@synthesize assetFlag=_assetFlag - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetMovieData; 
@property (nonatomic,retain) NSData * assetMovieData;                     //@synthesize assetMovieData=_assetMovieData - In the implementation block
@property (nonatomic,readonly) BOOL hasMasterFingerprint; 
@property (nonatomic,retain) NSString * masterFingerprint;                //@synthesize masterFingerprint=_masterFingerprint - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMasterFingerprint:(NSString *)arg1 ;
-(void)setAssetFlag:(CPLMemoryAssetFlag *)arg1 ;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(NSString *)assetIdentifier;
-(CPLMemoryAssetFlag *)assetFlag;
-(void)setAssetMovieData:(NSData *)arg1 ;
-(NSData *)assetMovieData;
-(BOOL)hasAssetIdentifier;
-(BOOL)hasAssetFlag;
-(BOOL)hasAssetMovieData;
-(BOOL)hasMasterFingerprint;
-(NSString *)masterFingerprint;
@end


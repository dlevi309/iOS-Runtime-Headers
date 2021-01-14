/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CPLSuggestionAssetFlag, NSString;

@interface CPLSuggestionAsset : PBCodable <NSCopying> {

	NSData* _actionData;
	CPLSuggestionAssetFlag* _assetFlag;
	NSString* _assetIdentifier;
	NSString* _masterFingerprint;

}

@property (nonatomic,readonly) BOOL hasAssetIdentifier; 
@property (nonatomic,retain) NSString * assetIdentifier;                      //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetFlag; 
@property (nonatomic,retain) CPLSuggestionAssetFlag * assetFlag;              //@synthesize assetFlag=_assetFlag - In the implementation block
@property (nonatomic,readonly) BOOL hasActionData; 
@property (nonatomic,retain) NSData * actionData;                             //@synthesize actionData=_actionData - In the implementation block
@property (nonatomic,readonly) BOOL hasMasterFingerprint; 
@property (nonatomic,retain) NSString * masterFingerprint;                    //@synthesize masterFingerprint=_masterFingerprint - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)actionData;
-(void)setMasterFingerprint:(NSString *)arg1 ;
-(void)setAssetFlag:(CPLSuggestionAssetFlag *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActionData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CPLSuggestionAssetFlag *)assetFlag;
-(BOOL)hasAssetIdentifier;
-(BOOL)hasAssetFlag;
-(BOOL)hasMasterFingerprint;
-(NSString *)masterFingerprint;
-(BOOL)hasActionData;
@end


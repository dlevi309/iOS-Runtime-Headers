/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraUserSettings : PBCodable <NSCopying> {

	BOOL _isImportingFromPhotoLibraryEnabled;
	BOOL _isOwner;
	BOOL _isSharingFaceClassificationsEnabled;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasIsSharingFaceClassificationsEnabled; 
@property (assign,nonatomic) BOOL isSharingFaceClassificationsEnabled;                 //@synthesize isSharingFaceClassificationsEnabled=_isSharingFaceClassificationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsImportingFromPhotoLibraryEnabled; 
@property (assign,nonatomic) BOOL isImportingFromPhotoLibraryEnabled;                  //@synthesize isImportingFromPhotoLibraryEnabled=_isImportingFromPhotoLibraryEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsOwner; 
@property (assign,nonatomic) BOOL isOwner;                                             //@synthesize isOwner=_isOwner - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isOwner;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isSharingFaceClassificationsEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsOwner:(BOOL)arg1 ;
-(BOOL)isImportingFromPhotoLibraryEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsSharingFaceClassificationsEnabled:(BOOL)arg1 ;
-(void)setHasIsSharingFaceClassificationsEnabled:(BOOL)arg1 ;
-(BOOL)hasIsSharingFaceClassificationsEnabled;
-(void)setIsImportingFromPhotoLibraryEnabled:(BOOL)arg1 ;
-(void)setHasIsImportingFromPhotoLibraryEnabled:(BOOL)arg1 ;
-(BOOL)hasIsImportingFromPhotoLibraryEnabled;
-(void)setHasIsOwner:(BOOL)arg1 ;
-(BOOL)hasIsOwner;
@end


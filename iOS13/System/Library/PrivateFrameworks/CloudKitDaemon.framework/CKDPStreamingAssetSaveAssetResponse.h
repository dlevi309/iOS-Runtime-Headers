/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPStreamingAssetSaveAssetResponse : PBCodable <NSCopying> {

	long long _reservedSize;
	long long _uploadURLExpirationTimeSeconds;
	NSString* _uploadURL;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasReservedSize; 
@property (assign,nonatomic) long long reservedSize;                                //@synthesize reservedSize=_reservedSize - In the implementation block
@property (nonatomic,readonly) BOOL hasUploadURL; 
@property (nonatomic,retain) NSString * uploadURL;                                  //@synthesize uploadURL=_uploadURL - In the implementation block
@property (assign,nonatomic) BOOL hasUploadURLExpirationTimeSeconds; 
@property (assign,nonatomic) long long uploadURLExpirationTimeSeconds;              //@synthesize uploadURLExpirationTimeSeconds=_uploadURLExpirationTimeSeconds - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUploadURL:(NSString *)arg1 ;
-(NSString *)uploadURL;
-(long long)reservedSize;
-(void)setReservedSize:(long long)arg1 ;
-(void)setHasReservedSize:(BOOL)arg1 ;
-(BOOL)hasReservedSize;
-(BOOL)hasUploadURL;
-(void)setUploadURLExpirationTimeSeconds:(long long)arg1 ;
-(void)setHasUploadURLExpirationTimeSeconds:(BOOL)arg1 ;
-(BOOL)hasUploadURLExpirationTimeSeconds;
-(long long)uploadURLExpirationTimeSeconds;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)uploadURL;
-(id)description;
-(long long)reservedSize;
-(void)setReservedSize:(long long)arg1 ;
-(void)setUploadURL:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasReservedSize:(BOOL)arg1 ;
-(BOOL)hasReservedSize;
-(BOOL)hasUploadURL;
-(void)setUploadURLExpirationTimeSeconds:(long long)arg1 ;
-(void)setHasUploadURLExpirationTimeSeconds:(BOOL)arg1 ;
-(BOOL)hasUploadURLExpirationTimeSeconds;
-(long long)uploadURLExpirationTimeSeconds;
@end


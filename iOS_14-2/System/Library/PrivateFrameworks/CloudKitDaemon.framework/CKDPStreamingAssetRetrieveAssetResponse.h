/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPStreamingAssetRetrieveAssetResponse : PBCodable <NSCopying> {

	long long _downloadURLExpirationTimeSeconds;
	long long _size;
	NSString* _downloadURL;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) long long size;                                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasDownloadURL; 
@property (nonatomic,retain) NSString * downloadURL;                                  //@synthesize downloadURL=_downloadURL - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadURLExpirationTimeSeconds; 
@property (assign,nonatomic) long long downloadURLExpirationTimeSeconds;              //@synthesize downloadURLExpirationTimeSeconds=_downloadURLExpirationTimeSeconds - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)downloadURL;
-(long long)size;
-(void)mergeFrom:(id)arg1 ;
-(void)setSize:(long long)arg1 ;
-(BOOL)hasSize;
-(id)description;
-(void)setDownloadURL:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasDownloadURL;
-(void)setDownloadURLExpirationTimeSeconds:(long long)arg1 ;
-(void)setHasDownloadURLExpirationTimeSeconds:(BOOL)arg1 ;
-(BOOL)hasDownloadURLExpirationTimeSeconds;
-(long long)downloadURLExpirationTimeSeconds;
@end


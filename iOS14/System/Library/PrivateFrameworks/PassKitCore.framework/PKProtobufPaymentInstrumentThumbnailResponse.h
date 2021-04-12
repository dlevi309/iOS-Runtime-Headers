/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKProtobufPaymentInstrumentThumbnailResponse : PBCodable <NSCopying> {

	NSString* _manifestHash;
	int _status;
	NSData* _thumbnailImage;
	SCD_Struct_PK13 _has;

}

@property (nonatomic,readonly) BOOL hasThumbnailImage; 
@property (nonatomic,retain) NSData * thumbnailImage;               //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasManifestHash; 
@property (nonatomic,retain) NSString * manifestHash;               //@synthesize manifestHash=_manifestHash - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(NSData *)thumbnailImage;
-(BOOL)hasManifestHash;
-(BOOL)hasThumbnailImage;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setManifestHash:(NSString *)arg1 ;
-(void)setThumbnailImage:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(NSString *)manifestHash;
@end


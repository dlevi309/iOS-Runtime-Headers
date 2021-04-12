/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(NSData *)thumbnailImage;
-(void)setThumbnailImage:(NSData *)arg1 ;
-(NSString *)manifestHash;
-(void)setManifestHash:(NSString *)arg1 ;
-(BOOL)hasManifestHash;
-(BOOL)hasThumbnailImage;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoStandalonePaymentSetupProductImageAssetURLs : PBCodable <NSCopying> {

	NSString* _digitalCardImageUrl;
	NSString* _logoImageUrl;
	NSString* _thumbnailImageUrl;

}

@property (nonatomic,readonly) BOOL hasDigitalCardImageUrl; 
@property (nonatomic,retain) NSString * digitalCardImageUrl;              //@synthesize digitalCardImageUrl=_digitalCardImageUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailImageUrl; 
@property (nonatomic,retain) NSString * thumbnailImageUrl;                //@synthesize thumbnailImageUrl=_thumbnailImageUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasLogoImageUrl; 
@property (nonatomic,retain) NSString * logoImageUrl;                     //@synthesize logoImageUrl=_logoImageUrl - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)logoImageUrl;
-(id)description;
-(NSString *)digitalCardImageUrl;
-(NSString *)thumbnailImageUrl;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDigitalCardImageUrl:(NSString *)arg1 ;
-(void)setThumbnailImageUrl:(NSString *)arg1 ;
-(void)setLogoImageUrl:(NSString *)arg1 ;
-(BOOL)hasDigitalCardImageUrl;
-(BOOL)hasThumbnailImageUrl;
-(BOOL)hasLogoImageUrl;
@end


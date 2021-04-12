/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)digitalCardImageUrl;
-(NSString *)thumbnailImageUrl;
-(NSString *)logoImageUrl;
-(void)setDigitalCardImageUrl:(NSString *)arg1 ;
-(void)setThumbnailImageUrl:(NSString *)arg1 ;
-(void)setLogoImageUrl:(NSString *)arg1 ;
-(BOOL)hasDigitalCardImageUrl;
-(BOOL)hasThumbnailImageUrl;
-(BOOL)hasLogoImageUrl;
@end


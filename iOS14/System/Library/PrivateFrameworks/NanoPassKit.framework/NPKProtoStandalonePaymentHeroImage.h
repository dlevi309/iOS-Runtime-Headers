/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoStandalonePaymentHeroImage : PBCodable <NSCopying> {

	NSString* _identifier;
	NSData* _imageData;
	NSString* _imageHash;
	NSString* _imageURL;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasImageHash; 
@property (nonatomic,retain) NSString * imageHash;               //@synthesize imageHash=_imageHash - In the implementation block
@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;                 //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) BOOL hasImageURL; 
@property (nonatomic,retain) NSString * imageURL;                //@synthesize imageURL=_imageURL - In the implementation block
-(id)dictionaryRepresentation;
-(void)setImageURL:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)imageData;
-(NSString *)imageHash;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(NSString *)imageURL;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageHash:(NSString *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasImageURL;
-(BOOL)hasImageData;
-(BOOL)hasImageHash;
@end


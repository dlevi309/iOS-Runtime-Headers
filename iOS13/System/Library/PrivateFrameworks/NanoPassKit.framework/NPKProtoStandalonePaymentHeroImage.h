/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)imageURL;
-(NSData *)imageData;
-(NSString *)imageHash;
-(void)setImageData:(NSData *)arg1 ;
-(void)setImageHash:(NSString *)arg1 ;
-(void)setImageURL:(NSString *)arg1 ;
-(BOOL)hasImageData;
-(BOOL)hasImageURL;
-(BOOL)hasImageHash;
@end


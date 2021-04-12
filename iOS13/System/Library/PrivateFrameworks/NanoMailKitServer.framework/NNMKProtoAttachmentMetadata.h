/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoAttachmentMetadata : PBCodable <NSCopying> {

	NSString* _contentId;
	NSString* _fileName;
	unsigned _fileSize;
	float _imageHeight;
	float _imageWidth;
	NSString* _mimePartNumber;
	unsigned _type;
	BOOL _renderOnClient;
	SCD_Struct_NN9 _has;

}

@property (nonatomic,readonly) BOOL hasContentId; 
@property (nonatomic,retain) NSString * contentId;                   //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) BOOL hasFileName; 
@property (nonatomic,retain) NSString * fileName;                    //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) BOOL hasFileSize; 
@property (assign,nonatomic) unsigned fileSize;                      //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasRenderOnClient; 
@property (assign,nonatomic) BOOL renderOnClient;                    //@synthesize renderOnClient=_renderOnClient - In the implementation block
@property (assign,nonatomic) BOOL hasImageWidth; 
@property (assign,nonatomic) float imageWidth;                       //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) BOOL hasImageHeight; 
@property (assign,nonatomic) float imageHeight;                      //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,readonly) BOOL hasMimePartNumber; 
@property (nonatomic,retain) NSString * mimePartNumber;              //@synthesize mimePartNumber=_mimePartNumber - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(unsigned)fileSize;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)imageHeight;
-(float)imageWidth;
-(void)setFileSize:(unsigned)arg1 ;
-(NSString *)contentId;
-(void)setContentId:(NSString *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setImageWidth:(float)arg1 ;
-(void)setHasImageWidth:(BOOL)arg1 ;
-(BOOL)hasImageWidth;
-(void)setImageHeight:(float)arg1 ;
-(void)setHasImageHeight:(BOOL)arg1 ;
-(BOOL)hasImageHeight;
-(BOOL)hasFileName;
-(BOOL)hasFileSize;
-(void)setHasFileSize:(BOOL)arg1 ;
-(BOOL)hasContentId;
-(NSString *)mimePartNumber;
-(void)setMimePartNumber:(NSString *)arg1 ;
-(BOOL)renderOnClient;
-(void)setRenderOnClient:(BOOL)arg1 ;
-(void)setHasRenderOnClient:(BOOL)arg1 ;
-(BOOL)hasRenderOnClient;
-(BOOL)hasMimePartNumber;
@end


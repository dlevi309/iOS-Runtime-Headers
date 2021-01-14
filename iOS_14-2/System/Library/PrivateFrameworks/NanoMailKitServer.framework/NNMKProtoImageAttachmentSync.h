/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NNMKProtoImageAttachmentSync : PBCodable <NSCopying> {

	NSString* _contentId;
	NSData* _dateSynced;
	unsigned _fullSyncVersion;
	NSData* _imageData;
	NSString* _messageId;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;              //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSynced; 
@property (nonatomic,retain) NSData * dateSynced;                   //@synthesize dateSynced=_dateSynced - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                  //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) BOOL hasContentId; 
@property (nonatomic,retain) NSString * contentId;                  //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;                    //@synthesize imageData=_imageData - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)contentId;
-(void)setMessageId:(NSString *)arg1 ;
-(void)setContentId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(id)description;
-(NSData *)imageData;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasContentId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(NSString *)messageId;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasImageData;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)setDateSynced:(NSData *)arg1 ;
-(BOOL)hasDateSynced;
-(NSData *)dateSynced;
@end


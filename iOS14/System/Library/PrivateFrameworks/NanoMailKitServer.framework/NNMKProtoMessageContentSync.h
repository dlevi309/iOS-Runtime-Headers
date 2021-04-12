/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, NSString, NNMKProtoMessage;

@interface NNMKProtoMessageContentSync : PBCodable <NSCopying> {

	NSMutableArray* _attachments;
	NSData* _dateSynced;
	unsigned _fullSyncVersion;
	NSData* _htmlContentData;
	NSString* _messageId;
	NNMKProtoMessage* _notificationMessage;
	NSData* _preview;
	NSData* _text;
	BOOL _mainAlternativeValid;
	BOOL _partiallyLoaded;
	SCD_Struct_NN4 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                            //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSynced; 
@property (nonatomic,retain) NSData * dateSynced;                                 //@synthesize dateSynced=_dateSynced - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                                //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) BOOL hasMainAlternativeValid; 
@property (assign,nonatomic) BOOL mainAlternativeValid;                           //@synthesize mainAlternativeValid=_mainAlternativeValid - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) NSData * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL hasPreview; 
@property (nonatomic,retain) NSData * preview;                                    //@synthesize preview=_preview - In the implementation block
@property (assign,nonatomic) BOOL hasPartiallyLoaded; 
@property (assign,nonatomic) BOOL partiallyLoaded;                                //@synthesize partiallyLoaded=_partiallyLoaded - In the implementation block
@property (nonatomic,retain) NSMutableArray * attachments;                        //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationMessage; 
@property (nonatomic,retain) NNMKProtoMessage * notificationMessage;              //@synthesize notificationMessage=_notificationMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasHtmlContentData; 
@property (nonatomic,retain) NSData * htmlContentData;                            //@synthesize htmlContentData=_htmlContentData - In the implementation block
+(Class)attachmentType;
-(BOOL)hasText;
-(id)dictionaryRepresentation;
-(void)addAttachment:(id)arg1 ;
-(NSData *)preview;
-(void)setMessageId:(NSString *)arg1 ;
-(void)setAttachments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attachments;
-(void)setText:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(NSData *)htmlContentData;
-(id)description;
-(NSData *)text;
-(void)setPreview:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NNMKProtoMessage *)notificationMessage;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearAttachments;
-(unsigned long long)attachmentsCount;
-(void)setNotificationMessage:(NNMKProtoMessage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)messageId;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)setDateSynced:(NSData *)arg1 ;
-(id)attachmentAtIndex:(unsigned long long)arg1 ;
-(void)setHtmlContentData:(NSData *)arg1 ;
-(BOOL)hasDateSynced;
-(void)setMainAlternativeValid:(BOOL)arg1 ;
-(void)setHasMainAlternativeValid:(BOOL)arg1 ;
-(BOOL)hasMainAlternativeValid;
-(BOOL)hasPreview;
-(void)setPartiallyLoaded:(BOOL)arg1 ;
-(void)setHasPartiallyLoaded:(BOOL)arg1 ;
-(BOOL)hasPartiallyLoaded;
-(BOOL)hasNotificationMessage;
-(BOOL)hasHtmlContentData;
-(NSData *)dateSynced;
-(BOOL)mainAlternativeValid;
-(BOOL)partiallyLoaded;
@end


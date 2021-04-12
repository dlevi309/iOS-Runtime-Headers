/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageCloudKitAttachmentDownloadFailed : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _attachmentGuid;
	unsigned _attachmentSize;
	unsigned _connectionType;
	int _errorCode;
	NSString* _errorDomain;
	int _linkQuality;
	NSString* _messageGuid;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageGuid; 
@property (nonatomic,retain) NSString * messageGuid;                    //@synthesize messageGuid=_messageGuid - In the implementation block
@property (nonatomic,readonly) BOOL hasAttachmentGuid; 
@property (nonatomic,retain) NSString * attachmentGuid;                 //@synthesize attachmentGuid=_attachmentGuid - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasAttachmentSize; 
@property (assign,nonatomic) unsigned attachmentSize;                   //@synthesize attachmentSize=_attachmentSize - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)connectionType;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(int)errorCode;
-(NSString *)errorDomain;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setAttachmentSize:(unsigned)arg1 ;
-(unsigned)attachmentSize;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(void)setHasAttachmentSize:(BOOL)arg1 ;
-(BOOL)hasAttachmentSize;
-(void)setMessageGuid:(NSString *)arg1 ;
-(void)setAttachmentGuid:(NSString *)arg1 ;
-(BOOL)hasMessageGuid;
-(BOOL)hasAttachmentGuid;
-(NSString *)messageGuid;
-(NSString *)attachmentGuid;
@end


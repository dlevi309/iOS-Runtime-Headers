/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageCloudKitValidatePurgeableAttachment : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _attachmentSize;
	unsigned _connectionType;
	int _linkQuality;
	unsigned _operationalErrorCode;
	NSString* _operationalErrorDomain;
	unsigned _validatedAttachment;
	unsigned _validationErrorCode;
	NSString* _validationErrorDomain;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasValidatedAttachment; 
@property (assign,nonatomic) unsigned validatedAttachment;                   //@synthesize validatedAttachment=_validatedAttachment - In the implementation block
@property (assign,nonatomic) BOOL hasAttachmentSize; 
@property (assign,nonatomic) unsigned attachmentSize;                        //@synthesize attachmentSize=_attachmentSize - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationalErrorDomain; 
@property (nonatomic,retain) NSString * operationalErrorDomain;              //@synthesize operationalErrorDomain=_operationalErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasOperationalErrorCode; 
@property (assign,nonatomic) unsigned operationalErrorCode;                  //@synthesize operationalErrorCode=_operationalErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasValidationErrorDomain; 
@property (nonatomic,retain) NSString * validationErrorDomain;               //@synthesize validationErrorDomain=_validationErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasValidationErrorCode; 
@property (assign,nonatomic) unsigned validationErrorCode;                   //@synthesize validationErrorCode=_validationErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                        //@synthesize connectionType=_connectionType - In the implementation block
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
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setAttachmentSize:(unsigned)arg1 ;
-(unsigned)attachmentSize;
-(void)setValidatedAttachment:(unsigned)arg1 ;
-(void)setOperationalErrorDomain:(NSString *)arg1 ;
-(void)setOperationalErrorCode:(unsigned)arg1 ;
-(void)setValidationErrorDomain:(NSString *)arg1 ;
-(void)setValidationErrorCode:(unsigned)arg1 ;
-(unsigned)validatedAttachment;
-(NSString *)validationErrorDomain;
-(unsigned)validationErrorCode;
-(NSString *)operationalErrorDomain;
-(unsigned)operationalErrorCode;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(void)setHasAttachmentSize:(BOOL)arg1 ;
-(BOOL)hasAttachmentSize;
-(void)setHasValidatedAttachment:(BOOL)arg1 ;
-(BOOL)hasValidatedAttachment;
-(BOOL)hasOperationalErrorDomain;
-(void)setHasOperationalErrorCode:(BOOL)arg1 ;
-(BOOL)hasOperationalErrorCode;
-(BOOL)hasValidationErrorDomain;
-(void)setHasValidationErrorCode:(BOOL)arg1 ;
-(BOOL)hasValidationErrorCode;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_AW16 _has;

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
-(id)dictionaryRepresentation;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(int)linkQuality;
-(unsigned)connectionType;
-(void)setLinkQuality:(int)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasConnectionType;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasLinkQuality;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
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


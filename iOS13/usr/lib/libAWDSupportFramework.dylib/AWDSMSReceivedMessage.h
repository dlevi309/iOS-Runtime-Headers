/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSMSReceivedMessage : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _ctError;
	int _fzError;
	NSString* _guid;
	unsigned _hasAttachments;
	unsigned _isFromEmail;
	unsigned _isFromPhoneNumber;
	unsigned _isGroupMessage;
	SCD_Struct_AW17 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFzError; 
@property (assign,nonatomic) int fzError;                               //@synthesize fzError=_fzError - In the implementation block
@property (assign,nonatomic) BOOL hasCtError; 
@property (assign,nonatomic) int ctError;                               //@synthesize ctError=_ctError - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupMessage; 
@property (assign,nonatomic) unsigned isGroupMessage;                   //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromPhoneNumber; 
@property (assign,nonatomic) unsigned isFromPhoneNumber;                //@synthesize isFromPhoneNumber=_isFromPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromEmail; 
@property (assign,nonatomic) unsigned isFromEmail;                      //@synthesize isFromEmail=_isFromEmail - In the implementation block
@property (assign,nonatomic) BOOL hasHasAttachments; 
@property (assign,nonatomic) unsigned hasAttachments;                   //@synthesize hasAttachments=_hasAttachments - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(void)setHasAttachments:(unsigned)arg1 ;
-(unsigned)hasAttachments;
-(unsigned)isGroupMessage;
-(void)setFzError:(int)arg1 ;
-(void)setCtError:(int)arg1 ;
-(void)setIsGroupMessage:(unsigned)arg1 ;
-(void)setIsFromPhoneNumber:(unsigned)arg1 ;
-(void)setIsFromEmail:(unsigned)arg1 ;
-(int)fzError;
-(int)ctError;
-(unsigned)isFromPhoneNumber;
-(unsigned)isFromEmail;
-(void)setHasFzError:(BOOL)arg1 ;
-(BOOL)hasFzError;
-(void)setHasIsGroupMessage:(BOOL)arg1 ;
-(BOOL)hasIsGroupMessage;
-(void)setHasIsFromPhoneNumber:(BOOL)arg1 ;
-(BOOL)hasIsFromPhoneNumber;
-(void)setHasIsFromEmail:(BOOL)arg1 ;
-(BOOL)hasIsFromEmail;
-(void)setHasHasAttachments:(BOOL)arg1 ;
-(BOOL)hasHasAttachments;
-(void)setHasCtError:(BOOL)arg1 ;
-(BOOL)hasCtError;
@end


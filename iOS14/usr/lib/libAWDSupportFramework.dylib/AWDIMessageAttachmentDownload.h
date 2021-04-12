/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageAttachmentDownload : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _attachmentSize;
	unsigned _connectionType;
	unsigned _downloadDuration;
	int _firstLevelMMCSError;
	NSString* _firstLevelMMCSErrorDomain;
	int _fourthLevelMMCSError;
	NSString* _fourthLevelMMCSErrorDomain;
	int _fzError;
	int _genericError;
	NSString* _guid;
	int _linkQuality;
	unsigned _messageError;
	int _secondLevelMMCSError;
	NSString* _secondLevelMMCSErrorDomain;
	int _thirdLevelMMCSError;
	NSString* _thirdLevelMMCSErrorDomain;
	unsigned _tokenError;
	SCD_Struct_AW7 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                    //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFzError; 
@property (assign,nonatomic) int fzError;                                        //@synthesize fzError=_fzError - In the implementation block
@property (assign,nonatomic) BOOL hasMessageError; 
@property (assign,nonatomic) unsigned messageError;                              //@synthesize messageError=_messageError - In the implementation block
@property (assign,nonatomic) BOOL hasTokenError; 
@property (assign,nonatomic) unsigned tokenError;                                //@synthesize tokenError=_tokenError - In the implementation block
@property (assign,nonatomic) BOOL hasGenericError; 
@property (assign,nonatomic) int genericError;                                   //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadDuration; 
@property (assign,nonatomic) unsigned downloadDuration;                          //@synthesize downloadDuration=_downloadDuration - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                    //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                            //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasAttachmentSize; 
@property (assign,nonatomic) unsigned attachmentSize;                            //@synthesize attachmentSize=_attachmentSize - In the implementation block
@property (assign,nonatomic) BOOL hasFirstLevelMMCSError; 
@property (assign,nonatomic) int firstLevelMMCSError;                            //@synthesize firstLevelMMCSError=_firstLevelMMCSError - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstLevelMMCSErrorDomain; 
@property (nonatomic,retain) NSString * firstLevelMMCSErrorDomain;               //@synthesize firstLevelMMCSErrorDomain=_firstLevelMMCSErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasSecondLevelMMCSError; 
@property (assign,nonatomic) int secondLevelMMCSError;                           //@synthesize secondLevelMMCSError=_secondLevelMMCSError - In the implementation block
@property (nonatomic,readonly) BOOL hasSecondLevelMMCSErrorDomain; 
@property (nonatomic,retain) NSString * secondLevelMMCSErrorDomain;              //@synthesize secondLevelMMCSErrorDomain=_secondLevelMMCSErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasThirdLevelMMCSError; 
@property (assign,nonatomic) int thirdLevelMMCSError;                            //@synthesize thirdLevelMMCSError=_thirdLevelMMCSError - In the implementation block
@property (nonatomic,readonly) BOOL hasThirdLevelMMCSErrorDomain; 
@property (nonatomic,retain) NSString * thirdLevelMMCSErrorDomain;               //@synthesize thirdLevelMMCSErrorDomain=_thirdLevelMMCSErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasFourthLevelMMCSError; 
@property (assign,nonatomic) int fourthLevelMMCSError;                           //@synthesize fourthLevelMMCSError=_fourthLevelMMCSError - In the implementation block
@property (nonatomic,readonly) BOOL hasFourthLevelMMCSErrorDomain; 
@property (nonatomic,retain) NSString * fourthLevelMMCSErrorDomain;              //@synthesize fourthLevelMMCSErrorDomain=_fourthLevelMMCSErrorDomain - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)guid;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(int)linkQuality;
-(unsigned)connectionType;
-(void)setLinkQuality:(int)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)downloadDuration;
-(void)setDownloadDuration:(unsigned)arg1 ;
-(BOOL)hasConnectionType;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasLinkQuality;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(int)fzError;
-(int)genericError;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setFzError:(int)arg1 ;
-(void)setMessageError:(unsigned)arg1 ;
-(unsigned)messageError;
-(void)setTokenError:(unsigned)arg1 ;
-(void)setGenericError:(int)arg1 ;
-(void)setAttachmentSize:(unsigned)arg1 ;
-(void)setFirstLevelMMCSError:(int)arg1 ;
-(void)setSecondLevelMMCSError:(int)arg1 ;
-(void)setThirdLevelMMCSError:(int)arg1 ;
-(void)setFourthLevelMMCSError:(int)arg1 ;
-(void)setFirstLevelMMCSErrorDomain:(NSString *)arg1 ;
-(void)setSecondLevelMMCSErrorDomain:(NSString *)arg1 ;
-(void)setThirdLevelMMCSErrorDomain:(NSString *)arg1 ;
-(void)setFourthLevelMMCSErrorDomain:(NSString *)arg1 ;
-(int)firstLevelMMCSError;
-(NSString *)firstLevelMMCSErrorDomain;
-(int)secondLevelMMCSError;
-(NSString *)secondLevelMMCSErrorDomain;
-(int)thirdLevelMMCSError;
-(NSString *)thirdLevelMMCSErrorDomain;
-(int)fourthLevelMMCSError;
-(NSString *)fourthLevelMMCSErrorDomain;
-(unsigned)tokenError;
-(unsigned)attachmentSize;
-(void)setHasGenericError:(BOOL)arg1 ;
-(BOOL)hasGenericError;
-(void)setHasFzError:(BOOL)arg1 ;
-(BOOL)hasFzError;
-(void)setHasMessageError:(BOOL)arg1 ;
-(BOOL)hasMessageError;
-(void)setHasTokenError:(BOOL)arg1 ;
-(BOOL)hasTokenError;
-(void)setHasDownloadDuration:(BOOL)arg1 ;
-(BOOL)hasDownloadDuration;
-(void)setHasAttachmentSize:(BOOL)arg1 ;
-(BOOL)hasAttachmentSize;
-(void)setHasFirstLevelMMCSError:(BOOL)arg1 ;
-(BOOL)hasFirstLevelMMCSError;
-(BOOL)hasFirstLevelMMCSErrorDomain;
-(void)setHasSecondLevelMMCSError:(BOOL)arg1 ;
-(BOOL)hasSecondLevelMMCSError;
-(BOOL)hasSecondLevelMMCSErrorDomain;
-(void)setHasThirdLevelMMCSError:(BOOL)arg1 ;
-(BOOL)hasThirdLevelMMCSError;
-(BOOL)hasThirdLevelMMCSErrorDomain;
-(void)setHasFourthLevelMMCSError:(BOOL)arg1 ;
-(BOOL)hasFourthLevelMMCSError;
-(BOOL)hasFourthLevelMMCSErrorDomain;
@end


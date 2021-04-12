/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageNicknameRetrieved : PBCodable <NSCopying> {

	unsigned long long _timeTaken;
	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _hasAvatar;
	int _linkQuality;
	unsigned _publicOperationalErrorCode;
	NSString* _publicOperationalErrorDomain;
	unsigned _publicSuccess;
	unsigned _updated;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTimeTaken; 
@property (assign,nonatomic) unsigned long long timeTaken;                         //@synthesize timeTaken=_timeTaken - In the implementation block
@property (assign,nonatomic) BOOL hasUpdated; 
@property (assign,nonatomic) unsigned updated;                                     //@synthesize updated=_updated - In the implementation block
@property (assign,nonatomic) BOOL hasHasAvatar; 
@property (assign,nonatomic) unsigned hasAvatar;                                   //@synthesize hasAvatar=_hasAvatar - In the implementation block
@property (assign,nonatomic) BOOL hasPublicSuccess; 
@property (assign,nonatomic) unsigned publicSuccess;                               //@synthesize publicSuccess=_publicSuccess - In the implementation block
@property (nonatomic,readonly) BOOL hasPublicOperationalErrorDomain; 
@property (nonatomic,retain) NSString * publicOperationalErrorDomain;              //@synthesize publicOperationalErrorDomain=_publicOperationalErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasPublicOperationalErrorCode; 
@property (assign,nonatomic) unsigned publicOperationalErrorCode;                  //@synthesize publicOperationalErrorCode=_publicOperationalErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                      //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                              //@synthesize connectionType=_connectionType - In the implementation block
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
-(unsigned)updated;
-(void)setUpdated:(unsigned)arg1 ;
-(void)setTimeTaken:(unsigned long long)arg1 ;
-(unsigned long long)timeTaken;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(void)setHasTimeTaken:(BOOL)arg1 ;
-(BOOL)hasTimeTaken;
-(void)setPublicOperationalErrorDomain:(NSString *)arg1 ;
-(void)setHasUpdated:(BOOL)arg1 ;
-(BOOL)hasUpdated;
-(void)setHasAvatar:(unsigned)arg1 ;
-(void)setHasHasAvatar:(BOOL)arg1 ;
-(BOOL)hasHasAvatar;
-(void)setPublicSuccess:(unsigned)arg1 ;
-(void)setHasPublicSuccess:(BOOL)arg1 ;
-(BOOL)hasPublicSuccess;
-(BOOL)hasPublicOperationalErrorDomain;
-(void)setPublicOperationalErrorCode:(unsigned)arg1 ;
-(void)setHasPublicOperationalErrorCode:(BOOL)arg1 ;
-(BOOL)hasPublicOperationalErrorCode;
-(unsigned)hasAvatar;
-(unsigned)publicSuccess;
-(NSString *)publicOperationalErrorDomain;
-(unsigned)publicOperationalErrorCode;
@end


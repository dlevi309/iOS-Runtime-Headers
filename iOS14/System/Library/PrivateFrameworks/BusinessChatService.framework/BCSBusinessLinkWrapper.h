/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BCSBusinessLinkMessage, NSString;

@interface BCSBusinessLinkWrapper : PBCodable <NSCopying> {

	long long _modTime;
	BCSBusinessLinkMessage* _message;
	NSString* _orgId;
	SCD_Struct_BC1 _has;

}

@property (nonatomic,readonly) BOOL hasOrgId; 
@property (nonatomic,retain) NSString * orgId;                              //@synthesize orgId=_orgId - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) BCSBusinessLinkMessage * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL hasModTime; 
@property (assign,nonatomic) long long modTime;                             //@synthesize modTime=_modTime - In the implementation block
-(void)setMessage:(BCSBusinessLinkMessage *)arg1 ;
-(id)dictionaryRepresentation;
-(BCSBusinessLinkMessage *)message;
-(NSString *)orgId;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasMessage;
-(unsigned long long)hash;
-(long long)modTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setModTime:(long long)arg1 ;
-(void)setOrgId:(NSString *)arg1 ;
-(BOOL)hasOrgId;
-(void)setHasModTime:(BOOL)arg1 ;
-(BOOL)hasModTime;
@end


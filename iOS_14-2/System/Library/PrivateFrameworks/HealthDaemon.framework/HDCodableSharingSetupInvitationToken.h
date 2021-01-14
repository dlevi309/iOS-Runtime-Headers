/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableSharingSetupInvitationToken : PBCodable <NSCopying> {

	NSString* _shareURL;
	NSData* _token;

}

@property (nonatomic,readonly) BOOL hasShareURL; 
@property (nonatomic,retain) NSString * shareURL;              //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSData * token;                   //@synthesize token=_token - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)shareURL;
-(void)setShareURL:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasToken;
-(void)setToken:(NSData *)arg1 ;
-(BOOL)hasShareURL;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDPRecordStableUrl : PBCodable <NSCopying> {

	NSString* _displayedHostname;
	NSData* _encryptedPublicSharingKey;
	NSData* _protectedFullToken;
	NSString* _routingKey;
	NSData* _shortTokenHash;

}

@property (nonatomic,readonly) BOOL hasRoutingKey; 
@property (nonatomic,retain) NSString * routingKey;                            //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,readonly) BOOL hasShortTokenHash; 
@property (nonatomic,retain) NSData * shortTokenHash;                          //@synthesize shortTokenHash=_shortTokenHash - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedFullToken; 
@property (nonatomic,retain) NSData * protectedFullToken;                      //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedPublicSharingKey; 
@property (nonatomic,retain) NSData * encryptedPublicSharingKey;               //@synthesize encryptedPublicSharingKey=_encryptedPublicSharingKey - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayedHostname; 
@property (nonatomic,retain) NSString * displayedHostname;                     //@synthesize displayedHostname=_displayedHostname - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(BOOL)hasRoutingKey;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)displayedHostname;
-(NSData *)protectedFullToken;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayedHostname:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)encryptedPublicSharingKey;
-(void)setShortTokenHash:(NSData *)arg1 ;
-(BOOL)hasShortTokenHash;
-(NSData *)shortTokenHash;
-(void)setEncryptedPublicSharingKey:(NSData *)arg1 ;
-(BOOL)hasProtectedFullToken;
-(BOOL)hasDisplayedHostname;
-(BOOL)hasEncryptedPublicSharingKey;
@end


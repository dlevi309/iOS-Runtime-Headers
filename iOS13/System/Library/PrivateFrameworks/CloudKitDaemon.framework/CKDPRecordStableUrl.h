/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSString *)displayedHostname;
-(void)setDisplayedHostname:(NSString *)arg1 ;
-(NSData *)encryptedPublicSharingKey;
-(NSData *)protectedFullToken;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(void)setShortTokenHash:(NSData *)arg1 ;
-(BOOL)hasRoutingKey;
-(BOOL)hasShortTokenHash;
-(NSData *)shortTokenHash;
-(void)setEncryptedPublicSharingKey:(NSData *)arg1 ;
-(BOOL)hasProtectedFullToken;
-(BOOL)hasDisplayedHostname;
-(BOOL)hasEncryptedPublicSharingKey;
@end


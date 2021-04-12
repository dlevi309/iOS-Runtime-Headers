/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PBBProtoDemoWirelessCredentials : PBCodable <NSCopying> {

	NSString* _password;
	NSString* _ssid;

}

@property (nonatomic,readonly) BOOL hasSsid; 
@property (nonatomic,retain) NSString * ssid;                  //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,readonly) BOOL hasPassword; 
@property (nonatomic,retain) NSString * password;              //@synthesize password=_password - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)password;
-(id)dictionaryRepresentation;
-(void)setPassword:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(BOOL)hasPassword;
-(BOOL)hasSsid;
@end


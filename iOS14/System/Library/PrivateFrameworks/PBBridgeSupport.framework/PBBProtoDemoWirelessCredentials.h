/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)ssid;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)password;
-(id)description;
-(BOOL)hasPassword;
-(void)setPassword:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasSsid;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKCDPCodeServiceRequestAccountConfig : PBCodable <NSCopying> {

	unsigned long long _accountFlags;
	long long _lastWebActivityUTCMills;
	long long _photosWebAccessTimestamp;
	NSString* _countryCode;
	BOOL _corporateSharingEnabled;
	SCD_Struct_CK11 _has;

}

@property (assign,nonatomic) BOOL hasCorporateSharingEnabled; 
@property (assign,nonatomic) BOOL corporateSharingEnabled;                    //@synthesize corporateSharingEnabled=_corporateSharingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasLastWebActivityUTCMills; 
@property (assign,nonatomic) long long lastWebActivityUTCMills;               //@synthesize lastWebActivityUTCMills=_lastWebActivityUTCMills - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                          //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasPhotosWebAccessTimestamp; 
@property (assign,nonatomic) long long photosWebAccessTimestamp;              //@synthesize photosWebAccessTimestamp=_photosWebAccessTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAccountFlags; 
@property (assign,nonatomic) unsigned long long accountFlags;                 //@synthesize accountFlags=_accountFlags - In the implementation block
-(void)setCountryCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)countryCode;
-(BOOL)hasCountryCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)accountFlags;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCorporateSharingEnabled:(BOOL)arg1 ;
-(void)setHasCorporateSharingEnabled:(BOOL)arg1 ;
-(BOOL)hasCorporateSharingEnabled;
-(void)setLastWebActivityUTCMills:(long long)arg1 ;
-(void)setHasLastWebActivityUTCMills:(BOOL)arg1 ;
-(BOOL)hasLastWebActivityUTCMills;
-(void)setPhotosWebAccessTimestamp:(long long)arg1 ;
-(void)setHasPhotosWebAccessTimestamp:(BOOL)arg1 ;
-(BOOL)hasPhotosWebAccessTimestamp;
-(void)setAccountFlags:(unsigned long long)arg1 ;
-(void)setHasAccountFlags:(BOOL)arg1 ;
-(BOOL)hasAccountFlags;
-(BOOL)corporateSharingEnabled;
-(long long)lastWebActivityUTCMills;
-(long long)photosWebAccessTimestamp;
@end


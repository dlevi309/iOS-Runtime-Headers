/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
*/

#import <CloudServices/CloudServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SecureBackupTermsInfo : PBCodable <NSCopying> {

	NSString* _altDSID;
	NSString* _countryCode;
	NSString* _icloudVersion;
	NSString* _metadata;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasIcloudVersion; 
@property (nonatomic,retain) NSString * icloudVersion;              //@synthesize icloudVersion=_icloudVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                   //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasAltDSID; 
@property (nonatomic,retain) NSString * altDSID;                    //@synthesize altDSID=_altDSID - In the implementation block
-(void)setCountryCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasVersion;
-(NSString *)countryCode;
-(BOOL)hasCountryCode;
-(BOOL)hasMetadata;
-(void)setIcloudVersion:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMetadata:(NSString *)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIcloudVersion;
-(NSString *)icloudVersion;
-(NSString *)metadata;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAltDSID;
@end


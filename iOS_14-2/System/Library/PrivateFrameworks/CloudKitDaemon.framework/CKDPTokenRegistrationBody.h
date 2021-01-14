/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDPTokenRegistrationBody : PBCodable <NSCopying> {

	int _apnsEnv;
	NSString* _bundleIdentifier;
	NSData* _token;
	BOOL _skipBundleIDCheck;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSData * token;                           //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasApnsEnv; 
@property (assign,nonatomic) int apnsEnv;                              //@synthesize apnsEnv=_apnsEnv - In the implementation block
@property (assign,nonatomic) BOOL hasSkipBundleIDCheck; 
@property (assign,nonatomic) BOOL skipBundleIDCheck;                   //@synthesize skipBundleIDCheck=_skipBundleIDCheck - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)bundleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasToken;
-(void)setToken:(NSData *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(int)apnsEnv;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)token;
-(BOOL)hasBundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setApnsEnv:(int)arg1 ;
-(void)setHasApnsEnv:(BOOL)arg1 ;
-(BOOL)hasApnsEnv;
-(id)apnsEnvAsString:(int)arg1 ;
-(int)StringAsApnsEnv:(id)arg1 ;
-(void)setSkipBundleIDCheck:(BOOL)arg1 ;
-(void)setHasSkipBundleIDCheck:(BOOL)arg1 ;
-(BOOL)hasSkipBundleIDCheck;
-(BOOL)skipBundleIDCheck;
@end


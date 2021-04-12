/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)token;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setToken:(NSData *)arg1 ;
-(BOOL)hasBundleIdentifier;
-(BOOL)hasToken;
-(int)apnsEnv;
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


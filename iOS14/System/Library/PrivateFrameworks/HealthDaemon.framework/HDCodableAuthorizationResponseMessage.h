/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableAuthorizationResponseMessage : PBCodable <NSCopying> {

	NSString* _appBundleIdentifier;
	NSString* _errorDescription;
	NSString* _hostAppName;
	NSData* _requestIdentifier;
	BOOL _shouldPrompt;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSData * requestIdentifier;                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasShouldPrompt; 
@property (assign,nonatomic) BOOL shouldPrompt;                           //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (nonatomic,readonly) BOOL hasHostAppName; 
@property (nonatomic,retain) NSString * hostAppName;                      //@synthesize hostAppName=_hostAppName - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;                 //@synthesize errorDescription=_errorDescription - In the implementation block
-(void)setRequestIdentifier:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)requestIdentifier;
-(NSString *)appBundleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasErrorDescription;
-(id)description;
-(NSString *)errorDescription;
-(unsigned long long)hash;
-(void)setErrorDescription:(NSString *)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAppBundleIdentifier;
-(BOOL)hasRequestIdentifier;
-(void)setHostAppName:(NSString *)arg1 ;
-(void)setShouldPrompt:(BOOL)arg1 ;
-(void)setHasShouldPrompt:(BOOL)arg1 ;
-(BOOL)hasShouldPrompt;
-(BOOL)hasHostAppName;
-(BOOL)shouldPrompt;
-(NSString *)hostAppName;
@end


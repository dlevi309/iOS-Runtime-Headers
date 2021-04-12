/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setRequestIdentifier:(NSData *)arg1 ;
-(NSData *)requestIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)errorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)hasRequestIdentifier;
-(BOOL)hasErrorDescription;
-(BOOL)shouldPrompt;
-(void)setShouldPrompt:(BOOL)arg1 ;
-(void)setHostAppName:(NSString *)arg1 ;
-(BOOL)hasAppBundleIdentifier;
-(void)setHasShouldPrompt:(BOOL)arg1 ;
-(BOOL)hasShouldPrompt;
-(BOOL)hasHostAppName;
-(NSString *)hostAppName;
@end


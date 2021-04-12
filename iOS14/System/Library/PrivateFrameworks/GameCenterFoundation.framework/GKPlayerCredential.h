/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, GKPlayerInternal, NSDate;

@interface GKPlayerCredential : GKInternalRepresentation {

	NSString* _accountName;
	NSString* _authenticationToken;
	GKPlayerInternal* _playerInternal;
	long long _environment;
	unsigned _scope;
	NSDate* _scopeModificationDate;
	NSString* _altDSID;
	NSString* _DSID;
	NSString* _rawPassword;

}

@property (retain) NSString * accountName;                         //@synthesize accountName=_accountName - In the implementation block
@property (retain) NSString * authenticationToken;                 //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (retain) NSString * altDSID;                             //@synthesize altDSID=_altDSID - In the implementation block
@property (retain) NSString * DSID;                                //@synthesize DSID=_DSID - In the implementation block
@property (retain) NSString * rawPassword;                         //@synthesize rawPassword=_rawPassword - In the implementation block
@property (retain) GKPlayerInternal * playerInternal;              //@synthesize playerInternal=_playerInternal - In the implementation block
@property (assign) long long environment;                          //@synthesize environment=_environment - In the implementation block
@property (assign) unsigned scope;                                 //@synthesize scope=_scope - In the implementation block
@property (readonly) NSString * scopeAsString; 
@property (retain) NSDate * scopeModificationDate;                 //@synthesize scopeModificationDate=_scopeModificationDate - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)accountName;
-(void)setScope:(unsigned)arg1 ;
-(NSString *)DSID;
-(unsigned)scope;
-(void)setDSID:(NSString *)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(void)setRawPassword:(NSString *)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setEnvironment:(long long)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(unsigned long long)hash;
-(long long)environment;
-(NSString *)rawPassword;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(GKPlayerInternal *)playerInternal;
-(void)setPlayerInternal:(GKPlayerInternal *)arg1 ;
-(void)setScopeModificationDate:(NSDate *)arg1 ;
-(NSDate *)scopeModificationDate;
-(NSString *)scopeAsString;
@end


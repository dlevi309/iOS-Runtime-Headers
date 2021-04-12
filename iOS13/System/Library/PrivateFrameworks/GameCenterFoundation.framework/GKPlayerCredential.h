/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)accountName;
-(unsigned)scope;
-(void)setScope:(unsigned)arg1 ;
-(void)setDSID:(NSString *)arg1 ;
-(void)setRawPassword:(NSString *)arg1 ;
-(NSString *)DSID;
-(NSString *)rawPassword;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(GKPlayerInternal *)playerInternal;
-(void)setPlayerInternal:(GKPlayerInternal *)arg1 ;
-(void)setScopeModificationDate:(NSDate *)arg1 ;
-(NSDate *)scopeModificationDate;
-(NSString *)scopeAsString;
@end


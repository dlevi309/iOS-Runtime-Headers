/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSString, OTControl, CKKSControl, OTEscrowAuthenticationInformation;

@interface OTConfigurationContext : NSObject {

	BOOL _overrideEscrowCache;
	NSString* _context;
	NSString* _containerName;
	NSString* _dsid;
	NSString* _altDSID;
	NSString* _authenticationAppleID;
	NSString* _passwordEquivalentToken;
	OTControl* _otControl;
	CKKSControl* _ckksControl;
	id _sbd;

}

@property (nonatomic,copy) OTEscrowAuthenticationInformation * escrowAuth; 
@property (nonatomic,copy) NSString * context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * containerName;                                    //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,copy) NSString * dsid;                                             //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                          //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * authenticationAppleID;                            //@synthesize authenticationAppleID=_authenticationAppleID - In the implementation block
@property (nonatomic,copy) NSString * passwordEquivalentToken;                          //@synthesize passwordEquivalentToken=_passwordEquivalentToken - In the implementation block
@property (assign,nonatomic) BOOL overrideEscrowCache;                                  //@synthesize overrideEscrowCache=_overrideEscrowCache - In the implementation block
@property (retain) OTControl * otControl;                                               //@synthesize otControl=_otControl - In the implementation block
@property (retain) CKKSControl * ckksControl;                                           //@synthesize ckksControl=_ckksControl - In the implementation block
@property (retain) id sbd;                                                              //@synthesize sbd=_sbd - In the implementation block
-(void)setEscrowAuth:(OTEscrowAuthenticationInformation *)arg1 ;
-(OTEscrowAuthenticationInformation *)escrowAuth;
-(id)sbd;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(NSString *)passwordEquivalentToken;
-(id)init;
-(void)setSbd:(id)arg1 ;
-(CKKSControl *)ckksControl;
-(void)setOtControl:(OTControl *)arg1 ;
-(id)makeOTControl:(id*)arg1 ;
-(id)makeCKKSControl:(id*)arg1 ;
-(NSString *)authenticationAppleID;
-(void)setAuthenticationAppleID:(NSString *)arg1 ;
-(void)setCkksControl:(CKKSControl *)arg1 ;
-(BOOL)overrideEscrowCache;
-(void)setOverrideEscrowCache:(BOOL)arg1 ;
-(NSString *)context;
-(void)setContainerName:(NSString *)arg1 ;
-(void)setPasswordEquivalentToken:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)containerName;
-(OTControl *)otControl;
-(void)setContext:(NSString *)arg1 ;
@end


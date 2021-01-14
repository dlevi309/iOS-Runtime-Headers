/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


@protocol OS_ldap_connection;
#import <AppSSOKerberos/AppSSOKerberos-Structs.h>
@class NSObject;

@interface SOLDAPHelper : NSObject {

	BOOL _isConnected;
	NSObject*<OS_ldap_connection> _ldap;

}

@property (nonatomic,retain) NSObject*<OS_ldap_connection> ldap;              //@synthesize ldap=_ldap - In the implementation block
@property (assign,nonatomic) BOOL isConnected;                                //@synthesize isConnected=_isConnected - In the implementation block
-(BOOL)isConnected;
-(void)disconnect;
-(id)init;
-(NSObject*<OS_ldap_connection>)ldap;
-(void)setIsConnected:(BOOL)arg1 ;
-(void)dealloc;
-(void)setLdap:(NSObject*<OS_ldap_connection>)arg1 ;
-(void)setupLDAPconnection:(id)arg1 andPort:(unsigned short)arg2 andRequireTLSForLDAP:(BOOL)arg3 andBundleIdentifier:(id)arg4 ;
-(void)connectToLDAPWithCompletion:(/*^block*/id)arg1 ;
-(void)connectToLDAPServer:(id)arg1 andPort:(unsigned short)arg2 andBundleIdentifier:(id)arg3 andRequireTLSForLDAP:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)queryforBaseDN:(id)arg1 andScope:(int)arg2 andAttributes:(id)arg3 withFilter:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)useDigestMD5Auth:(id)arg1 andPassword:(id)arg2 ;
-(void)useKerberosAuth:(gss_cred_id_t_desc_structRef)arg1 forSPN:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


@class NSString, NSOperationQueue;

@interface SOADSiteDiscovery : NSObject {

	BOOL _requireTLSForLDAP;
	NSString* _realm;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) NSString * realm;                      //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL requireTLSForLDAP;                //@synthesize requireTLSForLDAP=_requireTLSForLDAP - In the implementation block
-(NSString *)realm;
-(NSOperationQueue *)queue;
-(void)setRealm:(NSString *)arg1 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)setRequireTLSForLDAP:(BOOL)arg1 ;
-(BOOL)requireTLSForLDAP;
-(id)initWithRealm:(id)arg1 requireTLSForLDAP:(BOOL)arg2 ;
-(void)discoverADInfoUsingSourceAppBundleIdentifier:(id)arg1 auditTokenData:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end


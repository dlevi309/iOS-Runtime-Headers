/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


@class NSString;

@interface SOKerberosCredential : NSObject {

	unsigned _lifetime;
	NSString* _name;
	NSString* _uuid;

}

@property (retain) NSString * name;                //@synthesize name=_name - In the implementation block
@property (assign) unsigned lifetime;              //@synthesize lifetime=_lifetime - In the implementation block
@property (retain) NSString * uuid;                //@synthesize uuid=_uuid - In the implementation block
-(NSString *)uuid;
-(id)init;
-(void)setLifetime:(unsigned)arg1 ;
-(unsigned)lifetime;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
@end


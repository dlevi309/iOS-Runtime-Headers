/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(unsigned)lifetime;
-(void)setLifetime:(unsigned)arg1 ;
@end


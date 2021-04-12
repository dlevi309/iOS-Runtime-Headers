/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CWFEAPCredentials : NSObject <NSCopying, NSSecureCoding> {

	void* _TLSIdentityHandle;
	NSString* _username;
	NSString* _password;

}

@property (nonatomic,copy) NSString * username;                        //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) SecIdentityRef TLSIdentity; 
@property (nonatomic,copy) const void* TLSIdentityHandle; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)TLSIdentity;
-(BOOL)isEqualToEAPCredentials:(id)arg1 ;
-(const void*)TLSIdentityHandle;
-(void)setTLSIdentityHandle:(const void*)arg1 ;
@end


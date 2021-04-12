/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSData;

@interface CWFXPCParameters : NSObject <NSCopying, NSSecureCoding> {

	unsigned _QOS;
	NSUUID* _UUID;
	NSString* _interfaceName;
	unsigned long long _timeout;
	NSData* _authorizationExternalFormData;

}

@property (nonatomic,copy) NSUUID * UUID;                                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                            //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) unsigned long long timeout;                        //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) unsigned QOS;                                      //@synthesize QOS=_QOS - In the implementation block
@property (nonatomic,copy) NSData * authorizationExternalFormData;              //@synthesize authorizationExternalFormData=_authorizationExternalFormData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(unsigned long long)timeout;
-(void)setTimeout:(unsigned long long)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setQOS:(unsigned)arg1 ;
-(void)setAuthorizationExternalFormData:(NSData *)arg1 ;
-(NSData *)authorizationExternalFormData;
-(unsigned)QOS;
-(BOOL)isEqualToXPCParameters:(id)arg1 ;
@end


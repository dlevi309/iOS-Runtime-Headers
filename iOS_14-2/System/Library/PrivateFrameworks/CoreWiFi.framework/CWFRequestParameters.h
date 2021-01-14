/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, SFAuthorization, NSData;

@interface CWFRequestParameters : NSObject <NSCopying, NSSecureCoding> {

	int _virtualInterfaceRole;
	NSUUID* _UUID;
	NSString* _interfaceName;
	unsigned long long _timeout;
	long long _qualityOfService;
	long long _queuePriority;
	SFAuthorization* _authorization;

}

@property (nonatomic,copy) NSUUID * UUID;                                                //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) int virtualInterfaceRole;                                   //@synthesize virtualInterfaceRole=_virtualInterfaceRole - In the implementation block
@property (assign,nonatomic) unsigned long long timeout;                                 //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                 //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) long long queuePriority;                                    //@synthesize queuePriority=_queuePriority - In the implementation block
@property (nonatomic,copy) SFAuthorization * authorization;                              //@synthesize authorization=_authorization - In the implementation block
@property (nonatomic,copy,readonly) NSData * authorizationExternalFormData; 
+(BOOL)supportsSecureCoding;
-(void)setQueuePriority:(long long)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(SFAuthorization *)authorization;
-(NSUUID *)UUID;
-(int)virtualInterfaceRole;
-(id)init;
-(void)setVirtualInterfaceRole:(int)arg1 ;
-(long long)queuePriority;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTimeout:(unsigned long long)arg1 ;
-(unsigned long long)timeout;
-(id)__authData:(id)arg1 ;
-(NSData *)authorizationExternalFormData;
-(NSString *)interfaceName;
-(id)description;
-(void)setAuthorization:(SFAuthorization *)arg1 ;
-(BOOL)isEqualTorequestParameters:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(long long)qualityOfService;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


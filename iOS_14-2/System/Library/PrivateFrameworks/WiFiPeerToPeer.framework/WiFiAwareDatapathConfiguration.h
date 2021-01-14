/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WiFiAwareDiscoveryResult, NSString, NSData, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwareDatapathConfiguration : NSObject <NSSecureCoding> {

	WiFiAwareDiscoveryResult* _discoveryResult;
	long long _serviceType;
	NSString* _passphrase;
	NSData* _pmk;
	WiFiAwarePublishDatapathServiceSpecificInfo* _serviceSpecificInfo;

}

@property (nonatomic,readonly) WiFiAwareDiscoveryResult * discoveryResult;                                     //@synthesize discoveryResult=_discoveryResult - In the implementation block
@property (nonatomic,readonly) long long serviceType;                                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSString * passphrase;                                                          //@synthesize passphrase=_passphrase - In the implementation block
@property (nonatomic,readonly) NSData * pmk;                                                                   //@synthesize pmk=_pmk - In the implementation block
@property (nonatomic,readonly) WiFiAwarePublishDatapathServiceSpecificInfo * serviceSpecificInfo;              //@synthesize serviceSpecificInfo=_serviceSpecificInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)pmk;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(WiFiAwareDiscoveryResult *)discoveryResult;
-(WiFiAwarePublishDatapathServiceSpecificInfo *)serviceSpecificInfo;
-(id)initWithCoder:(id)arg1 ;
-(long long)serviceType;
-(NSString *)passphrase;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 passphrase:(id)arg3 pmk:(id)arg4 serviceSpecificInfo:(id)arg5 ;
-(BOOL)passphraseEqual:(id)arg1 ;
-(BOOL)pmkEqual:(id)arg1 ;
@end


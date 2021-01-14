/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <WiFiPeerToPeer/WiFiPeerToPeer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WiFiAwarePublishDatapathSecurityConfiguration, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwarePublishDatapathConfiguration : NSObject <NSSecureCoding, NSCopying> {

	long long _serviceType;
	WiFiAwarePublishDatapathSecurityConfiguration* _securityConfiguration;
	WiFiAwarePublishDatapathServiceSpecificInfo* _serviceSpecificInfo;

}

@property (nonatomic,readonly) long long serviceType;                                                              //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) WiFiAwarePublishDatapathSecurityConfiguration * securityConfiguration;              //@synthesize securityConfiguration=_securityConfiguration - In the implementation block
@property (nonatomic,copy) WiFiAwarePublishDatapathServiceSpecificInfo * serviceSpecificInfo;                      //@synthesize serviceSpecificInfo=_serviceSpecificInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setServiceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg1 ;
-(id)initWithServiceType:(long long)arg1 securityConfiguration:(id)arg2 ;
-(WiFiAwarePublishDatapathServiceSpecificInfo *)serviceSpecificInfo;
-(id)initWithCoder:(id)arg1 ;
-(long long)serviceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)serviceSpecificInfoEqual:(id)arg1 ;
-(WiFiAwarePublishDatapathSecurityConfiguration *)securityConfiguration;
-(BOOL)securityConfigurationEqual:(id)arg1 ;
@end


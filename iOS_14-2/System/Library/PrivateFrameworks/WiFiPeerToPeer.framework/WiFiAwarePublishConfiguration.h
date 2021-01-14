/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <WiFiPeerToPeer/WiFiPeerToPeer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, WiFiAwarePublishServiceSpecificInfo, WiFiAwarePublishDatapathConfiguration;

@interface WiFiAwarePublishConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _furtherServiceDiscoveryRequired;
	BOOL _jumboServiceDiscoveryMessages;
	NSString* _serviceName;
	WiFiAwarePublishServiceSpecificInfo* _serviceSpecificInfo;
	long long _authenticationType;
	WiFiAwarePublishDatapathConfiguration* _datapathConfiguration;

}

@property (nonatomic,readonly) NSString * serviceName;                                                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) WiFiAwarePublishServiceSpecificInfo * serviceSpecificInfo;                  //@synthesize serviceSpecificInfo=_serviceSpecificInfo - In the implementation block
@property (assign,nonatomic) BOOL furtherServiceDiscoveryRequired;                                     //@synthesize furtherServiceDiscoveryRequired=_furtherServiceDiscoveryRequired - In the implementation block
@property (assign,nonatomic) BOOL jumboServiceDiscoveryMessages;                                       //@synthesize jumboServiceDiscoveryMessages=_jumboServiceDiscoveryMessages - In the implementation block
@property (assign,nonatomic) long long authenticationType;                                             //@synthesize authenticationType=_authenticationType - In the implementation block
@property (nonatomic,copy) WiFiAwarePublishDatapathConfiguration * datapathConfiguration;              //@synthesize datapathConfiguration=_datapathConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)authenticationType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)setAuthenticationType:(long long)arg1 ;
-(id)description;
-(void)setDatapathConfiguration:(WiFiAwarePublishDatapathConfiguration *)arg1 ;
-(void)setServiceSpecificInfo:(WiFiAwarePublishServiceSpecificInfo *)arg1 ;
-(NSString *)serviceName;
-(WiFiAwarePublishServiceSpecificInfo *)serviceSpecificInfo;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)furtherServiceDiscoveryRequired;
-(BOOL)jumboServiceDiscoveryMessages;
-(WiFiAwarePublishDatapathConfiguration *)datapathConfiguration;
-(void)setFurtherServiceDiscoveryRequired:(BOOL)arg1 ;
-(void)setJumboServiceDiscoveryMessages:(BOOL)arg1 ;
-(BOOL)serviceSpecificInfoEqual:(id)arg1 ;
-(BOOL)datapathConfigurationEqual:(id)arg1 ;
@end


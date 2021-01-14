/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface WiFiAwareSubscribeConfiguration : NSObject <NSSecureCoding> {

	NSString* _serviceName;
	NSData* _serviceSpecificInfo;
	long long _authenticationType;

}

@property (nonatomic,readonly) NSString * serviceName;                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSData * serviceSpecificInfo;              //@synthesize serviceSpecificInfo=_serviceSpecificInfo - In the implementation block
@property (assign,nonatomic) long long authenticationType;                //@synthesize authenticationType=_authenticationType - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)authenticationType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAuthenticationType:(long long)arg1 ;
-(id)description;
-(NSString *)serviceName;
-(NSData *)serviceSpecificInfo;
-(id)initWithServiceName:(id)arg1 serviceSpecificInfo:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)serviceSpecificInfoEqual:(id)arg1 ;
@end


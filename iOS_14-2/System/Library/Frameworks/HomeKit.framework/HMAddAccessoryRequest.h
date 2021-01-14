/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMHome, NSString, HMAccessoryCategory, NSUUID, HMSetupAccessoryDescription;

@interface HMAddAccessoryRequest : NSObject <NSSecureCoding> {

	BOOL _requiresSetupPayloadURL;
	BOOL _requiresOwnershipToken;
	HMHome* _home;
	NSString* _accessoryName;
	HMAccessoryCategory* _accessoryCategory;
	NSUUID* _requestIdentifier;
	HMSetupAccessoryDescription* _accessoryDescription;

}

@property (nonatomic,retain) HMHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSUUID * requestIdentifier;                                    //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) HMSetupAccessoryDescription * accessoryDescription;              //@synthesize accessoryDescription=_accessoryDescription - In the implementation block
@property (nonatomic,readonly) NSString * accessoryName;                                      //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) HMAccessoryCategory * accessoryCategory;                       //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
@property (nonatomic,readonly) BOOL requiresSetupPayloadURL;                                  //@synthesize requiresSetupPayloadURL=_requiresSetupPayloadURL - In the implementation block
@property (nonatomic,readonly) BOOL requiresOwnershipToken;                                   //@synthesize requiresOwnershipToken=_requiresOwnershipToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accessoryName;
-(NSUUID *)requestIdentifier;
-(void)setAccessoryDescription:(HMSetupAccessoryDescription *)arg1 ;
-(HMSetupAccessoryDescription *)accessoryDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)requiresSetupPayloadURL;
-(id)payloadWithOwnershipToken:(id)arg1 ;
-(id)payloadWithURL:(id)arg1 ownershipToken:(id)arg2 ;
-(id)initWithIdentifer:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3 ;
-(BOOL)requiresOwnershipToken;
-(HMAccessoryCategory *)accessoryCategory;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HMHome *)home;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginAuthenticationRequest.h>
#import <libobjc.A.dylib/HMRemoteLoginMessageProtocol.h>

@class ACAccount, AKDevice, NSString, NSDictionary;

@interface HMDRemoteLoginCompanionAuthenticationRequest : HMDRemoteLoginAuthenticationRequest <HMRemoteLoginMessageProtocol> {

	ACAccount* _account;
	AKDevice* _companionDevice;

}

@property (nonatomic,retain) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) AKDevice * companionDevice;                    //@synthesize companionDevice=_companionDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageName; 
@property (nonatomic,copy,readonly) NSString * xpcMessageName; 
@property (nonatomic,readonly) NSDictionary * messagePayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(AKDevice *)companionDevice;
-(NSString *)messageName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCompanionDevice:(AKDevice *)arg1 ;
-(NSDictionary *)messagePayload;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)xpcMessageName;
@end


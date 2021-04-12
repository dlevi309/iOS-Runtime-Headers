/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSCTSIM.h>
@class NSString;


@protocol IDSCTSIM <NSObject>
@property (nonatomic,readonly) NSString * SIMIdentifier; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) BOOL isDefaultVoiceSIM; 
@property (nonatomic,readonly) unsigned long long slot; 
@property (nonatomic,readonly) NSString * mobileCountryCode; 
@property (nonatomic,readonly) NSString * mobileNetworkCode; 
@required
-(NSString *)mobileNetworkCode;
-(NSString *)mobileCountryCode;
-(BOOL)isDefaultVoiceSIM;
-(NSString *)phoneNumber;
-(NSString *)SIMIdentifier;
-(unsigned long long)slot;
-(NSString *)label;

@end


@class NSString, CTXPCServiceSubscriptionContext;

@interface IDSCTSIM : NSObject <IDSCTSIM> {

	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	CTXPCServiceSubscriptionContext* _context;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * SIMIdentifier; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) BOOL isDefaultVoiceSIM; 
@property (nonatomic,readonly) unsigned long long slot; 
@property (nonatomic,readonly) NSString * mobileCountryCode; 
@property (nonatomic,readonly) NSString * mobileNetworkCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)mobileNetworkCode;
-(id)initWithContext:(id)arg1 ;
-(NSString *)mobileCountryCode;
-(BOOL)isDefaultVoiceSIM;
-(NSString *)phoneNumber;
-(CTXPCServiceSubscriptionContext *)context;
-(NSString *)description;
-(NSString *)SIMIdentifier;
-(unsigned long long)slot;
-(NSString *)label;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/

#import <DaemonUtils/Request.h>

@class NSData, NSDictionary;

@interface EvaluationRequest : Request {

	long long _policy;
	NSData* _acl;
	id _aclOperation;
	NSDictionary* _options;
	long long _purpose;

}

@property (nonatomic,readonly) long long policy;                    //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSData * acl;                        //@synthesize acl=_acl - In the implementation block
@property (nonatomic,readonly) id aclOperation;                     //@synthesize aclOperation=_aclOperation - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long purpose;                   //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) BOOL isApplePay; 
@property (nonatomic,readonly) BOOL isUnlock; 
@property (nonatomic,readonly) BOOL isInAppPayment; 
+(BOOL)isApplePayPolicy:(long long)arg1 ;
-(long long)purpose;
-(long long)policy;
-(NSData *)acl;
-(id)aclOperation;
-(NSDictionary *)options;
-(BOOL)interactive;
-(BOOL)isInAppPayment;
-(BOOL)isApplePay;
-(id)initWithAcl:(id)arg1 operation:(id)arg2 options:(id)arg3 ;
-(void)updateOptions:(id)arg1 ;
-(id)initWithPolicy:(long long)arg1 options:(id)arg2 ;
-(BOOL)isUnlock;
@end


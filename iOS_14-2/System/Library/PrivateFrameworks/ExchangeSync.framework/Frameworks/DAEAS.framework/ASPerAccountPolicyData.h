/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class NSString, NSDictionary;

@interface ASPerAccountPolicyData : NSObject {

	NSString* _accountPersistentUUID;

}

@property (nonatomic,readonly) NSString * policyKey; 
@property (nonatomic,readonly) NSDictionary * policyValues; 
-(id)description;
-(NSString *)policyKey;
-(id)initWithAccountPersistentUUID:(id)arg1 ;
-(NSDictionary *)policyValues;
-(void)setPolicyKey:(id)arg1 policyValues:(id)arg2 ;
@end


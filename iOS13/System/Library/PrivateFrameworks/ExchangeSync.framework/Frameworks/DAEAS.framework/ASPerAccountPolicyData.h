/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


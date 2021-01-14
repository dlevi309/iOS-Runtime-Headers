/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSDictionary, ASPolicy, NSString;

@interface ASProvisionTask : ASTask {

	BOOL _accountOnlyRemoteWipeSuccess;
	int _type;
	NSDictionary* _deviceInfo;
	ASPolicy* _policy;
	NSString* _key;

}

@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL accountOnlyRemoteWipeSuccess;              //@synthesize accountOnlyRemoteWipeSuccess=_accountOnlyRemoteWipeSuccess - In the implementation block
@property (nonatomic,retain) ASPolicy * policy;                              //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSDictionary * deviceInfo;                      //@synthesize deviceInfo=_deviceInfo - In the implementation block
-(NSDictionary *)deviceInfo;
-(void)setPolicy:(ASPolicy *)arg1 ;
-(void)setDeviceInfo:(NSDictionary *)arg1 ;
-(ASPolicy *)policy;
-(void)setType:(int)arg1 ;
-(NSString *)key;
-(int)type;
-(void)finishWithError:(id)arg1 ;
-(id)requestBody;
-(void)setKey:(NSString *)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)initWithOriginalKeyForPolicyRequest:(id)arg1 ;
-(id)initWithPolicyAcknowledgement:(id)arg1 withKey:(id)arg2 ;
-(id)initWithRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2 ;
-(id)initWithAccountOnlyRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2 accountOnlyRemoteWipeSuccess:(BOOL)arg3 ;
-(void)setAccountOnlyRemoteWipeSuccess:(BOOL)arg1 ;
-(id)_initWithType:(int)arg1 policy:(id)arg2 key:(id)arg3 ;
-(id)_initWithType:(int)arg1 policy:(id)arg2 key:(id)arg3 accountOnlyRemoteWipeSuccess:(BOOL)arg4 ;
-(id)_provisioningType;
-(BOOL)accountOnlyRemoteWipeSuccess;
-(id)_policyID;
-(BOOL)requiresEASVersionUpdate;
@end


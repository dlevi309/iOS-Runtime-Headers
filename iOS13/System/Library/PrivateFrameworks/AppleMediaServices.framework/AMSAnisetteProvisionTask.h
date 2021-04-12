/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount, NSData;

@interface AMSAnisetteProvisionTask : AMSTask {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSData* _data;
	long long _type;

}

@property (nonatomic,readonly) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
-(long long)type;
-(NSData *)data;
-(ACAccount *)account;
-(id)initWithData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
-(id)performProvisioning;
-(id)_startProvisioningWithOutputSessionID:(unsigned*)arg1 error:(id*)arg2 ;
-(id)_createFinishProvisioningRequestWithClientData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processFinishProvisioningResult:(id)arg1 sessionID:(unsigned)arg2 error:(id*)arg3 ;
-(id<AMSBagProtocol>)bag;
@end


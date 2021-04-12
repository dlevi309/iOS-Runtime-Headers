/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class ACAccount, NSObject, NSString, NSDictionary, NSNumber;

@interface AMSPushPayload : NSObject {

	ACAccount* _account;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSString* _logKey;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) ACAccount * account; 
@property (nonatomic,readonly) NSNumber * accountIdentifier; 
@property (nonatomic,readonly) NSString * actionType; 
@property (nonatomic,readonly) long long alertType; 
@property (nonatomic,readonly) NSDictionary * aps; 
@property (nonatomic,readonly) NSString * clientIdentifier; 
@property (nonatomic,readonly) NSString * logKey;                         //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;                    //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,readonly) NSString * URLString; 
+(id)actionTypeFromPayload:(id)arg1 ;
-(NSString *)URLString;
-(NSDictionary *)aps;
-(ACAccount *)account;
-(long long)alertType;
-(NSString *)actionType;
-(id)initWithPayload:(id)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSDictionary *)payload;
-(NSString *)clientIdentifier;
-(long long)priority;
-(NSString *)logKey;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HAPAuthSessionDelegate, OS_dispatch_queue;
@class NSObject, NSNumber, NSData, NSUUID, NSString;

@interface HAPAuthSession : HMFObject <HMFLogging> {

	unsigned char _currentTID;
	id<HAPAuthSessionDelegate> _delegate;
	long long _role;
	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned long long _currentState;
	NSNumber* _instanceId;
	NSData* _token1;
	NSData* _token2;
	NSUUID* _provisionUUID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) unsigned long long currentState;                       //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) unsigned char currentTID;                              //@synthesize currentTID=_currentTID - In the implementation block
@property (nonatomic,retain) NSNumber * instanceId;                                 //@synthesize instanceId=_instanceId - In the implementation block
@property (nonatomic,retain) NSData * token1;                                       //@synthesize token1=_token1 - In the implementation block
@property (nonatomic,retain) NSData * token2;                                       //@synthesize token2=_token2 - In the implementation block
@property (nonatomic,retain) NSUUID * provisionUUID;                                //@synthesize provisionUUID=_provisionUUID - In the implementation block
@property (__weak,readonly) id<HAPAuthSessionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long role;                                      //@synthesize role=_role - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSNumber *)instanceId;
-(void)setCurrentState:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(unsigned long long)currentState;
-(id<HAPAuthSessionDelegate>)delegate;
-(void)_resetSession;
-(NSData *)token1;
-(NSData *)token2;
-(void)setInstanceId:(NSNumber *)arg1 ;
-(void)resetSession;
-(long long)role;
-(void)continueAuthAfterValidation:(BOOL)arg1 ;
-(void)setToken2:(NSData *)arg1 ;
-(void)setToken1:(NSData *)arg1 ;
-(void)_handleAuthExchangeData:(id)arg1 withHeader:(BOOL)arg2 ;
-(void)_sendTokenRequest;
-(void)_handleTokenResponse:(id)arg1 withHeader:(BOOL)arg2 ;
-(void)_handleTokenUpdateResponse:(id)arg1 withHeader:(BOOL)arg2 ;
-(NSUUID *)provisionUUID;
-(void)_reportAuthFailure;
-(void)setCurrentTID:(unsigned char)arg1 ;
-(unsigned char)currentTID;
-(void)setProvisionUUID:(NSUUID *)arg1 ;
-(void)_sendTokenUpdateRequest:(id)arg1 ;
-(id)initWithRole:(long long)arg1 instanceId:(id)arg2 delegate:(id)arg3 ;
-(void)handleAuthExchangeData:(id)arg1 withHeader:(BOOL)arg2 ;
-(void)sendTokenUpdateRequest:(id)arg1 ;
-(BOOL)getToken:(id*)arg1 uuid:(id*)arg2 ;
@end


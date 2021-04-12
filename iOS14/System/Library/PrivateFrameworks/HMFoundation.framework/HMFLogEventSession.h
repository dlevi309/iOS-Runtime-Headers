/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFLogging.h>

@protocol HMFLogBackendSession;
@class NSUUID, HMFLogEventSessionVoucher, NSString;

@interface HMFLogEventSession : NSObject <HMFLogging> {

	unsigned long long _signpostId;
	NSUUID* _uuid;
	NSUUID* _rootUUID;
	id<HMFLogBackendSession> _backend;

}

@property (nonatomic,readonly) id<HMFLogBackendSession> backend;                 //@synthesize backend=_backend - In the implementation block
@property (nonatomic,readonly) HMFLogEventSessionVoucher * voucher; 
@property (nonatomic,readonly) unsigned long long signpostId;                    //@synthesize signpostId=_signpostId - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * rootUUID;                                //@synthesize rootUUID=_rootUUID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMFLogEventSessionVoucher *)voucher;
-(NSUUID *)uuid;
-(void)submitEventWithName:(id)arg1 payload:(id)arg2 ;
-(NSUUID *)rootUUID;
-(id<HMFLogBackendSession>)backend;
-(NSString *)serviceName;
-(unsigned long long)signpostId;
-(void)dealloc;
-(id)initWithUUID:(id)arg1 rootUUID:(id)arg2 backend:(id)arg3 ;
@end


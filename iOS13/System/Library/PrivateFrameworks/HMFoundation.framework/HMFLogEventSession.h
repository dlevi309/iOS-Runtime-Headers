/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFLogEventSessionVoucher, RTCReporting, HMFUnfairLock, NSString;

@interface HMFLogEventSession : NSObject <HMFLogging, NSSecureCoding> {

	HMFLogEventSessionVoucher* _voucher;
	unsigned long long _signpostId;
	RTCReporting* _rtcSession;
	HMFUnfairLock* _sessionLock;
	/*^block*/id _finalizeBlock;

}

@property (nonatomic,retain) RTCReporting * rtcSession;                          //@synthesize rtcSession=_rtcSession - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * sessionLock;                      //@synthesize sessionLock=_sessionLock - In the implementation block
@property (assign,nonatomic) unsigned long long signpostId;                      //@synthesize signpostId=_signpostId - In the implementation block
@property (nonatomic,copy) id finalizeBlock;                                     //@synthesize finalizeBlock=_finalizeBlock - In the implementation block
@property (nonatomic,readonly) HMFLogEventSessionVoucher * voucher;              //@synthesize voucher=_voucher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMFLogEventSessionVoucher *)voucher;
-(id)initWithVoucher:(id)arg1 rtcFactory:(id)arg2 finalizeBlock:(/*^block*/id)arg3 ;
-(void)finalizeSession;
-(HMFUnfairLock *)sessionLock;
-(RTCReporting *)rtcSession;
-(id)finalizeBlock;
-(void)setFinalizeBlock:(id)arg1 ;
-(void)setRtcSession:(RTCReporting *)arg1 ;
-(id)initWithVoucher:(id)arg1 finalizeBlock:(/*^block*/id)arg2 ;
-(void)submitEventWithName:(id)arg1 payload:(id)arg2 ;
-(unsigned long long)signpostId;
-(void)setSignpostId:(unsigned long long)arg1 ;
@end


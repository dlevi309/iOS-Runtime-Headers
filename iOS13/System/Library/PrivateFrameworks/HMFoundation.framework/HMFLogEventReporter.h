/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/


@class HMFSystemInfo;

@interface HMFLogEventReporter : NSObject {

	HMFSystemInfo* _systemInfo;

}

@property (nonatomic,readonly) HMFSystemInfo * systemInfo;                 //@synthesize systemInfo=_systemInfo - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
+(id)sharedReporter;
-(BOOL)isEnabled;
-(HMFSystemInfo *)systemInfo;
-(id)initWithSystemInfo:(id)arg1 ;
-(id)startSessionForServiceName:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(/*^block*/id)arg3 ;
-(id)adoptVoucher:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(/*^block*/id)arg3 ;
-(void)submitSingleEventWithName:(id)arg1 payload:(id)arg2 ;
@end


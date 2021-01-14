/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/


@interface HMFLogEventReporter : NSObject

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
+(id)sharedReporter;
-(BOOL)isEnabled;
-(id)initWithSystemInfo:(id)arg1 ;
-(id)startSessionForServiceName:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(/*^block*/id)arg3 ;
-(id)adoptVoucher:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(/*^block*/id)arg3 ;
-(void)submitSingleEventWithName:(id)arg1 payload:(id)arg2 ;
@end


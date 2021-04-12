/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@interface CTServerConnection : NSObject
+(void)registerForCTNofication:(const CFStringRef)arg1 ctShim:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)unregisterForCTNotification:(const CFStringRef)arg1 ctShim:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)copyCellInfoModern:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)copyCellInfoLegacy:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


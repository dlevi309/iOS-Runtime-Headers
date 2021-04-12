/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/HKPPTController.h>

@protocol HKPPTInterface, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface HKPPT : NSObject <HKPPTController> {

	id<HKPPTInterface> _pptInterface;
	NSObject*<OS_dispatch_queue> _pptQueue;
	NSMutableDictionary* _activeTestsByName;

}
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)startedTest:(id)arg1 ;
-(id)init;
-(id)builtinTests;
-(void)_startedTest:(id)arg1 ;
-(void)failedTest:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(id)_testNameForDriver:(id)arg1 ;
-(void)_failedTest:(id)arg1 withResults:(id)arg2 ;
-(void)_failedTest:(id)arg1 ;
-(void)_finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)_finishedTest:(id)arg1 ;
-(void)invalidConfigurationForTest:(id)arg1 error:(id)arg2 ;
-(id)initWithHKPPTInterface:(id)arg1 usingQueue:(id)arg2 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)dealloc;
@end


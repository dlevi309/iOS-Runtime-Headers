/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)startedTest:(id)arg1 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(id)builtinTests;
-(void)failedTest:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(id)_testNameForDriver:(id)arg1 ;
-(void)_startedTest:(id)arg1 ;
-(void)_failedTest:(id)arg1 withResults:(id)arg2 ;
-(void)_failedTest:(id)arg1 ;
-(void)_finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)_finishedTest:(id)arg1 ;
-(void)invalidConfigurationForTest:(id)arg1 error:(id)arg2 ;
-(id)initWithHKPPTInterface:(id)arg1 usingQueue:(id)arg2 ;
@end

